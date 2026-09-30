# BW Risk Assessment — Risk Management Report
**Date: 2026-09-30 (Wednesday), ~14:42 ET (verified via `TZ=America/New_York date`).** Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time. Second BW report today (prior: 9/30 ~10:41 ET); this run lands **inside the final ~1h45m before tonight's Micron print** (call ~4:30pm ET).

---

## Overall Portfolio Risk Grade: **D-** (unchanged — has held D- since the 8/20 GEHC net-debt read)

## Single biggest risk right now
**Unchanged from this morning, and now materially closer: tonight's Micron print (after the 4pm close, call ~4:30pm ET) lands inside the same window MS's disputed WACC-rebuild clock is supposed to complete.** Fresh WebSearch this run found **nothing that resolves the Day 6 vs. Day 7 vs. "unconfirmed" disagreement** flagged at 10:41 ET — the only dated 10yr read this desk can independently corroborate is still the 9/24 5.2% print; no fresher settled close surfaced. Four of six holdings (NVDA, OMCL, XLE, GEHC) get rebuilt at a higher discount rate the moment that clock actually completes, and MU's own options-implied move sits in a genuinely wide, unsettled range across sources (this book's own JPM/GS/MS files cite anywhere from ~8% to ~14%+). This book has no options hedge and ~12% cash for ballast. Radical transparency: with under two hours to go, nobody on this desk can tell you with confidence whether the WACC clock has fired, and that gap in the process — not just the market risk itself — is the thing worth naming loudly one more time before the print lands.

---

## Portfolio snapshot (live, 2026-09-30 ~14:42 ET)

`get_portfolio`: total_value **$100.13309339** (cash $56.06 + equity $44.07309339). Pool ≈ **$50.1331, a +$0.1331 (+0.266%) accumulated profit** — down from 10:41's +0.327% and 13:36's +0.31%, a modest afternoon pullback across the book. Deployable cash $6.06 (~12.09% of pool), unchanged.

| Position | Qty | Last Price | Value | % Equity | % Pool | Unrealized | Day chg (vs 9/29 close) |
|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $230.60 | $5.724 | 12.99% | 11.42% | **+14.50%** | **+1.49%** |
| VTI | 0.036690 | $376.36 | $13.809 | 31.33% | 27.55% | +1.61% | +0.29% |
| VXUS | 0.154525 | $85.055 | $13.144 | 29.83% | 26.22% | +1.10% | -0.54% |
| OMCL | 0.106405 | $34.07 | $3.625 | 8.23% | 7.23% | **-27.50%** | **-0.70%** |
| XLE | 0.086775 | $61.985 | $5.379 | 12.21% | 10.73% | +7.58% | +0.72% |
| GEHC | 0.036393 | $65.76 | $2.393 | 5.43% | 4.77% | -4.27% | -1.05% |
| Cash (deployable) | — | — | $6.06 | — | 12.09% | — | — |

NVDA+OMCL combined **~21.22% of equity** — 25% concentration trigger clean, ~3.78pp buffer, essentially unchanged from 10:41. NVDA alone **~12.99% equity / 11.42% pool** (18-20% trigger clean, +1.42pp over BR's 10% pool target — same overshoot flagged this morning, unresolved). **OMCL DCA gate (rule 18): needs $2.50 accumulated pool profit to fire — currently $0.1331, ~$2.37 away**, widening slightly as the pool pulled back this afternoon.

No new analyst report has posted since GS's ~12:4x ET update (already reviewed this afternoon by the trading routine); BW, MS, JPM all unchanged from this morning's reads; BR remains ~1-day stale (9/29 ~16:13 ET), discounted per standing practice, no open trigger.

---

## Correlation analysis between holdings

- **NVDA, OMCL, XLE, and GEHC remain WACC-sensitive company-specific DCFs that move together on a rate shock** — structurally unchanged, still four of six holdings sitting on the same unresolved clock, now hours from its highest-stakes test yet.
- **NVDA and OMCL diverged again this afternoon** (NVDA +1.49%, OMCL -0.70%) — a third session in a row where these two names have moved in opposite directions intraday with no confirmed name-specific catalyst behind either move. This desk has now logged this pattern three times running; it is behaving like noise relative to each other, not a coherent pair thesis, and should be read that way rather than smoothed into "both WACC-sensitive."
- **VTI and VXUS moved apart again today** (+0.29% vs. -0.54%), extending a divergence first flagged at 10:41 ET rather than reverting to the usual lockstep. Still too short a window to build a diversification thesis on, but two consecutive sessions of visible daylight between these two is worth tracking, not dismissing.
- **XLE is the day's standout mover, +0.72%**, against an unresolved Hormuz backdrop this run's fresh search still cannot pin to any confirmed today-dated event (search results returned the same stale/recirculated tanker-strike and Oman-talks items already on file). The hedge is moving today, but not obviously in sync with a confirmed news catalyst — logged, not explained away.
- **GEHC red again** (-1.05%), its fifth consecutive session of net negative-to-flat drift since the MS/GS valuation gap widened — still no name-specific catalyst found, still tracking broad tape.

## Sector concentration risk with percentage breakdown

- **Tech/AI look-through concentration: ~28.7% of equity** (NVDA's direct 12.99% plus VTI/VXUS's embedded mega-cap tech weight) — essentially unchanged from this morning, still the book's single largest structural concentration, and the one most directly exposed to tonight's MU read-through.
- **Energy: ~12.21% of equity** (XLE) — today's strongest mover; hedge-reliability question stays open regardless.
- **Healthcare: ~13.66% of equity** (OMCL 8.23% + GEHC 5.43%) — both red again this afternoon, the two-name healthcare sleeve moving together rather than offsetting each other, as it has for most of the week.
- **Broad-market core (ex-look-through sector detail): VTI + VXUS = ~61.16% of equity** — unchanged structurally, still the majority of the book by construction.
- **Cash: 12.09% of pool** — earmarked for the OMCL DCA gate first, the XLE top-up trigger second (per BR's standing sequencing); not free capacity.

## Geographic exposure and currency risk factors

- **VXUS (~29.83% of equity)** remains the book's only direct non-US/non-USD-underlying exposure. No fresh geography-specific catalyst found this run.
- **NVDA** carries standing indirect chip-export-policy exposure and the still-live Netlist ITC HBM-patent action naming it as a downstream defendant (JPM's flag, unresolved) — sits directly ahead of tonight's print with that overhang unaddressed.
- **XLE's exposure is global-energy-price risk, not currency risk.** Fresh WebSearch this run again returned only stale/recirculated Hormuz incidents (the same mid-September tanker strikes and Oman-corridor talks already logged), nothing confirmable as dated today. Absence of a fresh confirmed headline is not confirmed de-escalation — the underlying standoff remains open.
- **VTI, OMCL, GEHC** remain overwhelmingly US-domestic-revenue, minimal direct currency risk.

## Interest rate sensitivity for each position

- **OMCL — highest sensitivity**, unchanged. MS's model still shows the widest DCF discount on the book (~56.9% upside at current WACC), meaning it also has the most room to compress if WACC rises further.
- **NVDA — high sensitivity.** Today's +1.49% move continues to run well ahead of, and largely decoupled from, MS's own -10.6% DCF overvaluation call — a gap this desk has now flagged for weeks without resolution.
- **XLE — high sensitivity, still exposed on two axes at once** (rates + oil). MS's cushion (+1.44% as of this morning) is thin enough to flip on a small further move — today's +0.72% print alone could plausibly do it.
- **GEHC — moderate-high sensitivity**, unchanged; DCF gap ~+7.1% undervalued per this morning's roll, widening on price weakness rather than conviction.
- **VTI, VXUS — moderate, diversified sensitivity**, unchanged.
- **Cash — zero sensitivity**, relative value continuing to rise the longer the rate shock persists without reversal.

## Recession stress test showing estimated drawdown

Scenario: a genuine demand-destruction recession (distinct from today's supply-shock/rate-shock regime) — broad equities down ~20-25%, energy participates in the decline rather than acting as a hedge.
- Equity sleeve (currently ~87.91% of pool) at a uniform -20%: **≈-17.58% of pool value**.
- Realistic dispersion: NVDA/OMCL (highest-beta, highest-duration) plausibly -25% to -30%, VTI/VXUS closer to -20%, XLE potentially falling *more* than the broad market in true demand destruction, GEHC (defensive healthcare) likely the most resilient single name.
- **Blended estimated pool drawdown: -18% to -24%**, roughly **-$9.02 to -$12.03** of the ~$50.13 pool — unchanged from this morning, still enough to erase all accumulated profit several times over at current levels.
- **Tonight is a sharper, more immediate test of the same underlying mechanism** (rate sensitivity + correlated single-name risk), not a new one, and it is now under two hours away: a wide-implied-move MU print, an unconfirmed-but-plausible WACC clock completion, and an unresolved Hormuz backdrop are all live in the same window, on a book with zero working options hedge.

## Liquidity risk rating for each holding

| Holding | Liquidity rating | Notes |
|---|---|---|
| VTI | 🟢 Very high | Mega-cap ETF, deepest liquidity on the book |
| VXUS | 🟢 Very high | Mega-cap international ETF |
| NVDA | 🟢 Very high | One of the most liquid single names on any US exchange |
| XLE | 🟢 High | Large sector ETF, ample daily volume |
| GEHC | 🟢 High | Large-cap, ample daily volume for this position's fractional size |
| OMCL | 🟡 Moderate | Small/mid-cap — thinner daily volume than the other five, still sufficient depth at this book's fractional-share sizing |

No liquidity risk is actionable at this book's scale — unchanged.

## Single stock risk and position sizing recommendations

- **NVDA+OMCL combined concentration (21.22%) and NVDA alone (12.99%/11.42%) both remain clean** against their respective triggers, but NVDA's overshoot vs. BR's 10% pool target (+1.42pp) has now held for well over a week on price drift alone, with no purchase behind it. This desk has flagged this across at least six consecutive reports as exactly the slow-drift failure mode rule 7/12 exists to prevent — BR has now deferred the explicit decision to the ~10/1 re-underwrite (tomorrow or the day after). This desk will hold BR to that date.
- **OMCL's -27.50% unrealized loss remains this book's largest standing single-name risk**, held without a mechanical stop-loss by design. The DCA gate sits ~$2.37 away — narrower than this morning's ~$2.34... actually wider, moving the wrong direction on today's pool pullback, though still within the range of normal day-to-day noise.
- **XLE sizing risk unresolved.** MS's own DCF cushion for XLE was already the thinnest undervalued reading on the book this morning (+1.44%); today's +0.72% price move works directly against that cushion. This is not a reason to trim (small position, no structural break), but "MS says undervalued" should not be treated as a durable framing at this margin.
- **GEHC sizing risk (carried forward):** already at/above BR's 4% target pool weight (4.77%) with no overweight case adopted by the position's allocation owner, even as its DCF gap has widened on price weakness alone.
- **No position sizing changes recommended this run.** The one live, named risk this desk wants on record ahead of tonight: this book is entering its highest-stakes 1-2 hours in weeks with every held name's sizing exactly where it was this morning — that is a deliberate "ride it out per policy" choice, not an oversight, but it should be stated as a choice, not assumed.

## Tail risk scenarios with probability estimates

1. **Micron's print (tonight, after close, ~1h45m away) triggers an outsized chip/AI-sentiment move that bleeds into NVDA regardless of this book's own fundamentals.** Estimated probability of a >5% next-session NVDA move driven substantially by MU read-through: **~30-35%, unchanged** — implied-move sourcing remains too scattered across this book's own files (roughly 8%-14%+ depending on source/date) to sharpen further; JPM's own data point that MU has closed lower after 6 of its last 8 beats argues against underweighting this even on a clean beat.
2. **10yr settles decisively above 5% for a full week and MS's coordinated rebuild fires across NVDA/OMCL/XLE/GEHC.** Estimated probability: **~60-65%, unchanged** — the Day 6 vs. Day 7 vs. "unconfirmed" disagreement is still live; this desk is not confident enough in the underlying date-tracking to sharpen this further, and would rather present an honest range than false precision.
3. **Hormuz war re-escalates further, or a confirmed strike materially disrupts tanker traffic.** Estimated probability over the next 30 days: **~22%, unchanged** — no confirmable fresh escalation or de-escalation found dated today; situation remains open, not calm.
4. **OMCL-specific structural thesis break** ahead of the 11/4 print. Estimated probability: **~10%, unchanged** — no confirmed structural news found this run.
5. **Generalized correlation-to-1 liquidity panic** taking down all six holdings simultaneously, most plausible in the window bracketing tonight's MU print and any WACC-clock confirmation. Estimated probability of a >10% week-over-week equity drawdown from this cause: **~22%, unchanged**, and the window for this scenario is now hours, not days.
6. **GEHC gives back its recent gain and converges toward or through MS's DCF base case rather than up to it.** Estimated probability of a >5% move within a week: **~30%, unchanged** — no fresh GEHC-specific catalyst, but this is now a fifth straight session of drift, not conviction.

## Hedging strategies to reduce the top 3 risks (equities-only toolbox — no options available)

1. **Against the rate/WACC-rebuild risk, now converging with tonight's MU print in the next ~1-2 hours:** no clean equities-only hedge exists for a broad discount-rate repricing. The two real levers remain (a) rule 6a's standing pause on new high-multiple core-ups, unaffected by today's data, and (b) getting the WACC-rebuild-clock date question actually resolved — this desk repeats its ask from this morning to BW/MS/GS/BR to reconcile Day 6 vs. Day 7 vs. "unconfirmed" on the next report rather than each desk repeating its own count into tonight's event.
2. **Against the Hormuz/oil tail risk with a still-unproven hedge:** XLE's own DCF cushion is now thin enough (+1.44% this morning, working against a +0.72% price move today) that this desk continues to decline to call the hedge "working" on any recent session's data. Cash (~12.09% of pool) remains the more reliable ballast even though it earns nothing.
3. **Against tech/AI look-through concentration (~28.7%) and NVDA's persistent upward drift above target:** no new position-level action recommended, but this desk repeats — now for the seventh-plus consecutive report — that a target a position drifts around on price alone, without ever converting into an enforcement action or an explicit revision, provides no actual risk reduction. BR has committed to resolving this at the ~10/1 re-underwrite; this desk will treat a further deferral past that date as a genuine process failure, not a routine carry-forward.

## Rebalancing suggestions with allocation percentages

Current live weights vs. BR's 9/17-revised targets (all % of pool): NVDA 11.42% (target 10%, **+1.42pp**), VTI 27.55% (target 28%, -0.45pp), VXUS 26.22% (target 25%, +1.22pp), XLE 10.73% (target 12%, -1.27pp), OMCL 7.23% (target 10%, **-2.77pp**), GEHC 4.77% (target 4%, +0.77pp), Cash 12.09% (target 11%, +1.09pp).

- **No rebalancing trade recommended this run** — nothing breaches BR's 5pp mechanical drift trigger; OMCL's -2.77pp gap remains the largest, appropriately gated by rule 18 (DCA), not a discretionary rebalance signal.
- **NVDA's +1.42pp overshoot is essentially unchanged from this morning's widest-on-file reading**, still entirely on price (no purchase since 9/3). This desk's position stands: BR's 10/1 re-underwrite is the deadline for an explicit decision, not another silent carry-forward.
- **XLE top-up trigger:** its ~10/1 time-box is now essentially tomorrow; BR's 9/29 report pre-committed to letting it lapse absent an extraordinary profit surge, and today's pool pullback (+0.266%, down from this morning's +0.327%) moves further away from that surge, not closer. This desk agrees with BR's resolution as stated.
- **No rebalancing action recommended on GEHC or OMCL** beyond the existing mechanisms already governing both.

---

## Heat map summary

| Risk factor | Level | Trend vs. this morning (10:41 ET) |
|---|---|---|
| MU print (now ~1h45m away) + WACC-clock convergence, desks still disagreeing on clock day (6 vs. 7 vs. unconfirmed) | 🔴 High | ↑ **worse** — same unresolved disagreement, now materially closer to the event |
| Rate/WACC-rebuild risk (10yr last confirmed 5.2% on 9/24, day count disputed) | 🔴 High | → unchanged in substance |
| Hormuz/Iran tail risk (no confirmable fresh dateline found this run) | 🔴 High | → unchanged — absence of confirmed news is not confirmed calm |
| Look-through tech/AI concentration (~28.7% of equity) | 🔴 High | → essentially flat |
| NVDA drift vs. BR's 10% pool target (+1.42pp) | 🟡 Moderate | → flat, still unresolved, BR's 10/1 deadline now imminent |
| XLE hedge/DCF cushion (thin, working against today's +0.72% move) | 🟡 Moderate | ↑ **worse** — price moved against an already-thin cushion |
| NVDA/OMCL single-session mirror-reversal (now three sessions running) | 🟡 Moderate | → recurring pattern extends, still uncorroborated by any fundamental catalyst |
| OMCL single-position drawdown (-27.50%) + DCA gate (~$2.37 away) | 🟡 Moderate | → gate widened slightly on today's pullback |
| GEHC sentiment-vs-fundamentals gap (fifth straight red/flat session) | 🟡 Moderate | → pattern extends, not worsens sharply |
| Pool profit level (+0.266%) | 🟢 Low-Moderate | ↓ eased from this morning's +0.327% |
| Headline concentration triggers (NVDA%, NVDA+OMCL%) | 🟢 Low | → clean |
| Liquidity | 🟢 Low | → unchanged |

**Note on data quality (rule 4 discipline):** fresh WebSearch this run (10yr yield, Hormuz, MU premarket) surfaced nothing dated today beyond what this morning's report already captured — including the same stale/impossible "MU closed at $1,000.26" artifact GS and JPM both flagged this morning, still circulating this afternoon. This desk treats that recirculation itself as a small data-quality signal: when the same clearly-wrong figure keeps resurfacing hours apart, it is worth naming plainly rather than silently re-discarding each time. Live Robinhood pricing (MU ~$1,067, per the trading routine's most recent snapshot) is the reliable figure, not the search artifact.

---

Sources:
- [U.S. 10-year Treasury yield reportedly hits 5.2%, highest since 2007 — Digg](https://digg.com/world-business/yy8sp23a)
- [10 Year Treasury Rate — Mortgage News Daily](https://www.mortgagenewsdaily.com/treasury)
- [Oil tankers reportedly moving through Strait of Hormuz, CEO says, as prices slide — Fox Business](https://www.foxbusiness.com/media/oil-tankers-reportedly-moving-throught-strait-of-hormuz-ceo-says-prices-slide)
- [Micron Q4 Earnings Preview — Parameter.io](https://parameter.io/micron-mu-stock-dips-1-6-despite-historic-margin-performance-ahead-of-sept-30-report/)
- [Micron Technology (MU) earnings calendar — TipRanks](https://www.tipranks.com/stocks/mx:mu/earnings)
- Internal: trading-experiment/state.md (Balance history through 9/30 ~14:38 ET), analysts/gs-stock-screener.md (9/30 ~12:4x ET), analysts/ms-dcf-valuation.md (9/30 ~10:14 ET), analysts/jpm-earnings-analyzer.md (9/30 ~09:20 ET), analysts/br-portfolio-builder.md (9/29 ~16:13 ET), analysts/bw-risk-assessment.md (this desk's own 9/30 ~10:41 ET report, prior version)
