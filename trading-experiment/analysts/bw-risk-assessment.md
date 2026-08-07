# BW Risk Assessment — Risk Management Report
**Date: 2026-08-07 (~10:41 ET, Friday morning — first BW report of the day)**

*Persona: Bridgewater-style risk analyst for the "Claude Robinhood Trader" experiment — radical transparency, no softened warnings. Portfolio scope: $50 base + accumulated profits inside a ~$100 Robinhood cash account (424593861). All figures below are live Robinhood-verified (`get_portfolio`, `get_equity_positions`, `get_equity_quotes` pulled this run) — not WebSearch-sourced, per house rule 4. Prior BW report: 2026-08-06 ~14:47 ET (this desk, yesterday afternoon).*

---

## OVERALL PORTFOLIO RISK GRADE: **C** (upgraded from C-)

**Why the upgrade, stated plainly:** this desk does not hold a grade flat just to look consistent. Both risks that anchored yesterday's C- have been genuinely resolved with concrete action, not just talk — the VTI overweight was actively trimmed (this book's first-ever sell, executed 09:44 ET this morning) and the rate-shock rule this desk pushed for since 7/31 was formally adopted into state.md (rule 6a) rather than left as a repeated flag. Treasury yields also eased today on weak jobs data, moving further from the 4.75% trigger rather than closer. That is real, verifiable de-risking. It does not earn a B — a new divergence flagged below, plus the still-unaddressed combined single-name concentration, are real enough to hold this back from a clean upgrade.

## Single biggest risk right now
**XLE — the book's only hedge against Hormuz/oil risk — is the sole red position in the portfolio this morning while every other holding rallies, and the reason is structural, not noise.** July payrolls came in at -23,000 (vs. +83,000 expected), unemployment held at 4.1%. That's unambiguously bullish for rate-sensitive growth assets (yields fell, NVDA +1.91%, VTI +0.55%, VXUS +0.75%, OMCL +2.24% today) but it is simultaneously a **demand-destruction signal for oil** — a weakening labor market means weaker fuel/industrial demand — and Brent/WTI are both down again today (Brent -0.7% to $81.92, WTI -0.4% to $76.96, tracking a ~9% loss for the week), pulling XLE down -1.17% even as the rest of the book rises. This is the exact "recession stress test" scenario below playing out in miniature: a demand-driven downturn is the one regime where XLE stops hedging and starts correlating *with* the rest of the book's downside, not against it. Layered on top: the Hormuz "deal" itself just got messier, not cleaner — Iran now says explicitly it **will not fully reopen the strait**, and the draft includes a 5-7% (Iran) vs. 3% (Oman) transit-fee gap still unresolved, a ban on US/Israeli vessels, and 20%-of-cargo penalties on violators. Oil falling this week looks more like a mix of stalled-deal risk-premium unwind *and* recession-demand fear than a clean geopolitical resolution — nobody on this book's desks has yet split those two drivers apart, and until someone does, don't read XLE's red print today as the hedge failing on noise. It may be failing on exactly the regime it was least designed for.

---

## Live portfolio snapshot (Robinhood-verified, this run)

| Position | Qty | Price | Value | % of Equity | % of Pool ($50.40) | Avg Cost | Unrealized P&L | Daily Δ (vs 8/6 close) |
|---|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $223.18 | $5.5407 | 12.48% | 10.99% | $201.40 | +9.66% (+$0.49) | +1.91% |
| VTI | 0.043290 | $381.16 | $16.5004 | 37.16% | 32.74% | $370.76 | +2.80% (+$0.45) | +0.55% |
| VXUS | 0.154525 | $86.97 | $13.4390 | 30.27% | 26.66% | $84.13 | +3.38% (+$0.44) | +0.75% |
| OMCL | 0.106405 | $36.97 | $3.9338 | 8.86% | 7.81% | $46.99 | **-21.32% (-$1.07)** | **+2.24%** (best mover, 2nd straight up day) |
| XLE | 0.086775 | $57.48 | $4.9878 | 11.23% | 9.90% | $57.62 | -0.24% (-$0.01) | **-1.17%** (sole red position) |
| **Equity total** | | | **$44.4018** | 100% | 88.10% | | | |
| Cash (deployable, pool-level) | | | $6.00 | — | 11.90% | | | |
| Cash (off-limits reserve) | | | $50.00 | — | — | | | |
| **Account total** | | | **$100.4018** | | | | | |

Note: NVDA+OMCL combined face-value concentration is **21.34% of equity**, up from ~20.19-20.23% logged repeatedly this week — both names rallied together today (NVDA on rate-cut optimism, OMCL on its own bounce), pushing the combined figure past the round-number level this desk has watched for a week with **still no formal trigger** for the pair, unlike NVDA-alone's 18-20% single-stock cap. Look-through NVDA exposure (direct + VTI/VXUS index weight) remains separately tracked at ~22.8% of equity as of BR's last full breakdown.

---

## Correlation analysis

- **The dominant story today is a correlation *split*, not a correlation confirmation.** Four of five positions (NVDA, VTI, VXUS, OMCL) moved together on the same macro input (weak jobs data → lower yields → risk-on) — the book's standing "everything trades the same macro tape" risk realized again, just in the favorable direction this time. XLE alone decoupled, and decoupled *downward* while the tape rallied, which is the specific pattern that should worry a risk desk more than a broad selloff would: it confirms XLE's correlation to the rest of the book can flip sign depending on *why* the macro news is good or bad, not just whether it is good or bad.
- **NVDA** (+1.91%) is not on new company-specific news — this is the same rate-cut-optimism beta every high-multiple grower is riding today. MS's model remains unchanged pending the August 26 print.
- **OMCL** (+2.24%) is its second straight up day after eight consecutive down sessions — still no identifiable company-specific catalyst found this run; treat as a partial mean-reversion bounce, not a thesis change, per the standing contingency plan.
- **VTI/VXUS** (+0.55%/+0.75%) tracking the broad risk-on tape as expected for diversified core holdings.
- **XLE** (-1.17%) — see Single biggest risk above. This is the one line item on the book actively working against the rest of the portfolio's move today, which is exactly the job a hedge is supposed to do in a *supply-shock* scenario, and exactly the failure mode in a *demand-shock* one. Today looks closer to the latter.

## Sector concentration risk (look-through, blending direct holdings + fund-level weights)

| Sector | Estimated % of equity | Source |
|---|---|---|
| Technology | **~32-33%** | Direct NVDA (12.48%) + VTI look-through (~34.6-36.3% tech, weighted) + VXUS look-through (22.59% tech, weighted) |
| Healthcare | ~15% | OMCL (8.86%) + VTI/VXUS healthcare look-through (~7-11%) |
| Energy | ~12-13% | XLE (11.23%) + VXUS energy look-through (~1.3%) |
| Financials | ~12% | VTI + VXUS financials look-through (VXUS alone 22.16% financials) |
| Industrials | ~8% | VTI + VXUS look-through (VXUS industrials 15.2%) |
| All other sectors | ~19-20% | Remainder, diffuse across consumer, materials, comms, utilities, real estate |

**Verdict essentially unchanged from yesterday:** technology remains roughly a third of the book look-through; today's price moves shifted position weights only modestly (VTI's trim and OMCL's bounce partially offset each other in equity-share terms).

## Geographic exposure and currency risk

- **US exposure: ~69.7% of equity** (NVDA + OMCL + XLE direct, all US-listed/domiciled, plus VTI's 100% US mandate) — down slightly from ~71% as VTI's share of equity fell post-trim and VXUS's rose.
- **Ex-US exposure: ~30.3% of equity**, entirely via VXUS, unhedged — the highest this figure has been in weeks, purely a function of VTI's trim reallocating relative weight toward VXUS (VXUS itself wasn't bought). Top country weights unchanged: Japan 15.1%, UK 8.1%, Canada 8.1%, Taiwan 5.9%, Switzerland 5.1%.
- **Currency risk small in dollar terms (~$13.44 exposed)** but worth naming precisely because it just grew as a share of the book without anyone deciding to increase FX exposure — a side effect of the VTI trim, not a VXUS-specific call.
- **Taiwan (5.9% of VXUS)** still layers a third, distinct geopolitical fault line on top of the book's AI-chip (NVDA) and Middle East (XLE/OMCL-adjacent macro) exposure — still unaddressed by any desk.

## Interest rate sensitivity

| Position | Duration/rate sensitivity | Why |
|---|---|---|
| NVDA | **High** | ~40x+ forward multiple; MS's DCF (WACC 11%) shows the gap tracks discount-rate assumptions directly. Reports **August 26** (19 days out) |
| OMCL | **High** | Small-cap growth healthcare-IT; same multiple-compression channel as NVDA |
| VTI | **Moderate-High** | ~33-36% tech-weighted; fund duration pulled up by mega-cap growth names |
| VXUS | **Moderate** | More value-tilted (financials 22%, industrials 15%) — genuinely lower duration than the US core |
| XLE | **Low / inverse** | Value sector, historically benefits from a higher-for-longer or inflationary regime — but see today's demand-shock caveat above; a *recession-driven* rate move (weak jobs → cuts priced in) is not the same regime as an inflation-driven one, and XLE reacted accordingly (negatively) today |

**Good news, stated plainly:** the 10-year Treasury yield eased 4bp to 4.621% today on the weak jobs print, the 2-year fell over 6bp to 4.176% (lowest since 7/17) — both moving *away* from rule 6a's 4.75% trigger, not toward it. Rule 6a (formalized 8/6, proposed by this desk and BR independently) remains untested in practice — it has still never fired, and today's move makes that less likely in the near term, not more. This desk credits the team for closing this gap as a written rule rather than leaving it as a standing flag; today is the first live data point suggesting the regime may be cooling rather than escalating.

## Recession stress test

Estimated peak-to-trough drawdown per position in a moderate-to-severe recession scenario (blended demand-driven + valuation-reversion case), unchanged methodology:

| Position | Estimated drawdown | Rationale |
|---|---|---|
| NVDA | -45% to -55% | High-beta semis; AI capex is discretionary corporate spend, cut hard and fast in a downturn; DCF gap still ~32%+ overvalued before any recession discount |
| OMCL | -35% to -45% | Small-cap; hospital/health-system capex is deferrable; still -21.3% and thin-book |
| VTI | -30% to -35% | Broad market but tech-tilted, worse than a historical S&P-average bear |
| VXUS | -25% to -30% | Lower beta, value-tilted, but unhedged FX could compound in a dollar-flight scenario |
| XLE | **-30% to -45% in a demand recession; could instead *rally* in a supply/geopolitical-driven downturn** | Today is a small-scale live preview of the demand-driven case: weak labor data pressured oil and XLE fell while risk assets rallied. XLE only hedges *supply-side* shocks (Hormuz) — it does not hedge, and may actively hurt, a classic demand-driven downturn |

**Blended equity-sleeve estimate: ~-34%.** Applied to the $44.40 equity sleeve, that's roughly **-$15.10**, bringing account total value to **~$85.30, an approximate -15.0% whole-account drawdown** — cushioned by cash (of which $50 is untouched reserve, $6.00 deployable), but the equity sleeve itself would take a much harder hit than the whole-account number implies. This estimate now has a live, if small, real-world data point behind the XLE line specifically (today's move), rather than being purely theoretical.

## Liquidity risk rating

| Position | Rating | Notes |
|---|---|---|
| VTI | Very Low | Mega-cap ETF, billions in AUM, penny-wide spreads |
| VXUS | Very Low | Same profile as VTI |
| XLE | Very Low | Large sector SPDR, deep liquidity |
| NVDA | Very Low | Mega-cap, among the most liquid single names on the market |
| OMCL | **Low-Moderate** | Small/mid-cap; bid/ask still wide ($36.95/$37.03 this run); today's bounce is a second straight up day but the prior eight-day slide's cause remains unconfirmed |

At this book's position sizes ($4-17 per holding), liquidity risk remains immaterial to execution — flagged for completeness, not as a live concern.

## Single-stock risk and position sizing recommendations

- **NVDA (12.48% direct / ~22.8% combined with OMCL, ~14.4%+ look-through with VTI/VXUS):** Under the formal 18-20% single-stock trigger, no action. But the combined NVDA+OMCL figure crossing 21.3% today (see snapshot note) with **no formal trigger of its own** is now this desk's second-most-repeated open flag after last week's VTI/rate-shock pair got resolved. Recommend formalizing a combined-satellite drift trigger (e.g., NVDA+OMCL crossing ~25% of equity forces a review) on the same falsifiable-trigger model that has now worked five times (OMCL, XLE, VTI-trim, and by extension rule 6a) — don't let this become the next two-week-old unmanaged flag.
- **VTI (37.16% equity / 32.74% pool):** This week's standout resolution — trimmed $2.00 this morning per BR's recommendation, reducing the pool-basis overweight from +6.73pp to +2.74pp, inside a defensible range. No further action needed today; worth a routine check next week that it hasn't drifted back up on price appreciation alone (per state.md's own open question).
- **VXUS (30.27% equity / 26.66% pool):** +1.66pp over BR's 25% pool target, close enough that BR recommends no action — this desk agrees, and notes VXUS's relative share also rose mechanically from the VTI trim, not from any VXUS-specific decision.
- **OMCL (8.86%, -21.32%):** Second straight up day, but still no confirmed catalyst for either the eight-day slide or the two-day bounce. Correctly not sized further without the standing MS/BW post-transcript sign-off — now into a **sixth week open**, the book's most chronic process gap per state.md's own scorecard.
- **XLE (11.23%, -0.24%):** Half-size satellite, appropriately sized, no trim recommended. Today's price weakness should not itself trigger a trim (rule 1) — but this desk is flagging the demand-shock divergence explicitly rather than waiting for it to resolve silently, per the mandate's radical-transparency standard.
- **Deployable cash ($6.00, 11.90% of pool):** Genuinely rebuilt above BR's 10% target for the first time in over a week — credit due for the trim doing its job. Still worth noting: IONQ and GEHC's rule-6 cross-vets remain open 2+ and 6+ weeks respectively, so this fresh dry powder is only useful once one of those gates actually clears, not automatically.

## Tail risk scenarios (probability estimates, next 1-4 weeks)

| Scenario | Probability | Portfolio impact |
|---|---|---|
| Demand-driven soft patch continues (more weak labor/macro prints, oil keeps falling on demand fear even as equities rally on rate-cut hope) | ~25-30% (new, elevated given today's live pattern) | XLE underperforms in isolation while the rest of the book gains — a genuine hedge-thesis stress test, not a portfolio-wide loss, but erodes the rationale for holding XLE if it persists |
| Hormuz deal signs, but not cleanly (Iran's own framing: won't fully reopen strait; fee dispute unresolved) | ~30-35% | A messy, partial deal is now the base case per today's reporting, not a clean resolution — muddies the "clean signing" and "re-escalation" scenarios below into a longer, choppier middle ground |
| Hormuz deal stalls further / re-escalates (fee gap unresolved, restrictive draft could itself provoke US/Israel response) | ~20-25% | Oil spikes, XLE outperforms, but NVDA/VTI/VXUS likely sell off together |
| Rate-shock resurgence (rule 6a formalized but still untested; today's data point moves this further away, not closer) | ~10-15% (down from 15-20% given today's easing) | Hits NVDA, VTI, OMCL simultaneously; XLE the only likely beneficiary, and now a formal trigger exists to catch it if it does return |
| NVDA/AI-capex multiple-compression shock, independent of Hormuz (MS DCF still ~32%+ downside) | ~15-20% | NVDA -15%+ on its own, would also pressure VTI given its tech weight; OMCL/XLE largely unaffected |
| NVDA's August 26 print disappoints or guides cautiously | n/a — 19 days out, still outside JPM's ~2-week coverage window (opens ~8/12) | Would hit the book's single largest position directly; no pre-print contingency plan exists yet (unlike OMCL's, which worked well) — recommend building one once JPM's window opens |

## Hedging strategies for the top 3 risks (equities-only toolbox, no options)

1. **XLE/hedge-thesis correlation breakdown in a demand-driven regime (new top-3 entry, promoted from today's live divergence):** No positional hedge exists within this toolbox for "the hedge itself stops hedging" — the available response is procedural: don't add to or trim XLE off a single day's price action either direction, and explicitly request MS's next oil-adjusted DCF split the demand-destruction driver from the geopolitical-risk-premium driver, since they currently get blended into one gap figure. Until that split exists, treat XLE strength *or* weakness as ambiguous signal, not confirmation.
2. **Combined NVDA+OMCL concentration (~21.3% of equity, no formal trigger):** Propose a falsifiable combined-satellite trigger (e.g., ~25% of equity) modeled on the pattern that has now worked five times in this book (OMCL, XLE, VTI-trim, rule 6a, and the underlying rule-7 discipline itself). This is a proposal for the team, not a unilateral rule — but repeating "no formal trigger exists" for a third straight week without proposing the actual number stops being useful.
3. **NVDA earnings concentration risk (19 days out, no contingency plan yet):** Recommend building an OMCL-style pre-print contingency plan once the print enters JPM's ~2-week window (~8/12) — this book's own history shows pre-committed, falsifiable rules beat live in-the-moment decisions (rule 7), and NVDA is both the book's largest position and its widest DCF gap.

## Rebalancing suggestions

| Position | Current % of pool | Suggested action |
|---|---|---|
| VTI | 32.74% | Hold — successfully trimmed into a defensible range this morning; recheck next week for renewed drift |
| VXUS | 26.66% | Hold — modestly above BR's 25% target, not actionable |
| NVDA | 10.99% (15% target, soft-capped 18-20% of equity) | Hold; do not add — earnings 19 days out, DCF gap still widest on the book |
| OMCL | 7.81% (10% target) | Hold; no add without the standing MS/BW post-transcript sign-off, sixth week open |
| XLE | 9.90% (10% target) | Hold; do not add, do not trim — today's weakness needs a cleaner causal read before it's actionable either direction |
| Deployable cash | 11.90% of pool (10% target) | Above target for the first time in over a week — genuine dry powder; hold in reserve for whichever satellite gate (OMCL, IONQ, GEHC) clears next, don't deploy reactively |

---

## Bottom line

No structural break in the book this morning — no solvency issue, no single position large enough to threaten the account, and two real risks this desk pushed hard on all week (VTI overweight, missing rate-shock rule) got genuinely resolved rather than just re-flagged. Grade moves to **C** to reflect that honestly. But this desk's job is to find the next thing before it becomes a two-week-old unmanaged flag, and there are two candidates today: **(1)** XLE, the book's only hedge, is the sole red position while a weak-jobs-report rally lifts everything else — a small, live preview of exactly the regime (demand-driven recession) where this hedge stops working, and nobody has yet split "recession-demand fear" from "Hormuz risk-premium unwind" as the actual driver of oil's ~9%-on-the-week slide; **(2)** NVDA+OMCL's combined concentration quietly crossed 21.3% of equity today with still no formal trigger, even though this book has now proven five times that a falsifiable, pre-committed rule beats an open-ended flag. Neither is an emergency. Both are exactly the kind of thing that becomes one if this desk stops naming them plainly.

---
Sources:
- [Stock market today: Dow, S&P 500, Nasdaq rise after July jobs report surprises to the downside (Yahoo Finance)](https://uk.finance.yahoo.com/news/stock-market-today-friday-august-7-nasdaq-dow-sp-500-jobs-report-100009572.html)
- [Stock Market Today (Aug. 7, 2026): Dow rises after July jobs report shows unexpected losses (TheStreet)](https://www.thestreet.com/stock-market-today/stock-market-today-dow-jones-sp-500-nasdaq-updates-aug-7-2026)
- [Treasury yields drop after surprise jobs loss in July (CNBC)](https://www.cnbc.com/2026/08/07/treasury-yields-steady-ahead-of-key-nonfarm-payrolls-jobless-data.html)
- [U.S. Treasury yields fall after weak jobs report (Investing.com)](https://www.investing.com/news/economy-news/us-treasury-yields-fall-after-weak-jobs-report-93CH-4773770)
- [Iran says Hormuz deal with Oman won't fully reopen strait (Washington Post)](https://www.washingtonpost.com/world/2026/08/06/iran-says-hormuz-deal-with-oman-wont-fully-reopen-strait/)
- [Oil gains as investors cautious over Iran-Oman talks (CNBC)](https://www.cnbc.com/2026/08/06/oil-investors-cautious-over-iran-oman-talk-progress.html)
- Internal: trading-experiment/state.md (8/7 Balance history through 10:37 ET, Strategy & theories rules 6a/11/12/13), analysts/br-portfolio-builder.md (8/6 ~16:15 ET, VTI trim rationale and pool-basis targets), analysts/gs-stock-screener.md (8/7 ~09:53 ET), analysts/ms-dcf-valuation.md (8/7, current positions read), analysts/jpm-earnings-analyzer.md (8/7, coverage check)
