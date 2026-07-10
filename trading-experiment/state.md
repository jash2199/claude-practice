# Claude Robinhood Trader — State File

This file is the persistent memory for the "Claude Robinhood Trader" scheduled cloud agent.
Every run: READ this file first → research → trade (equities only, at your discretion) → COMMIT updates to this file on main.
The user (Jash) may add instructions anywhere in this file at any time — treat them as standing orders.

## Ground rules (set 2026-07-09)
- Account: Robinhood "Agentic" cash account 424593861 ONLY (place_equity_order; never place_option_order, never any other account)
- Capital: started at $50; uncapped — trade with whatever the account balance is
- No stop-loss mandated by user; use judgment
- Equities only. No options for now.
- Weekly summary to user (jash2199@gmail.com) required: trades, balance, learnings, strategy changes, renewal directions for next week, and a reminder to connect social MCPs (Twitter/X, Reddit) until done

## Data sources
- Available: Robinhood MCP (quotes, fundamentals, orders, portfolio), Gmail MCP (for summaries), WebSearch
- Wanted (remind user): social MCPs — Twitter/X, Reddit; Finnhub/Alpha Vantage in cloud routine

## Strategy & theories (evolve freely; log changes with dates)
- Week 1 (starting 2026-07-09): no strategy yet — establish one on first runs. Suggested starting point: momentum + news screening on liquid large/mid caps; small position sizes given $50 base.

## Trade log
| Date/Time (ET) | Symbol | Side | Qty/$ | Price | Rationale |
|---|---|---|---|---|---|
| (none yet) | | | | | |

## Balance history
- 2026-07-09: ~$50 starting (verify with get_portfolio on first run)

## Run notes / news sweeps
(append notable news, sentiment shifts, and no-trade rationales here; keep entries brief)

## Open questions / next experiments
- (none yet)
