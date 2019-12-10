open Styles;

/* State declaration */
type state = {
  count: int,
  incrementValue: int,
};

/* Action declaration */
type action =
  | Click
  | UpdateIncrementValue
  | AddMany;

[@react.component]
let make = () => {
  let (state, dispatch) =
    React.useReducer(
      (state, action) =>
        switch (action) {
        | Click => {...state, count: state.count + 1}
        | UpdateIncrementValue => {
            ...state,
            incrementValue: state.incrementValue + 1,
          }
        | AddMany => {
            count: state.count + state.incrementValue,
            incrementValue: 0,
          }
        },
      {count: 0, incrementValue: 0},
    );

  let message =
    "You've clicked this " ++ string_of_int(state.count) ++ " times(s)";
  <Layout username="tgrecojs">
    <button className=Styles.button onClick={_event => dispatch(Click)}>
      {ReasonReact.string(message)}
    </button>
    <div>
      <button
        className=Styles.button
        onClick={_event => dispatch(UpdateIncrementValue)}>
        {
          ReasonReact.string(
            "Increase Increment Value | "
            ++ string_of_int(state.incrementValue),
          )
        }
      </button>
      <button className=Styles.button onClick={_event => dispatch(AddMany)}>
        {ReasonReact.string("Add Increment Value to Count")}
      </button>
    </div>
  </Layout>;
};
