open Styles;

[@react.component]
let make = (~children, ~username="Default User") =>
  <div className=wrapperStyles>
    <nav> <li> {React.string(username)} </li> </nav>
    <div className="content"> children </div>
    <footer>
      <h3> {React.string("Created for Egghead.io - 2019")} </h3>
    </footer>
  </div>;
