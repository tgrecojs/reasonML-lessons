open Styles;

/* State declaration */
type state = {
  count: int,
  incrementValue: ref(int)
};

/* Action declaration */
type action =
  | Click
  | UpdateIncrementValue
  | AddMany;

[@react.component]
let make = (~greeting = "Default Greeting") => {
  let (state, dispatch) =
    React.useReducer(
      (state, action) =>
        switch (action) {
        | Click => {...state, count: state.count + 1}
        | UpdateIncrementValue =>
        Js.log(state.incrementValue^);
        state.incrementValue := state.incrementValue^ + 1;
        {...state, incrementValue: state.incrementValue }
        | AddMany => 
        {
            count: state.count + state.incrementValue^,
            incrementValue: ref(0)
          }
        },
      {count: 0, incrementValue: ref(0) },
    );

  let message =
    "You've clicked this " ++ string_of_int(state.count) ++ " times(s)";
  <Layout username="tgrecojs">
    <h2>{ReasonReact.string(greeting)}</h2>
    <button 
    className=Styles.button
    onClick={_event => dispatch(Click)}>
      {ReasonReact.string(message)}
    </button>
  <div>
   <button 
   className=Styles.button
   onClick={_event => dispatch(UpdateIncrementValue)}>
      {ReasonReact.string("Increase Increment Value::" ++ string_of_int(state.incrementValue^) )}
    </button>
    <button 
    className=Styles.button
    onClick={_event => dispatch(AddMany)}>
      {ReasonReact.string("Add Increment Value to Count")}
    </button>
  </div>
  </Layout>;
};