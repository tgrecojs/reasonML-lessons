/* State declaration */
type state = {
  count: int,
  show: bool,
  incrementValue: ref(int),
};

/* Action declaration */
type action =
  | Click
  | IncrementCount
  | AddMany(int)
  | Toggle;

[@react.component]
let make = (~greeting) => {
  let (state, dispatch) =
    React.useReducer(
      (state, action) =>
        switch (action) {
        | Click => {...state, count: state.count + 1}
        | IncrementCount =>
          state.incrementValue := state.incrementValue^ + 1;
          {...state, incrementValue: state.incrementValue};
        | AddMany(incrementValue) => {
            ...state,
            count: state.count + incrementValue,
          }
        | Toggle => {...state, show: !state.show}
        },
      {count: 0, show: true, incrementValue: ref(0)},
    );

  let message =
    "You've clicked this " ++ string_of_int(state.count) ++ " times(s)";
  <div>
    <button onClick={_event => dispatch(Click)}>
      {ReasonReact.string(message)}
    </button>
    <button onClick={_event => dispatch(AddMany(5))}>
      {ReasonReact.string("Add Many to Count")}
    </button>
    <button onClick={_event => dispatch(Toggle)}>
      {ReasonReact.string("Toggle greeting")}
    </button>
    {state.show ? ReasonReact.string(greeting) : ReasonReact.null}
  </div>;
};