# BW Risk Assessment

**Report date: 2026-11-17 (Tuesday), ~09:4x ET** (verified via `TZ=America/New_York date`; live Robinhood `get_portfolio`/`get_equity_positions`/`get_equity_quotes` on account 424593861 as of ~14:41 UTC, regular session)

## Overall Portfolio Risk Grade: **D** (unchanged from 11/16)

## Single biggest risk right now
**NVDA reports Q3 FY27 earnings tonight (~5pm ET) — the first call in company history delivered by an interim CEO, six days after the board forced out a 33-year founder-CEO.** This lands on a position that is already -22.4% below its own cost basis and -13.2% through MS's own $180 bear-case DCF anchor, with zero resolution yet on succession. This is not a diversification or sector-concentration problem — it is a binary, same-day, leadership-transition-plus-earnings event sitting on top of the book's most volatile holding, and it resolves in hours, not weeks.

---

## 1. Live portfolio snapshot (ground truth, this run)

| Holding | Qty | Avg cost | Live price | Position value | Unrealized P/L | % of equity | % of pool |
|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $201.40 | $156.20 | ~$3.88 | **-$1.12 (-22.4%)** | 9.24% | 8.07% |
| VTI | 0.036690 | $370.40 | $363.665 | ~$13.34 | -$0.25 (-1.8%) | 31.80% | 27.77% |
| VXUS | 0.154525 | $84.13 | $80.495 | ~$12.44 | -$0.56 (-4.3%) | 29.66% | 25.88% |
| OMCL | 0.106405 | $46.99 | $34.80 | ~$3.70 | **-$1.30 (-26.0%)** | 8.83% | 7.71% |
| XLE | 0.086775 | $57.62 | $64.42 | ~$5.59 | +$0.59 (+11.8%) | 13.33% | 11.63% |
| GEHC | 0.036393 | $68.69 | $82.51 | ~$3.00 | +$0.50 (+20.1%) | 7.16% | 6.25% |
| Cash (deployable) | — | — | — | $6.10 | — | — | 12.69% |

Account total value **$98.0638** (cash $56.10 + equity $41.9638). Pool (the $50 + profits trading book) ≈ **$48.0638, a -$1.9362 (-3.87%) accumulated loss.**

## 2. Heat map summary

| Holding | Sector | Risk Level | Key driver |
|---|---|---|---|
| **NVDA** | Semis / AI compute | 🔴 **Critical** | Earnings + leadership transition same day, already -22% below cost, -13.2% through bear-case line |
| **OMCL** | Healthcare IT | 🟠 **High** | Trading below MS's $35.24 bear-case line, -26% below cost, thin single-name liquidity, no bounce catalyst |
| VTI | Broad US equity (tech-heavy look-through) | 🟡 Medium | Correlated to NVDA/mega-cap AI drawdown via index weighting, not diversifying away from the book's core risk |
| XLE | Energy | 🟡 Medium | Commodity/rate cyclicality; currently the book's best performer, but that can reverse fast |
| VXUS | Int'l ex-US equity | 🟢 Low-Medium | Genuine geographic/FX diversifier, smallest drawdown of the two index funds |
| GEHC | Healthcare equipment | 🟢 Low | Defensive, no near-term catalyst, best performer, structurally uncorrelated to the AI/chip complex |
| Cash (deployable $6.10) | — | 🟢 Low | Reserve; sole dry powder, currently appropriately undeployed |

## 3. Correlation analysis
The book's real correlation structure is worse than the sector labels suggest. NVDA and OMCL — nominally "semis" and "healthcare IT," two different sectors — have moved down together for weeks on broad-based, not company-specific, selling, and both currently sit below their own bear-case lines simultaneously. That is not a coincidence of sector; it is correlated risk-off behavior across the two most volatile names in the book. VTI compounds this: its look-through weighting is heavily mega-cap tech/AI, so it is not a true diversifier against NVDA — it is a second, larger-dollar bet on the same macro factor. The only holdings genuinely uncorrelated to the AI/chip drawdown are GEHC (defensive healthcare equipment, up +20%) and, to a lesser extent, XLE (energy, driven by its own commodity cycle). VXUS sits in between — international equities with some but lower AI-mega-cap weighting than VTI.

## 4. Sector concentration
- AI/semis direct: NVDA 9.24% of equity
- AI/mega-tech look-through (via VTI): a material slice of VTI's 31.80% — true AI-adjacent exposure is well above the headline 9.24% NVDA figure once VTI's look-through is counted
- Broad US equity: 31.80% (VTI)
- Int'l equity: 29.66% (VXUS)
- Energy: 13.33% (XLE)
- Healthcare IT: 8.83% (OMCL)
- Healthcare equipment: 7.16% (GEHC)
- Combined healthcare (OMCL+GEHC): 16.0% — two different sub-sectors, two different risk drivers, reasonable internal diversification
- **NVDA+OMCL combined single-name concentration: 18.07% of equity** — comfortably under the adopted 25% trigger, buffer ~6.9pp

**Don't read that last number as risk control.** The combined NVDA+OMCL weight has fallen from over 20% a week ago toward 18% almost entirely because both names cratered in price, not because anyone sized down. A shrinking percentage driven by a falling numerator is a realized loss wearing the costume of a hedge. Grading this "clean" without that caveat would be exactly the kind of complacent risk reporting this desk exists to call out.

## 5. Geographic exposure and currency risk
VXUS (29.66% of equity) is the book's only deliberate non-US exposure and its only currency risk — unhedged international equity, so USD strength is a direct headwind, USD weakness a direct tailwind. Everything else (NVDA, VTI, OMCL, XLE, GEHC) is USD-denominated, US-domiciled. Geographic diversification is reasonable for a book this size; currency risk is real but un-hedgeable with this toolbox (equities only) and small in absolute dollar terms (~$12.44 exposed).

## 6. Interest rate sensitivity
- **NVDA: High.** Long-duration growth cash flows; MS's own stressed-WACC re-read (13.0-14.0%, up from a pre-governance-crisis base case) is itself a rate-sensitivity statement — every basis point of discount-rate stress compresses the implied fair value further.
- **VTI: Medium-High**, driven by its mega-cap tech weighting.
- **OMCL: Medium-High.** Small-cap-adjacent healthcare IT names are typically more sensitive to financing conditions and multiple compression in a higher-for-longer regime.
- **VXUS: Medium**, blended international exposure, somewhat lower average duration than US mega-cap tech.
- **XLE: Low-Medium.** Energy cash flows are commodity-price-driven first, discount-rate-driven second.
- **GEHC: Low-Medium.** Defensive healthcare equipment, lower beta, steadier cash flows.

## 7. Recession stress test (illustrative drawdown from current levels)
| Holding | Estimated recession drawdown | Rationale |
|---|---|---|
| NVDA | -35% to -45% | High-beta, capex-cycle-dependent, already de-rating on governance risk alone |
| OMCL | -25% to -35% | Small-cap-adjacent, hospital-capex-dependent (health systems cut capital spend first in a downturn) |
| VTI | -25% to -30% | Broad market beta, tech-heavy tilt amplifies the downside |
| VXUS | -20% to -28% | International cyclicals plus FX drag if USD rallies in a flight-to-safety |
| XLE | -20% to -30% | Energy demand is pro-cyclical; a recession typically hits oil demand and prices together |
| GEHC | -10% to -18% | Defensive healthcare equipment holds up best of the six in a downturn |

Blended portfolio estimate: roughly **-25% to -32%** on the equity sleeve in a genuine recession scenario, i.e., the $41.96 equity book could realistically fall to the high-$20s/low-$30s before any rebound — on top of whatever NVDA/OMCL-specific damage is still working through the book today.

## 8. Liquidity risk
- NVDA, VTI, VXUS: 🟢 extremely liquid, mega-cap/ETF, immaterial slippage risk at this book's size.
- XLE: 🟢 highly liquid sector ETF.
- GEHC: 🟢 large-cap, good liquidity.
- **OMCL: 🟡 Medium.** Smaller market cap than the rest of the book, wider typical spreads — not a liquidity crisis at these position sizes, but the weakest link if this book ever needs to exit a position in size under stress.

## 9. Single stock risk & position sizing
In absolute dollars these are trivial positions ($3-6 each), so single-stock blowup risk is capped by account size, not by sizing discipline. The risk that matters here is **precedent and percentage drift**, not dollars. NVDA's 9.24%/OMCL's 8.83% individual weights are each well under any single-name cap, and the combined 18.07% sits ~6.9pp under the 25% trigger — but as flagged above, that buffer is borrowed from price depreciation, not earned through discipline. **Recommendation: no new capital into NVDA or OMCL before tonight's print, full stop.** This isn't a new rule — it's restating the standing contingency plans, which this desk fully endorses and sees no reason to override today.

## 10. Tail risk scenarios
| Scenario | Rough probability | Impact |
|---|---|---|
| NVDA print disappoints AND Kress's first call as CEO fails to reassure on succession/governance — a second leg down on an already-fallen stock | ~25-30% | Could take NVDA toward or through fresh multi-month lows; -10% to -20% incremental on the position |
| NVDA beats/reassures and the stock snaps back sharply (short-covering + relief rally) | ~25-30% | Fast, favorable repricing; this book's unresolved governance discount could partially unwind in a single session |
| OMCL-specific negative headline surfaces (still none found as of this run) while NVDA is also moving — compounding, correlated single-session shock | ~10-15% | Both of the book's weakest names fall together on the same day, worst-case correlation scenario |
| Broad macro/rate shock hits cyclicals (XLE) and growth (NVDA/VTI) simultaneously | ~10% | Would overwhelm the book's modest diversification; GEHC alone can't carry the portfolio |
| Status-quo grind: muted print reaction, no fresh catalyst, continuation of the current drift | ~25-30% | Most likely single outcome based on this week's pattern — but "most likely" is not "safe to ignore" given the stakes |

## 11. Hedging strategies (equities-only — no options available)
1. **NVDA/leadership-transition risk:** the only real equities-only hedge left is sizing discipline — do not add pre-print, do not average down reflexively on a post-print drop, and let GEHC/XLE (uncorrelated to this specific risk) continue to be the book's ballast rather than diluting them to fund an NVDA add.
2. **OMCL structural/concentration risk:** GEHC is a partial natural hedge — same broad healthcare theme, different sub-sector and different risk driver (equipment/defensive vs. hospital-IT/capex-cyclical) — so it absorbs some of the "healthcare is risky" narrative without being 1:1 correlated to OMCL's own structural issues.
3. **Look-through AI/mega-tech concentration (via VTI):** continue tilting any new core-sleeve dollars toward VXUS over VTI, as BR has already partially adopted — this is the one lever in an equities-only book that actually dilutes AI-correlated exposure rather than just avoiding adding to it.

## 12. Rebalancing suggestions
- **Today, pre-print: no trades.** Full agreement with the standing no-same-minute-decision discipline.
- **Post-print, if NVDA/OMCL rally:** consider letting the combined NVDA+OMCL weight drift back down toward ~15% of equity by not reinvesting gains into either name, rather than trimming into strength — preserves the thesis while banking some of the de-risking.
- **Post-print, if NVDA drops further:** reaffirm no averaging down without a fresh full 5-analyst cross-vet (MS DCF + BR allocation sign-off) — a cheaper price alone is not a reason to add to the book's single most binary-event-exposed name on the same day its leadership question is most unsettled.
- **Standing core-sleeve policy:** keep favoring VXUS over VTI for any new deployable cash, consistent with BR's prior partial adoption of this ask — the goal is a lower long-run look-through AI/mega-tech weight, not a one-time trade.

---
*Past reports: `git log -p -- trading-experiment/analysts/bw-risk-assessment.md`. Next mandatory re-check: first scheduled run after tonight's ~5pm ET NVDA print/call — re-grade based on Kress's actual commentary on succession and the print itself, not the raw beat/miss headline.*
