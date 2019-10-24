[@react.component]
let make = (~username, ~children) =>
    <>
        <nav>
            <li>
                {ReasonReact.string("Signed in as:" ++ username)}
            </li>
        </nav>
        <div className="content">
        {children}
        </div>
        <footer>
            <h4>{ReasonReact.string("Footer text")}</h4>
        </footer>
    </>;