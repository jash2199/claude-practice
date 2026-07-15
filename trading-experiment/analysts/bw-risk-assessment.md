# BW Risk Assessment — Bridgewater-Style Risk Report
**Date: 2026-07-15 (~10:41 ET)**

*Persona: Bridgewater risk desk, radical transparency. Ground truth pulled live via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`, account 424593861) this run.*

---

## Overall Portfolio Risk Grade: **C-** (up from D+ on 7/14 — operational blocker resolved, but see below: the underlying risk this desk has flagged for six straight cycles is not meaningfully smaller, just spread across two tickers instead of one)

## Biggest risk right now
**The VTI buy that finally executed yesterday did not diversify the book nearly as much as the "0% core → core sleeve opened" headline suggests — because VTI's own largest holding is NVDA.** VTI currently weights NVIDIA at ~6.2-6.7% of the fund, and Technology is 36.95% of VTI's sector mix (source: fund holdings data, see below). Run the look-through math on this account's actual $15.19 deployed sleeve: the $9.98 VTI position itself contains ~$0.65 of indirect NVDA exposure and ~$3.69 of indirect Technology-sector exposure. Add that to the direct $5.21 NVDA position and **combined look-through NVDA exposure is ~$5.86 — 38.6% of deployed capital — and combined Technology-sector exposure is ~$8.90, or 58.6% of deployed capital.** This account did not go from "100% one stock" to "diversified." It went from "100% one stock" to "roughly 60% one sector, over a third of which still traces back to the exact same stock." That is real progress (VTI's other 93.8%-NVDA-free, 63%-non-tech remainder is genuine diversification this book didn't have Monday), but it is a much smaller improvement than the trade log will read as, and every future "add to core" decision needs to be sized with this look-through math, not the naive 0%→core framing BR's report has used.

---

## Heat Map Summary

| Risk Category | Level | Notes |
|---|---|---|
| Sector concentration (look-through) | 🔴 Critical | ~58.6% of deployed capital is Technology-sector exposure once VTI's own 36.95% tech weight is counted, not just the standalone NVDA position |
| Single-stock look-through concentration | 🟠 High | Combined direct + VTI-embedded NVDA exposure ≈38.6% of deployed capital, still the largest single-name look-through position in the book |
| Correlation risk | 🟠 High | NVDA and VTI will not diversify each other in a tech-led selloff — VTI's top 10 holdings (31.8% of the fund) are dominated by the same mega-cap AI/tech names |
| Execution/operational risk | 🟢 Low | Blocker cleared 7/14 evening, confirmed by a live executed order 7/15 09:36 ET — first genuine test passed |
| Geopolitical/macro tail risk | 🟠 High | Iran/Hormuz conflict still fully live, Brent >$85 for a third straight session, no de-escalation trigger has fired |
| Interest rate sensitivity | 🟡 Moderate | Fed funds ~3.63% effective, market pricing a drift toward ~4% by year-end; both holdings are valuation-rich, long-duration growth exposure that moves the same direction on a rate surprise |
| Recession/drawdown risk | 🟠 High | Est. 35–50% peak-to-trough drawdown on the deployed sleeve in a hard risk-off scenario; yield curve inversion depth flagged by one source as exceeding the threshold that preceded the last three corrections (treat with caution, see Sec. 6) |
| Liquidity risk (market) | 🟢 Very Low | Both NVDA and VTI are among the most liquid securities traded in the US; spreads on both are ~1bp or tighter |
| Liquidity risk (account-level) | 🟢 Low | Order execution confirmed working end-to-end for the first time |
| Geographic/currency risk | 🔴 Critical | 100% USD, ~99.4% US-domiciled equities across both holdings combined — zero international diversification anywhere in the book |
| Idle cash / opportunity cost | 🟡 Moderate | ~69.7% of the $50.19 trading pool (~$35.00) still sits in cash, now voluntarily, not blocked — the blocker excuse no longer applies |
| Position sizing discipline | 🟢 Low | Absolute dollar risk trivial (~$15.19 of $100.20); no single position breaches BR's 20% soft cap on its own face value |

---

## 1. Ground-truth portfolio snapshot (live, this run)

- **Total account value**: $100.198 (`get_portfolio`: cash $85.00 + equity $15.198)
- **Positions** (`get_equity_positions` + live `get_equity_quotes`):
  - NVDA: 0.024826 sh, avg cost $201.40, live $209.885 (bid/ask $209.88/$209.91) → **$5.2101, +4.20% unrealized**
  - VTI: 0.026826 sh, avg cost $372.77, live $372.0865 (bid/ask $372.07/$372.10) → **$9.9827, -0.17% unrealized** (first full session holding the position; behaving exactly as a broad index should — small, undramatic move)
- **Trading-book accounting** (per ground rules: $50 base + profits, $50 reserve untouchable): trading pool ≈$50.19, deployed $15.19 (NVDA $5.21 + VTI $9.98), deployable cash ≈$35.00, reserve $50.00 untouchable (embedded in the $85.00 cash balance)
- **First trade executed**: VTI $10.00 buy, 2026-07-15 ~09:36 ET, 0.026820 sh at ~$372.72 avg fill. This is the first genuine end-to-end confirmation that an order placed by this routine actually clears — a real, positive data point for the "execution/operational risk" line that dominated the last three reports.

## 2. Correlation analysis between holdings
Two holdings now instead of one, but the honest answer is that correlation between them is high, not low. NVDA is a top-6 holding inside VTI itself (~6.2-6.7% weight, sources below), so a meaningful slice of the "second" position is mechanically the same stock as the "first" position. Beyond the direct overlap, VTI's top 10 holdings are 31.8% of the fund and dominated by the same mega-cap AI/tech complex (NVDA, AAPL, MSFT lead the list) that has driven this book's entire return since inception — in a tech-led drawdown, NVDA and VTI will not offset each other, they will fall together, just with VTI falling somewhat less because 63% of it isn't tech. **This is not a criticism of buying VTI — a broad-market ETF is still the correct next step and was overdue — but it should not be scored as "problem solved" for correlation risk. It's "problem diluted," which is real progress, just smaller than it looks.**

## 3. Sector concentration risk
- **Look-through Technology-sector exposure**: NVDA ($5.21, 100% semis/AI-compute) + VTI's Technology slice ($9.98 × 36.95% ≈ $3.69) = **~$8.90, or 58.6% of the $15.19 deployed sleeve.**
- **As % of total account**: ~8.9%. As % of the ~$50.19 trading pool: ~17.7%.
- **VTI's own sector mix** (for context on what the other 63% is buying): Financial Services 11.3%, Communication Services 9.8%, Consumer Cyclical 9.7%, Industrials 9.4%, Healthcare 9.0%, Consumer Defensive 4.3%, Energy 3.3%, Real Estate 2.3%, Utilities 2.1%, Basic Materials 1.9%. This is genuine sector breadth this book did not have before yesterday — the criticism above is about magnitude, not direction.
- Sixth-plus consecutive BW cycle flagging Technology/AI-compute concentration as the dominant single risk in this book; the number has moved from "100%" to "58.6% blended," which is the right direction but still the single largest line item in this entire risk assessment by a wide margin.

## 4. Geographic exposure and currency risk
- **Direct FX**: none — both holdings are USD-denominated.
- **Geographic concentration**: VTI is ~99.4% US-domiciled equities; NVDA is a US-domiciled company. **Combined, this book has effectively zero non-US equity exposure** — buying a "core" sleeve did not add international diversification, because VTI is a *US* total-market fund, not a global one. If BR's IPS intends the core sleeve to reduce geographic concentration as well as sector concentration, VTI alone does not accomplish that; a global or ex-US fund (e.g., VXUS) would be the actual lever for that specific risk.
- **Indirect / supply-chain geography**: NVDA's fabrication remains concentrated at TSMC in Taiwan — the Taiwan Strait tail risk is unpriced and unhedged, unchanged from every prior report, and now also embedded (at a smaller weight) inside the VTI position via its own NVDA and broader semiconductor/tech holdings.
- **Middle East/Gulf exposure, still live, still unresolved**: fresh WebSearch this run confirms the Iran/Hormuz conflict has **not de-escalated** since yesterday — Brent has held above $85 for a third consecutive session, and Trump is reportedly threatening to expand strikes to Iranian power plants and bridges next week absent a return to talks, a more escalatory posture than 7/14's read, not less. None of the three falsifiable OMCL de-escalation triggers in state.md (ceasefire holding a full session / Brent <~$75 / Friday 7/17 time-box) has fired. The account still has zero exposure that would benefit from, rather than merely sit exposed to, this shock continuing.

## 5. Interest rate sensitivity
Both holdings are rate-sensitive in the same direction, which is itself a correlation point worth restating here. Fed funds effective rate is ~3.63%; futures markets are pricing a gradual path toward ~4% by year-end and holding near there through mid-2027, with the FOMC's July 28-29 meeting expected to hold rates while preserving optionality to tighten further if inflation proves persistent. The 10-year Treasury sits at ~4.57-4.62%, having eased slightly off cooler CPI data. **NVDA**: DCF-implied fair value (MS: $150.6 base case at 11% WACC / 3% terminal growth vs. ~$210 spot) is highly sensitive to the WACC assumption — MS's own sensitivity table shows fair value ranging from $235 (9% WACC) down to $112-120 (13% WACC), a swing of roughly 2x across a plausible discount-rate range. **VTI**: per MS's coverage, the US total market currently trades around 22-24x forward earnings vs. a ~17-18x long-run historical average — a market-level valuation stretch that makes the entire fund, not just its tech slice, vulnerable to multiple compression if the Fed surprises hawkish. Neither position offers rate-hedge ballast; both would reprice lower together on a hawkish surprise, and neither would meaningfully cushion the other.

## 6. Recession stress test
Applying BR's IPS-level stress assumption (35-50% peak-to-trough drawdown in a bad year for a tech/AI-tilted book) to the current $15.19 deployed sleeve, with each holding's own sensitivity layered in:
- **Base recession scenario** (multiple compression, AI-capex digestion pause, no fresh geopolitical shock): NVDA -35% to -45% → position falls to roughly $2.87-$3.39 (a $1.82-$2.34 loss); VTI, being 63% non-tech, likely falls less severely at the index level (est. -25% to -35% for a broad-market fund in a moderate recession) → position falls to roughly $6.49-$7.49 (a $2.49-$3.49 loss). **Combined deployed-sleeve loss: roughly $4.31-$5.83, i.e., a ~28%-38% drawdown on the $15.19 deployed sleeve.**
- **Severe/tail scenario** (recession + confirmed Taiwan Strait disruption, or a Gulf-conflict energy/inflation shock that forces the Fed to hold or hike into a slowdown): 50%+ on NVDA plausible (down to ~$105/share), 35-45% on VTI (broad-market history: 2008's total-market drawdown was ~55% peak-to-trough, 2020's COVID crash was ~34% but far faster) → **combined deployed-sleeve loss could approach 45-55%, or roughly $6.85-$8.35 of the current $15.19.**
- **On the total account**: because $85.00 (85% of the account) is cash — $50 of it a hard untouchable reserve, ~$35 currently idle deployable capital — even the severe scenario above costs at most ~7-8% of total account value. This is the same structural point every prior report has made: **the account's downside resilience comes from being mostly uninvested, not from the risk profile of what is invested.** That cash cushion is now a deliberate choice on the ~$35 deployable slice, no longer a forced one — which means it's fair to hold the trader accountable for how that slice is eventually deployed, not just note the cushion approvingly.
- **Data-quality caveat**: one WebSearch source this run cited a "34.7% probability of a 20%+ market correction in 2026" and a yield-curve inversion depth "exceeding the threshold that preceded the last three major corrections" — flagging this explicitly as a lower-confidence, unverified single-source claim (from a speculative market-forecasting site, not a primary data source) rather than treating it as established fact. The more reliably-sourced data points this run are: 10Y ~4.57-4.62%, Fed funds ~3.63% effective, VIX ~15-17 (a "calm"/normal-regime reading, not itself signaling imminent stress).

## 7. Liquidity risk rating (per holding)
| Holding | Market liquidity | Account-level liquidity | Notes |
|---|---|---|---|
| NVDA | 🟢 Very Low risk | 🟢 Low risk | Deep, liquid market; $0.03 bid/ask spread on a ~$210 stock (~1bp); order execution confirmed working |
| VTI | 🟢 Very Low risk | 🟢 Low risk | One of the most liquid US ETFs; $0.03 bid/ask spread on a ~$372 fund (<1bp); first live buy order cleared cleanly this run |
| Cash ($85.00) | 🟢 No risk | 🟢 Low risk | Fully liquid and, as of yesterday, confirmed deployable |

This is genuinely the cleanest section of this report — both holdings are about as liquid as US equities get, and the account-level execution risk that dominated the last three reports is resolved (pending continued confirmation over more sessions; one successful trade is a good signal, not yet a long track record).

## 8. Single stock risk and position sizing recommendations
- **Face-value sizing** (what the trade log shows): NVDA is 34.3% of deployed capital / 10.4% of the trading pool; VTI is 65.7% of deployed capital / 19.9% of the trading pool. Neither breaches BR's 20% single-name soft cap taken at face value, and VTI is a diversified fund, not a single name, so the cap doesn't strictly apply to it anyway.
- **Look-through sizing** (what this desk thinks actually matters): combined NVDA exposure (direct + VTI-embedded) is ~38.6% of deployed capital — this is the number that should govern the next decision, not the 34.3% face-value figure. **Recommendation, unchanged in spirit from every prior cycle: the next dollar deployed should go to something that does not increase Technology-sector or NVDA look-through exposure.** OMCL (healthcare-tech, but per GS/MS coverage genuinely decoupled from the AI/semiconductor trade) remains the best-evidenced candidate on the table, pending one of the three falsifiable de-escalation triggers firing. A non-tech-tilted or ex-US fund (e.g., VXUS for geographic diversification specifically) would also directly address a risk this report flags as fully unaddressed (Sec. 4) that OMCL alone would not fix.
- **No stop-loss is in place on NVDA**, consistent with the user's standing "no mandated stop-loss, use judgment" rule — flagging this explicitly rather than letting it go unstated: the position is up +4.2% with no defined exit discipline if the AI trade reverses sharply. At this dollar size the absolute risk is trivial, but the habit of not defining an exit level before adding further satellite positions is worth breaking now, while the stakes are still small, rather than after the book has scaled up.

## 9. Tail risk scenarios with probability estimates
| Scenario | Rough probability (next 30 days) | Estimated impact on deployed sleeve |
|---|---|---|
| Hormuz conflict escalates further (sustained closure, oil >$100, broad equity risk-off) | ~15-20% | -30% to -50% on NVDA via multiple compression; VTI down less (broad-market, 63% non-tech) but not spared given tech's 37% weight in the fund |
| Hormuz conflict de-escalates within 1-2 weeks | ~35-40% | Modest relief rally across both positions; NVDA likely outperforms VTI on the recovery given its higher beta to the "AI trade" narrative |
| AI-capex digestion / hyperscaler spending pause (demand-side, independent of geopolitics) | ~10-15% over 3-6 months | -30%+ on NVDA and disproportionately on VTI's 37%-weighted tech sleeve — this is the scenario where "diversification via VTI" helps least, since the shock is sector-wide, not NVDA-specific |
| Taiwan Strait incident (fab disruption) | <5% (low-probability, high-severity) | Potentially -50%+ on NVDA and durable; VTI would also fall hard given its own tech concentration — genuinely uninsurable with the current equities-only toolbox and not diversified away by the current book composition |
| Broad recession / credit event, no specific tech or geopolitical trigger | ~10-15% over 6-12 months (yield-curve signal noted in Sec. 6, treated cautiously) | Base-to-severe recession stress test applies (Sec. 6): ~28-55% combined deployed-sleeve drawdown depending on severity |
| Status quo grind (no clean geopolitical resolution, no fresh escalation, no recession) | ~35-40% | Continued sideways-to-mixed drift; the most likely single outcome, and the one under which today's concentration critique matters least in the near term but most over a longer compounding horizon |

## 10. Hedging strategies (equities-only toolbox — top 3 risks)
No options available on this account. All three hedges below are about **what to buy next**, not what to sell — this book has no short or inverse-ETF access confirmed, so risk reduction has to come from diversification of new capital, not offsetting positions.

1. **Sector/look-through concentration (58.6% blended Technology, 38.6% blended NVDA)** → the next deployable dollars should deliberately avoid anything tech/semiconductor-adjacent, including additional core-ETF buys, until the blended tech weight comes down. OMCL remains the cleanest evidenced candidate (healthcare-tech but genuinely decoupled per GS/MS's cross-analyst read); a sector-capped or equal-weight fund (e.g., an equal-weight S&P 500 product) would also reduce the mega-cap-tech skew that a cap-weighted VTI structurally cannot avoid.
2. **Geographic concentration (99.4%+ US, zero currency diversification)** → this is the one risk category in this report that got zero better yesterday and has no plan on the table anywhere in this book's history to fix it. An ex-US or global total-market fund (e.g., VXUS) is the direct lever; this desk is flagging it as a distinct, unaddressed gap rather than assuming BR's "core sleeve" recommendation already covers it, since VTI does not.
3. **Rate/valuation-duration risk (both positions long-duration, richly-valued growth exposure)** → within an equities-only toolbox, the practical hedge is a value-tilted allocation (e.g., VTV or a similar value-factor fund) for any future core-sleeve additions, rather than compounding further into cap-weighted, growth/tech-heavy exposure; maintaining the current cash buffer through the Fed's July 28-29 meeting is also a reasonable, low-cost form of protection given the account's small size and lack of a true hedge instrument.

## 11. Rebalancing suggestions with allocation percentages
Endorsing BR's IPS target (55% core / 35% satellite / 10% cash on the trading book) as the correct compass, with one addition this report is making explicit for the first time: **"core" should not be read as satisfied by VTI alone once look-through sector/geography is accounted for.** Current trading-pool allocation: Core (VTI) ~19.9%, Satellite (NVDA) ~10.4%, Cash ~69.7% — still far from the 55/35/10 target, and the cash figure is now voluntary, not blocker-forced, so it should shrink on a real schedule, not drift. Concrete suggestion: of the next ~$8-10 deployed, direct it to a genuine diversifier (OMCL if/when a trigger fires, or VXUS for geographic breadth) rather than a second core-ETF purchase — a second VTI/SCHG/QQQM buy right now would push the "core" percentage toward target on paper while pushing the look-through tech/NVDA concentration numbers in this report higher, not lower.

---

## Cross-analyst notes
- **GS (7/15 midday)**: OMCL still #1 for an eleventh-plus consecutive cycle, live price ($46.51) just above the top of its own $42-46 entry zone — "acceptable, not extended." New ideas this cycle (PTCT, EXEL) are one-cycle-old and correctly held back per house discipline; neither changes this desk's near-term risk read. GS's own framing of NVDA/VTI ("hold, don't add" / "not my lane") doesn't engage with the look-through concentration point this report raises — worth GS weighing in directly next cycle on whether OMCL alone gets the blended tech weight back under, say, 45-50%.
- **MS's DCF (7/15)**: NVDA still ~29% overvalued, gap widened as price has run further; OMCL's margin of safety has compressed from ~25% to ~21% upside in two trading days as its price has run toward GS's entry-zone ceiling — a sizing-discipline note for whenever a trigger fires, not a verdict change. MS's VTI section correctly declines to offer a DCF view (not applicable to a diversified index) but also doesn't address sector/geographic look-through — that gap is what this report is filling.
- **JPM (7/15)**: OMCL now inside its earnings-timing brief (reports 7/30) — if a de-escalation trigger fires, JPM's explicit recommendation is to execute before the print, not drift into an accidental earnings bet. This desk agrees and adds: whatever is bought should still be evaluated against the look-through concentration math above before sizing, not just against the earnings calendar.
- **BR's IPS**: the "0% core → core opened" framing in BR's most recent report is directionally correct but needs a caveat this desk is adding today — VTI is not a clean substitute for the international/ex-US leg that a true "core" allocation would normally include, and its cap-weighting means it does not meaningfully reduce the book's NVDA/AI-tech concentration on its own. Recommend BR's next report explicitly separate "domestic total-market core" from "geographic diversification" as two different, currently both-unmet allocation goals, rather than treating VTI as having addressed both.

---

Sources:
- [VIX at 16.9 — Regime, Skew & Cross-Asset Signal (Convex)](https://convextrade.com/metrics/vixcls)
- [Stock Market Crash Prediction Analysis 2026: AI-Enhanced Forecasting (Pro Trader Daily)](https://protraderdaily.com/analysis/stock-market-crash-prediction-analysis-2026) — lower-confidence source, cited with an explicit caveat in Sec. 6
- [Fed Funds Rate Forecast 2026-2031 (StreetStats)](https://streetstats.finance/rates/fedfunds)
- [Treasury Yields Snapshot: July 10, 2026 (Advisor Perspectives / dshort)](https://www.advisorperspectives.com/dshort/updates/2026/07/10/treasury-yields-snapshot-july-10-2026)
- [VTI Holdings List (StockAnalysis.com)](https://stockanalysis.com/etf/vti/holdings/)
- [VTI Holdings: All 3,449 Stocks in Vanguard Total Stock Market ETF (TipRanks)](https://www.tipranks.com/etf/vti/holdings)
- [Vanguard Total Stock Market ETF (VTI) Holdings Analysis (InvestSnips)](https://investsnips.com/vti-holdings/)
