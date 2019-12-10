// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE
'use strict';

var Curry = require("bs-platform/lib/js/curry.js");
var React = require("react");
var Layout$ReactHooksTemplate = require("./Layout.bs.js");
var Styles$ReactHooksTemplate = require("./Styles.bs.js");

function Counters(Props) {
  var match = React.useReducer((function (state, action) {
          switch (action) {
            case /* Click */0 :
                return /* record */[
                        /* count */state[/* count */0] + 1 | 0,
                        /* incrementValue */state[/* incrementValue */1]
                      ];
            case /* UpdateIncrementValue */1 :
                return /* record */[
                        /* count */state[/* count */0],
                        /* incrementValue */state[/* incrementValue */1] + 1 | 0
                      ];
            case /* AddMany */2 :
                return /* record */[
                        /* count */state[/* count */0] + state[/* incrementValue */1] | 0,
                        /* incrementValue */0
                      ];
            
          }
        }), /* record */[
        /* count */0,
        /* incrementValue */0
      ]);
  var dispatch = match[1];
  var state = match[0];
  var message = "You've clicked this " + (String(state[/* count */0]) + " times(s)");
  return React.createElement(Layout$ReactHooksTemplate.make, {
              children: null,
              username: "tgrecojs"
            }, React.createElement("button", {
                  className: Styles$ReactHooksTemplate.Styles.button,
                  onClick: (function (_event) {
                      return Curry._1(dispatch, /* Click */0);
                    })
                }, message), React.createElement("div", undefined, React.createElement("button", {
                      className: Styles$ReactHooksTemplate.Styles.button,
                      onClick: (function (_event) {
                          return Curry._1(dispatch, /* UpdateIncrementValue */1);
                        })
                    }, "Increase Increment Value | " + String(state[/* incrementValue */1])), React.createElement("button", {
                      className: Styles$ReactHooksTemplate.Styles.button,
                      onClick: (function (_event) {
                          return Curry._1(dispatch, /* AddMany */2);
                        })
                    }, "Add Increment Value to Count")));
}

var make = Counters;

exports.make = make;
/* react Not a pure module */
