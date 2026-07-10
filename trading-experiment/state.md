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
- 2026-07-10: First live discretionary decision. Confirmed one prior trade (NVDA, 2026-07-09, see log) executed by an earlier agentic run whose memory-write apparently didn't land (state.md had no record of it — see Open questions). Decision framework going forward: don't add to or trim a position without a fresh catalyst since the last run; a small existing gain sitting quietly is not itself a reason to trade. Chose HOLD (no new order) this run — existing NVDA position is up modestly, market breadth was mixed (2/11 sectors positive) despite headline indices being green, and nothing in the news sweep rose to the level of a fresh, actionable catalyst. Reinforces "many runs should correctly result in no trade."
- 2026-07-10 (later, ~15:36 ET): New entry-discipline rule added: don't chase a name that has already run several % intraday on the day's news, even when the catalyst is real. A catalyst that's already 3%+ priced in by the time this run sees it is not a fresh edge — it's confirmation of a move already made. Prefer entries on pullbacks/consolidation after a catalyst, or fresh breakouts not yet extended, over buying strength mid-spike. Also flagging (not yet acting on) that $95 of the ~$100 balance has sat as idle cash for 2 days — worth deciding in a future run whether a small, disciplined diversification buy (new name, not adding to NVDA) is warranted once a name shows a catalyst *without* already having run hard the same day.

## Trade log
| Date/Time (ET) | Symbol | Side | Qty/$ | Price | Rationale |
|---|---|---|---|---|---|
| 2026-07-09 11:20 ET | NVDA | buy | $5.00 (0.024826 sh) | $201.3957 avg fill | Backfilled 2026-07-10: order found via get_equity_orders (placed_agent=agentic) but was never logged here — the run that placed it evidently didn't complete step 4 (memory write). No rationale text survives from that run. |

## Balance history
- 2026-07-09: ~$50 estimate in original ground rules — NOT confirmed against get_portfolio at the time.
- 2026-07-10 (~15:15 ET): get_portfolio shows total_value $100.22 (cash $95.00 + NVDA equity $5.22 at $210.27/sh, avg cost $201.40, +4.4% unrealized). Actual base capital is therefore ~$100, not ~$50 — see Open questions below; using the confirmed $100.22 as the real baseline going forward regardless of the cause.
- 2026-07-10 (~15:36 ET): get_portfolio shows total_value $100.21 (cash $95.00 + NVDA equity $5.21 at $209.88/sh, avg cost $201.40, +4.2% unrealized). Essentially flat vs. the 15:15 ET check — no trade this run.

## Run notes / news sweeps
- 2026-07-10 ~15:15 ET: Portfolio check — 1 open position (NVDA, +4.4% unrealized). Broad market: S&P 500/Dow/Nasdaq each +~0.2-0.3% on the day, but breadth weak (9 of 11 sectors red) — gains concentrated in a few names/sectors. Drivers: SK Hynix Nasdaq IPO debut popped >14% (largest-ever US listing by a foreign company), easing US-Iran ceasefire talk, Micron announcing $250B+ US investment through 2035. Headwind: 10Y yield holding near 4.6%, keeping at least one more Fed hike in play. NVDA-specific: Morgan Stanley reaffirmed Overweight / $288 PT after meeting Jensen Huang (bullish); but Nvidia's Kyber rack system for Rubin Ultra chips reportedly slipped to 2028 due to manufacturing issues, and Meta announced plans to manufacture its own custom AI chip from September 2026 — both modest competitive/long-term negatives. Net: mixed-to-mildly-bullish on NVDA specifically, unclear/weak-breadth on the broader tape. Decision: HOLD, no trade. Balance: $100.22 total ($95.00 cash, $5.22 NVDA).
- 2026-07-10 ~15:36 ET: Second check-in same day. Market flipped sharply more bullish since the morning read: Dow +0.3% (52,478.41), Nasdaq +1.3% (26,206.89) on renewed AI-trade momentum, S&P +0.8% (7,543.64). Micron +4.5%, Meta +4.7% (on its custom AI-chip manufacturing plan). NVDA specifically up ~3.0-3.5% intraday (to $209.88 from $202.78 prior close) on renewed Blackwell demand optimism and reports China may allow limited H200 chip purchases by major domestic tech firms — a genuine incremental catalyst, not just carryover. Initial jobless claims also beat (215K vs. 223K est.), supportive of the tape. Decision: HOLD, no new buy, despite the real catalyst — the move is already 3%+ priced in by the time this run observed it, and chasing an already-extended pop is not a disciplined entry (see new strategy note above). Existing NVDA position left untouched. Balance: $100.21 total ($95.00 cash, $5.21 NVDA, +4.2% unrealized).
- Weekly summary: not sent today. Today is Friday 2026-07-10, but the experiment only started 2026-07-09 (day 2) — sending a "weekly" summary after one trade and one day of data would be premature and not meaningful. Deferring first weekly summary to the first Friday that is ≥7 days after start (2026-07-17) or day-7 (2026-07-16), whichever a future run hits first. Flagging this interpretation explicitly so future runs don't skip it indefinitely.

## Open questions / next experiments
- Why did the 2026-07-09 NVDA buy never get logged to state.md? Either an earlier run placed the order and crashed/failed before step 4 (memory write), or it was placed outside this routine (manually, or by a differently-configured earlier version of the routine) before the state file was seeded. Backfilled the trade log entry from get_equity_orders on 2026-07-10; no way to recover the original rationale. Worth Jash confirming which happened.
- Confirmed real starting capital is ~$100.22 (as of 2026-07-10), not the ~$50 in the original ground rules — treating $100.22 as the working baseline; ground rules say uncapped/trade-with-whatever-balance-is so this doesn't block trading, just corrects the reference point.
- Reminder still outstanding: connect social MCPs (Twitter/X, Reddit) for sentiment; also Finnhub/Alpha Vantage for the cloud routine. Will keep including in weekly summaries per ground rules until connected.
- Idle-cash question (raised 2026-07-10): $95 of ~$100 has sat uninvested for 2+ days. Two HOLD-only runs in a row is consistent with "many runs should correctly result in no trade," but worth watching — if 3-4+ runs pass with no deployment and no disciplined entry ever presents itself, revisit whether the entry bar is calibrated too strict for a $100 account meant to build a track record.
