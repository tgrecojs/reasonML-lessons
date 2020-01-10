// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE
'use strict';

var Curry = require("bs-platform/lib/js/curry.js");
var React = require("react");
var Layout$ReactHooksTemplate = require("./Layout.bs.js");
var Styles$ReactHooksTemplate = require("./Styles.bs.js");

function Counters(Props) {
  var match = Props.greeting;
  var greeting = match !== undefined ? match : "Default Greeting";
  var match$1 = React.useReducer((function (state, action) {
          switch (action) {
            case /* Click */0 :
                return {
                        count: state.count + 1 | 0,
                        incrementValue: state.incrementValue
                      };
            case /* UpdateIncrementValue */1 :
                return {
                        count: state.count,
                        incrementValue: state.incrementValue + 1 | 0
                      };
            case /* AddMany */2 :
                return {
                        count: state.count + state.incrementValue | 0,
                        incrementValue: 0
                      };
            
          }
        }), {
        count: 0,
        incrementValue: 0
      });
  var dispatch = match$1[1];
  var state = match$1[0];
  var message = "You've clicked this " + (String(state.count) + " times(s)");
  return React.createElement(Layout$ReactHooksTemplate.make, {
              children: null,
              username: "tgrecojs"
            }, React.createElement("h2", undefined, greeting), React.createElement("button", {
                  className: Styles$ReactHooksTemplate.button,
                  onClick: (function (_event) {
                      return Curry._1(dispatch, /* Click */0);
                    })
                }, message), React.createElement("button", {
                  className: Styles$ReactHooksTemplate.button,
                  onClick: (function (_event) {
                      return Curry._1(dispatch, /* UpdateIncrementValue */1);
                    })
                }, "Increase Increment Value::" + String(state.incrementValue)), React.createElement("button", {
                  className: Styles$ReactHooksTemplate.button,
                  onClick: (function (_event) {
                      return Curry._1(dispatch, /* AddMany */2);
                    })
                }, "Add Increment Value to Count"));
}

var make = Counters;

exports.make = make;
/* react Not a pure module */