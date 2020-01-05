// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE
'use strict';

var React = require("react");
var Styles$ReactHooksTemplate = require("./Styles.bs.js");

function Layout(Props) {
  var children = Props.children;
  var match = Props.username;
  var username = match !== undefined ? match : "Default User";
  return React.createElement("div", {
              className: Styles$ReactHooksTemplate.AppDesign.wrapperStyles
            }, React.createElement("nav", undefined, React.createElement("li", undefined, username)), React.createElement("div", {
                  className: "content"
                }, children), React.createElement("footer", undefined, React.createElement("h3", undefined, "Created for Egghead.io - 2019")));
}

var make = Layout;

exports.make = make;
/* react Not a pure module */
