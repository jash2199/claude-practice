# BW Risk Assessment — Risk Management Report
**Date: 2026-08-05 (~14:42 ET, Wednesday, afternoon)**

*Persona: Bridgewater-style risk analyst for the "Claude Robinhood Trader" experiment — radical transparency, no softened warnings. Portfolio scope: $50 base + accumulated profits inside a ~$100 Robinhood cash account (424593861). All figures below are live Robinhood-verified (`get_portfolio`, `get_equity_positions`, `get_equity_quotes` pulled this run) — not WebSearch-sourced, per house rule 4. Prior BW report: 2026-08-05 ~10:42 ET (this desk, same day).*

---

## OVERALL PORTFOLIO RISK GRADE: **C-** (held, unchanged from this morning)

## Single biggest risk right now
**80.6% of equity (NVDA + VTI + VXUS) is still riding one unconfirmed geopolitical narrative — and NVDA alone just pushed that further, on a fresh high, with its DCF downside now at ~31.4%.** Iran and Oman said today they've agreed on shipping-lane coordinates and are in "final drafting" of a joint statement, but a senior Gulf official still puts the odds of a deal landing by Friday at only 50-50, Iranian state media disputes the "reopening" framing entirely, and the underlying "Iran-controlled inbound / Oman-controlled outbound" structure is the same asymmetric arrangement that killed the original June 17 MOU ([CNN](https://www.cnn.com/2026/08/05/world/live-news/iran-war-trump), [Al Jazeera](https://www.aljazeera.com/news/2026/8/5/iran-oman-us-close-to-hormuz-deal-what-do-they-all-want)). Meanwhile XLE — the position sized specifically to hedge this — is still essentially flat (-0.03% vs. avg cost) and MS's fresh same-day composite rebuild found its own valuation gap **widened** to ~19-21% (from ~16-18% on 8/3), the opposite of what a strengthening hedge thesis would look like. Nothing has broken yet. But the book keeps adding to the correlated side (NVDA extending on a fresh SpaceX/Starmind catalyst) while the diversifying side gets fundamentally less attractive to add to, not more.

---

## Live portfolio snapshot (Robinhood-verified, this run)

| Position | Qty | Price | Value | % of Equity | % of Pool ($50.31) | Avg Cost | Unrealized P&L |
|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $221.64 | $5.50 | 11.88% | 10.94% | $201.40 | +10.05% (+$0.50) |
| VTI | 0.048530 | $380.49 | $18.47 | 39.87% | 36.70% | $370.90 | +2.59% (+$0.47) |
| VXUS | 0.154525 | $86.67 | $13.39 | 28.92% | 26.62% | $84.13 | +3.02% (+$0.39) |
| OMCL | 0.106405 | $37.18 | $3.96 | 8.54% | 7.86% | $46.99 | **-20.88% (-$1.04)** |
| XLE | 0.086775 | $57.605 | $5.00 | 10.80% | 9.94% | $57.62 | -0.03% (~$0.00) |
| **Equity total** | | | **$46.31** | 100% | 92.03% | | |
| Cash (deployable, pool-level) | | | $4.00 | — | 7.95% | | |
| Cash (off-limits reserve) | | | $50.00 | — | — | | |
| **Account total** | | | **$100.31** | | | | |

Note: NVDA+OMCL combined face-value concentration reads 20.43% of equity (NVDA-alone still 11.88%, comfortably under the 18-20% single-stock trigger). See Single-stock risk section for why face value understates the real number.

---

## Correlation analysis

- **NVDA / VTI / VXUS are still moving as one trade, not three.** NVDA pushed to a fresh cycle high again today (+4.6% vs. Tuesday's close) on a genuine but longer-duration catalyst (SpaceX confirmed it will build its AI infrastructure exclusively on NVIDIA hardware, including a new orbital-compute program) layered on the same broad Hormuz-optimism tape lifting VTI/VXUS. MS explicitly declined to fold this into its 5-year model (prototype not until 2027) — right call — but the price still moved, widening NVDA's DCF gap to ~31.4% from ~28.8% two sessions ago.
- **OMCL and XLE remain the book's only real decorrelation assets, and neither is pulling its weight today.** OMCL (-20.88%) is genuinely idiosyncratic — the point of holding it — but XLE, the position built to hedge the Hormuz trade specifically, is flat and its own valuation case just got *worse* on fresh data (MS's clean XOM/CVX rebuild this morning), not better. A hedge that isn't moving and is also more overvalued is a hedge earning less of its keep on both dimensions at once.
- **Look-through correlation is still worse than the five-ticker view.** NVDA is a top-weight holding inside VTI itself (~6-7% of VTI's basket). Direct NVDA (11.88%) plus NVDA embedded in VTI plus a smaller remainder in VXUS runs closer to **~14.1% of equity**. Combined with OMCL's 8.54% (a different sector but the same discount-rate risk factor as NVDA), true correlated growth/multiple exposure is closer to **~23% of equity** — materially closer to the informal danger zone than the official 11.88% NVDA-alone reading implies.

## Sector concentration risk (look-through, blending direct holdings + fund-level weights)

| Sector | Estimated % of equity | Source |
|---|---|---|
| Technology | **~32-33%** | Direct NVDA (11.88%) + VTI look-through (~34.6-36.3% tech, [IndexBox](https://www.indexbox.io/blog/vanguard-total-stock-market-etf-vti-a-2026-investment-analysis/)) + VXUS look-through (22.59% tech, [MarketXLS](https://marketxls.com/etfs/vxus/geography)) |
| Healthcare | ~15% | OMCL (8.54%) + VTI/VXUS healthcare look-through (~7-11%) |
| Energy | ~12% | XLE (10.80%) + VXUS energy look-through (4.28%) |
| Financials | ~12% | VTI + VXUS financials look-through (VXUS alone is 22.16% financials) |
| Industrials | ~8% | VTI + VXUS look-through (VXUS industrials 15.2%) |
| All other sectors | ~20-21% | Remainder, diffuse across consumer, materials, comms, utilities, real estate |

**Verdict: technology remains a full third of the book on a look-through basis** — essentially unchanged from this morning, since position weights barely moved. This is concentrated in exactly the theme (AI capex, chip demand) that MS's DCF says is ~31.4% overvalued on NVDA alone, and today's NVDA move made that gap wider, not narrower.

## Geographic exposure and currency risk

- **US exposure: ~71% of equity** (NVDA + OMCL + XLE direct, all US-listed/domiciled, plus VTI's 100% US mandate).
- **Ex-US exposure: ~28.9% of equity**, entirely via VXUS, unhedged. Top country weights: Japan 15.1%, UK 8.1%, Canada 8.1%, Taiwan 5.9%, Switzerland 5.1% ([MarketXLS](https://marketxls.com/etfs/vxus/geography)).
- **Currency risk is real but small in dollar terms (~$13.39 exposed).** A durable Hormuz resolution that triggers a broad risk-off-to-dollar unwind would be a headwind to VXUS independent of underlying stock performance. Not actionable at this size — flagged for completeness.
- **Taiwan (5.9% of VXUS)** still layers a third, distinct geopolitical fault line (Taiwan Strait/semiconductor supply) on top of the book's existing AI-chip (NVDA) and Middle East (XLE/OMCL-adjacent macro) exposure — unaddressed by any desk this cycle.

## Interest rate sensitivity

| Position | Duration/rate sensitivity | Why |
|---|---|---|
| NVDA | **High** | ~40x+ forward multiple; MS's DCF (WACC 11%) shows the gap tracks discount-rate assumptions directly, and just widened further on price alone |
| OMCL | **High** | Small-cap growth healthcare-IT; financing-cost and multiple-compression sensitive, same channel as NVDA |
| VTI | **Moderate-High** | ~33-36% tech-weighted; fund duration pulled up by mega-cap growth names |
| VXUS | **Moderate** | More value-tilted (financials 22%, industrials 15%) — genuinely lower duration than the US core |
| XLE | **Low / inverse** | Value sector, historically benefits from a higher-for-longer or inflationary regime rather than being hurt by it |

**Standing gap, reaffirmed again:** this book still has no explicit rate-shock playbook (flagged 7/31, unresolved three weeks running). Four of five positions sit on the same side of a renewed rate-shock trade; only XLE would likely act as ballast, and its hedge value is currently muted on both price action and valuation.

## Recession stress test

Estimated peak-to-trough drawdown per position in a moderate-to-severe recession scenario (blended demand-driven + valuation-reversion case):

| Position | Estimated drawdown | Rationale |
|---|---|---|
| NVDA | -45% to -55% | High-beta semis; AI capex is discretionary corporate spend, cut hard and fast in a downturn; already ~31.4% "overvalued" per MS DCF before any recession discount, and the gap just widened further today |
| OMCL | -35% to -45% | Small-cap; hospital/health-system capex is deferrable; already -20.9% and thin-book |
| VTI | -30% to -35% | Broad market but tech-tilted, worse than a historical S&P-average bear |
| VXUS | -25% to -30% | Lower beta, value-tilted, but unhedged FX could compound in a dollar-flight scenario |
| XLE | **-30% to -45% in a demand recession; could instead *rally* in a supply/geopolitical-driven downturn** | XLE only hedges *supply-side* shocks (Hormuz). In a classic demand-driven recession, oil demand falls and XLE falls with everything else — the hedge fails exactly when a "normal" recession hits |

**Blended equity-sleeve estimate: ~-34%.** Applied to the $46.31 equity sleeve, that's roughly **-$15.7**, bringing account total value to **~$84.6, an approximate -15.6% whole-account drawdown** — cushioned by the ~54% cash allocation (of which $50 is untouched reserve), but the equity sleeve itself would take a much harder hit than the whole-account number implies.

## Liquidity risk rating

| Position | Rating | Notes |
|---|---|---|
| VTI | Very Low | Mega-cap ETF, billions in AUM, penny-wide spreads |
| VXUS | Very Low | Same profile as VTI |
| XLE | Very Low | Large sector SPDR, deep liquidity |
| NVDA | Very Low | Mega-cap, among the most liquid single names on the market |
| OMCL | **Low-Moderate** | Small/mid-cap; repeated unexplained intraday moves attributed to thin-book noise with no company-specific catalyst |

At this book's position sizes ($4-18 per holding), liquidity risk is immaterial to execution — flagging for completeness per mandate, not as a live concern.

## Single-stock risk and position sizing recommendations

- **NVDA (11.88% direct / ~14.1% look-through):** Under the formal 18-20% trigger on a face-value basis, but has extended to a fresh high for a second straight session on a real-if-premature catalyst, widening MS's DCF gap to ~31.4%. **Recommendation unchanged: do not treat "NVDA-alone under 18%" as clean cover for adding to VTI or NVDA further.** New for this run: NVDA reports its own earnings **August 26 (21 days out, per JPM)** — the single-largest company-specific catalyst on this book's calendar, worth pre-flagging now rather than reacting cold when the window opens.
- **VTI (39.87% of equity):** Still the sizing story this book has under-managed for over a week. BR's own target is 30%; VTI eased slightly today (39.87% vs. 39.96% this morning) purely on intraday price action, not a decision — the structural overweight is functionally unchanged. **Recommendation held: direct 100% of the next new deployable dollar away from VTI/VXUS core; if the gap hasn't closed organically within another 1-2 weeks, put an active trim on the table rather than continuing to let "no fresh catalyst" (rule 1) double as an excuse not to manage the position.**
- **OMCL (8.54%, -20.88%):** Correctly not sized further without the standing MS/BW post-transcript sign-off, now stretching into a third week. Position is already half-size; no reduction recommended — the loss is idiosyncratic and immaterial in dollar terms ($1.04).
- **XLE (10.80%, -0.03%):** Half-size satellite, appropriately sized. No trim recommended (hedge value, even if muted, is real against the specific risk it was built for) — but this desk flags plainly that MS's fresh rebuild makes the fundamental case for *adding* to it weaker, not stronger, than it looked a week ago.
- **Deployable cash ($4.00, 7.95% of pool):** Still too thin to be a genuine risk buffer, unchanged for well over a week. **Recommendation held: prioritize rebuilding deployable cash toward >10% of pool before adding a third satellite position.**

## Tail risk scenarios (probability estimates, next 1-4 weeks)

| Scenario | Probability | Portfolio impact |
|---|---|---|
| Hormuz deal signs cleanly | ~35-40% | Oil extends lower, XLE down another 10-15%; NVDA/VTI/VXUS likely extend gains further — the correlated-narrative risk realizes in the "good" direction, but XLE (the hedge) absorbs the loss alone |
| Hormuz deal slips again / re-escalates (June 17 MOU already failed once under near-identical language; 50-50 odds by Friday per today's Gulf-official source) | ~20-25% | Oil spikes, XLE outperforms, but NVDA/VTI/VXUS likely sell off together on risk-off — the single biggest risk named at the top of this report |
| "Headline deal, messy implementation" (asymmetric inbound/outbound control structure holds) | ~35-40% | Choppy, directionless tape; no clean winner; XLE continues to underperform as a hedge without a clear payoff either way |
| NVDA/AI-capex multiple-compression shock, independent of Hormuz (MS DCF already ~31.4% downside and widening) | ~15-20% | NVDA -15%+ on its own, would also pressure VTI given its tech weight; OMCL/XLE largely unaffected (genuine diversification working as designed) |
| Rate-shock resurgence (no playbook exists per 7/31 finding, still unresolved) | ~15-20% | Hits NVDA, VTI, OMCL simultaneously through a channel this book has not built a rule for; XLE the only likely beneficiary |
| Tonight's OXY/IONQ prints (after close, 8/5) spill into broad energy/growth sentiment tomorrow | n/a — binary event, not a holding | Neither is a position, so no direct P&L risk, but a violent reaction in either (options market pricing IONQ for a double-digit move) could color tomorrow's open sentiment for XLE (energy) and the growth complex (NVDA-adjacent) respectively — a secondary, indirect risk worth a same-morning glance, not action |

## Hedging strategies for the top 3 risks (equities-only toolbox, no options)

1. **Correlated single-narrative unwind (NVDA+VTI+VXUS, 80.6% of equity):** No options available, and capital-constrained ($4 deployable) rules out building a new defensive position today. The available hedge is behavioral: hold the line on rule 2 (don't chase any of the three further at fresh highs) and prioritize the next new dollar toward a genuine decorrelator — GEHC remains the standing, still-unvetted candidate (now with a genuine fresh beat-and-raise print and two sell-side PT hikes this week, per GS). This is the third consecutive week this desk has flagged GEHC as re-flagged-but-unactioned; get it through rule 6 cross-vetting rather than repeating the flag a fourth time.
2. **VTI structural overweight (39.87% vs. 30% target):** The cleanest available hedge is a deliberate rebalancing trim, not a new position — reducing VTI toward target and redeploying into the underweight satellite sleeve directly lowers both single-fund concentration and, since VTI is the most tech-heavy holding, look-through tech exposure in one move.
3. **Look-through growth/multiple-compression exposure (~23% NVDA+OMCL combined):** Equities-only hedge here is a genuine value/low-duration add — XLE already serves this role. Resist the temptation to trim XLE on its flat/negative performance or its now-wider valuation gap; giving it up removes one of only two assets in the book not correlated with the growth/multiple-compression factor. The fact that XLE looks less attractive to *add* to does not make it less valuable to *hold*.

## Rebalancing suggestions

| Position | Current % of equity | Suggested action |
|---|---|---|
| VTI | 39.87% | Trim toward BR's 30% target over time; no forced sell today (no fresh catalyst), but stop treating "no catalyst" as license to let the gap widen further |
| VXUS | 28.92% | Near-target (BR ~25-30% range); hold |
| NVDA | 11.88% (~14.1% look-through) | Hold; do not add — track the look-through figure against the 18-20% trigger, not just the direct one; earnings 8/26 is now inside the forward-planning window |
| OMCL | 8.54% | Hold; no add without the standing MS/BW post-transcript sign-off |
| XLE | 10.80% | Hold; do not add (MS's gate widened, not narrowed, to ~19-21% overvaluation) and do not trim (hedge value, even if muted right now, is real) |
| Deployable cash | 7.95% of pool | Target >10% of pool before any third satellite position is added |

---

## Bottom line

No structural break in the book today — no solvency issue, no single position large enough to threaten the account, and the team's existing discipline (rules 1-10) is being applied correctly. The grade holds at **C-**, unchanged from this morning, because nothing crossed a formal trigger. But this desk repeats, without softening: **(1)** 80.6% of equity is still riding one unconfirmed geopolitical narrative that already failed once before under nearly identical language, and today NVDA pushed further into that same trade on a real-but-premature catalyst while the book's designated hedge (XLE) got fundamentally less attractive to add to on fresh data; **(2)** VTI has been meaningfully overweight its own stated target for well over a week, with "no fresh catalyst" doing double duty as both the correct reason not to panic-sell and an increasingly convenient excuse not to actively manage the position; and **(3)** GEHC — now sporting a genuine beat-and-raise print — has been re-flagged as the standing decorrelation candidate for three straight weeks without a single cross-vetting cycle actually run on it. None of these is an emergency. All three are risks sitting in plain sight that this book keeps choosing not to act on.
