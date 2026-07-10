# BW Risk Assessment — Latest Report
**Date: 2026-07-10 (first run)**

*Persona: Bridgewater-trained risk analyst, radical transparency stance, applied to the "Claude Robinhood Trader" — account 424593861, $50 trading-capital base + profits inside a ~$100 cash account.*

---

## Overall Portfolio Risk Grade: **C**
## Single biggest risk right now: **You have zero diversification in the one position you hold, sized into a name that just lost $1T of market cap and 18% of its value in under two months, in the middle of a live sector selloff — and no hedge available to offset it.**

The grade is "C" and not worse only because 94.8% of the account is sitting in cash, which mechanically caps *dollar* risk at $5.23. Don't mistake that for good risk management — it's under-deployment, not skill. Within the sliver of capital actually at work, concentration risk is maxed out: **100% of invested capital is one stock.** If this pattern repeats as capital scales up, the grade goes to D/F fast. Radical transparency: right now the account isn't being managed for risk, it's just small.

---

## Ground truth (Robinhood, live pull)
- Total account value: **$100.23** (cash $95.00 + NVDA equity $5.23)
- Position: **NVDA**, 0.024826 sh, avg cost $201.40, last trade $210.96 (+4.5% unrealized)
- Deployed vs. base: $5.23 of the $50 trading-capital base is deployed (10.5%); ~$44.77 sits idle, deployable
- As % of **total account**: NVDA = 5.2%, cash = 94.8%
- As % of **deployed/invested capital**: NVDA = **100%**

---

## Heat map summary

| Risk factor | Level | Notes |
|---|---|---|
| Single-stock concentration | 🔴 **Critical** | 100% of deployed capital in one name (NVDA). No offsetting position exists at any correlation. |
| Sector concentration | 🔴 **Critical** | 100% of equity book in AI/semiconductor compute complex — the single hottest, most crowded trade in the market right now. |
| Idle-cash / inaction risk | 🟠 **High** | 94.8% of account uninvested for 2+ days with no fresh catalyst acted on; strategy risk more than market risk, but flagged per mandate. |
| Market/beta risk (NVDA) | 🔴 **Critical** | Beta ~2.2–2.4. Already down 18.2% from its May 14 high; lost ~$1T market cap in under 2 months. |
| Interest rate sensitivity | 🟠 **High** | Long-duration growth cash flows; Fed leaning hawkish (market pricing a possible hike before a cut), 10Y ~4.3–4.6%. |
| Recession/drawdown exposure | 🟡 **Moderate** | Recession odds 12–30% depending on source; AI capex is the marginal driver of a NVDA-specific drawdown well before a broad recession would be. |
| Geographic/currency risk | 🟠 **High** | USD-denominated, but revenue and supply chain concentrated in China (export-control policy risk) and Taiwan (TSMC fab concentration, Taiwan Strait geopolitical tail risk). |
| Liquidity risk | 🟢 **Low** | NVDA is one of the most liquid names on the planet; cash is instantly liquid. Not a constraint at this size. |
| Tail-risk exposure | 🟠 **High** | AI-bubble unwind risk actively in motion (see below), unhedged. |
| Position sizing discipline | 🟡 **Moderate** | $5 stake is immaterial in dollars, but the *process* that produced 100%-single-name sizing is the thing to fix before capital scales. |

---

## 1. Correlation analysis between holdings
There is exactly one equity holding (NVDA) and one non-equity holding (cash, correlation to everything ≈ 0 by definition). There is **nothing to diversify against** — correlation analysis is technically trivial here, but that triviality *is* the finding: every dollar of market exposure in this account moves in perfect lockstep with a single company's idiosyncratic risk (chip export rulings, a single earnings print, a single supply-chain headline). There is no second position whose correlation could dampen a bad NVDA day. This should be read as a warning, not a null result.

## 2. Sector concentration risk
- **100% of invested equity capital** is in semiconductors/AI-compute (NVDA).
- As % of total account, sector exposure is a modest 5.2% — but that's a function of under-deployment, not diversification. The moment more capital gets put to work, if it goes into more names in this same complex (which is exactly where the GS screener's top ideas — SNX, SKHY, ALAB, MU, AVGO — are also concentrated), sector concentration risk compounds rather than resolves. **Flag for BR/GS coordination:** adding SNX/SKHY/ALAB/MU on top of NVDA would still leave the book ~100% AI-compute-sector, just spread across more tickers — that reduces single-name risk but does *not* reduce sector risk. If diversification is the goal, at least one name from outside this complex (GS's own diversifier picks: OMCL, FRPT, ISRG) needs to make the cut.

## 3. Geographic exposure and currency risk
- Currency: 100% USD-denominated position and cash — no direct FX risk.
- Geographic/supply-chain: NVDA's revenue and manufacturing footprint carry real indirect geographic risk — chip fabrication is concentrated at TSMC in Taiwan (a genuine geopolitical single point of failure), and a meaningful revenue swing factor sits in China policy: reporting this week indicates Chinese regulators may allow capped H200 purchases by Alibaba/ByteDance/DeepSeek under strict conditions — a headline that can move both ways on short notice (a reversal would be a real negative catalyst; a genuine reopening would be a real positive one). This is binary, policy-driven, and outside the company's control — that's a risk factor, not a reason to avoid the stock, but it should be sized accordingly.

## 4. Interest rate sensitivity
NVDA is a long-duration growth asset — its valuation leans on cash flows expected years out, which makes it structurally sensitive to the discount rate. Current setup is a headwind, not a tailwind: 10Y yield sits ~4.3–4.6%, and markets are currently pricing **a possible additional Fed hike by year-end 2026** before any cut (next FOMC July 28–29), with inflation running persistently above target. A "higher for longer" surprise compresses exactly the kind of forward multiple NVDA carries. Rate sensitivity: **High**.

## 5. Recession stress test
- Recession-probability estimates diverge by source: prediction markets ~12–13%, professional forecasters (Goldman, RSM) ~25–30%, NY Fed yield-curve model ~17.6% (by April 2027). Treat 15–25% as a reasonable working range for the next 12 months.
- **Estimated drawdown if a recession hits:** NVDA is a high-beta cyclical-growth name inside a capex-dependent sector (AI infrastructure spend is discretionary and front-loaded, historically pulled hard in a hiring/margin retrenchment). Precedent already exists *without* a recession: NVDA has already drawn down **18.2% from its own May high** on nothing worse than sector rotation and bubble-risk repricing. In an actual recession scenario, a 35–50% peak-to-trough drawdown for NVDA specifically is a reasonable stress estimate, consistent with prior semiconductor-cycle downturns (2022's ~50%+ semis drawdown is the closest analog).
- On the current $5.23 stake, a 40% drawdown = **-$2.09**, immaterial in dollars but instructive as a rate: this is the volatility being signed up for per dollar deployed here, and it should scale with position sizing decisions, not be forgotten once the dollar amount grows.

## 6. Liquidity risk rating
- **NVDA: Low risk.** Multi-billion-dollar average daily volume; the position could be fully liquidated in a fraction of a second with negligible slippage at this size.
- **Cash: Low risk** — immediately deployable.
- Liquidity is not a live constraint for this account at any realistic future size. This is the one clean "green" on the heat map.

## 7. Single stock risk and position sizing
This is the core finding. Per Ground Rules, the trading book is $50 base + profits. NVDA is currently:
- 10.5% of the trading-book base ($5.23 / $50)
- **100% of everything actually invested**

A single-name position that *is* the entire invested book is, by definition, maximum concentration risk regardless of how small the dollar figure is — the percentage-based risk (which is what compounds as capital scales) is already at its ceiling. **Recommendation:** before adding to NVDA again, the priority should be establishing a second, third, and fourth position so that no single name exceeds roughly 25–35% of deployed capital, consistent with basic single-stock risk discipline even in a small, aggressive book. This is a sizing/process fix, not a "sell NVDA" call — nothing here says the NVDA thesis is broken.

## 8. Tail risk scenarios (with rough probability estimates over the next 1–3 months)
| Scenario | Est. probability | Impact on NVDA position |
|---|---|---|
| AI-bubble unwind accelerates (BofA Bubble Risk Indicator at 0.91, highest since June 2000; concentration + overbought conditions cited explicitly) | ~20–25% | Severe — could extend the already-realized 18.2% drawdown from May highs into a 30–40%+ peak-to-trough move |
| China export-policy reversal (H200 conditional access pulled back rather than expanded) | ~15% | Moderate-severe, single-day gap risk on the headline |
| Broad recession (12mo) | ~15–25% (source-dependent) | Severe on NVDA specifically (capex-cyclical), moderate-to-severe on the account only once capital is actually deployed at scale |
| Taiwan Strait geopolitical shock (TSMC fab disruption) | Low-single-digit % (tail, not base case) | Extreme if realized — a genuine fat-tail, low-probability/high-severity event; not a reason to avoid the position, but worth acknowledging exists |
| Continued sector-wide semis selloff (already in progress: Micron -13%, Intel -21%, AMD -7% in the July 7–8 window) | Ongoing/ambient, not a discrete event | NVDA has so far *outperformed* peers in this exact selloff (closed +0.7% on 7/7 while SMH fell 5%) — worth noting as a relative-strength positive, but the sector backdrop it's happening in is the risk, not the reassurance |

## 9. Hedging strategies (equities-only toolbox — top 3 risks)
No options available, so hedges have to be structural, not derivative-based:
1. **Against single-stock/sector concentration:** the single highest-leverage hedge available is simply *not* deploying the next dollar into another AI-compute name. Direct the next buy toward something genuinely uncorrelated to NVDA's specific and sector risk (GS's own diversifier picks — OMCL, FRPT, ISRG — are reasonable starting points on that basis alone, independent of their individual merits).
2. **Against AI-bubble/tail risk:** hold a larger-than-usual cash buffer specifically as dry powder to average into further weakness rather than treating the current 94.8% cash position as something to fully deploy at once — cash *is* the hedge in an equities-only, no-options book.
3. **Against rate sensitivity:** if/when a second position is added, weighting toward a lower-multiple, cash-generative name (versus another 100x+-forward-multiple name like ALAB) reduces the book's aggregate duration exposure to a "higher for longer" Fed surprise.

## 10. Rebalancing suggestions (allocation %)
Current: NVDA 5.2% / cash 94.8% (of total account); NVDA 100% / other 0% (of deployed book).

Suggested target once new capital is deployed (illustrative, not prescriptive — GS/BR own the idea-selection call):
- No single name > 30–35% of deployed capital
- At least one position genuinely uncorrelated to the AI-compute complex before adding a third AI-adjacent name
- Keep a minimum ~20–30% of the *trading-capital base* ($50+ profits, not the full $100 account) in cash at all times as dry powder / informal hedge, even once more fully deployed

---

## Disagreement flags / cross-check with other analysts
GS's screener (2026-07-10 first run) surfaced its top ideas — SNX, SKHY, ALAB, MU, AVGO, META — almost entirely within the same AI-compute sector this report flags as already maximally concentrated. **Explicit flag for BR (portfolio construction):** if GS's top-ranked ideas are the ones acted on first, sector concentration risk gets worse, not better, even as single-name risk improves. GS's own diversifier picks (OMCL, FRPT, ISRG) deserve real weight in the next portfolio construction pass specifically *because* they're the only ideas on the table uncorrelated to the existing NVDA exposure — not despite being GS's lowest-conviction ranks. No JPM (earnings) or MS (DCF) reports exist yet this cycle to cross-check further.

## Caveats
- All dollar-risk figures are trivial at current $5.23 deployed — this report is written for the *pattern*, since the same sizing discipline needs to hold once the book scales past a few dollars, not because today's number is dangerous in isolation.
- NVDA beta (2.2–2.4) and the 18.2%-from-high drawdown figure are sourced from this run's web search, not pulled directly from the Robinhood connector — reasonable but not connector-verified; will attempt to verify against `get_equity_technical_indicators` next run.
- Recession-probability range (12–30%) reflects genuine disagreement across sources this week, not a BW house estimate — presented as a range deliberately rather than false precision.
