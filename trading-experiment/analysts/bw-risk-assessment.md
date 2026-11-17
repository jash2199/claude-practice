# BW Risk Assessment

**Report date: 2026-11-17 (Tuesday), ~13:41 ET** (verified via `TZ=America/New_York date`; live Robinhood `get_portfolio`/`get_equity_positions`/`get_equity_quotes` on account 424593861 as of ~18:41 UTC, regular session, ~3-4 hours before tonight's NVDA print/call)

## Overall Portfolio Risk Grade: **D** (unchanged from this morning's 09:4x ET report — see caveat below)

## Single biggest risk right now
**Unchanged in kind, worse in degree: NVDA's print is now ~3-4 hours away, and every number that matters has deteriorated intraday.** NVDA is trading at $153.425, -23.82% below its own cost basis (vs. -22.4% this morning) and -14.76% through MS's $180 bear-case DCF line (vs. -13.2% this morning). OMCL has also pushed further below MS's $35.24 bear-case floor — now -2.21% under it at $34.46, deeper than this morning's graze. This is the seventh run of the day the desk has logged a deepening pre-print drawdown with no new structural fact behind it. **Don't mistake the unchanged letter grade for a stable situation — it reflects that the risk *category* (binary leadership-transition-plus-earnings event, hours out) hasn't changed, not that the exposure is holding steady. The dollar and percentage losses are still getting worse every run.**

---

## 1. Live portfolio snapshot (ground truth, this run)

| Holding | Qty | Avg cost | Live price | Position value | Unrealized P/L | % of equity | % of pool |
|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $201.40 | $153.425 | ~$3.81 | **-$1.19 (-23.82%)** | 9.16% | 7.99% |
| VTI | 0.036690 | $370.40 | $360.035 | ~$13.21 | -$0.38 (-2.80%) | 31.78% | 27.72% |
| VXUS | 0.154525 | $84.13 | $80.049 | ~$12.37 | -$0.63 (-4.85%) | 29.78% | 25.94% |
| OMCL | 0.106405 | $46.99 | $34.46 | ~$3.67 | **-$1.33 (-26.67%)** | 8.83% | 7.70% |
| XLE | 0.086775 | $57.62 | $63.44 | ~$5.51 | +$0.51 (+10.10%) | 13.24% | 11.55% |
| GEHC | 0.036393 | $68.69 | $82.66 | ~$3.01 | +$0.51 (+20.32%) | 7.24% | 6.31% |
| Cash (deployable, $56.10 total − $50 reserved) | — | — | — | $6.10 | — | — | 12.80% |

Account total value **$97.6686** (cash $56.10 + equity $41.5686). Pool (the $50 + profits trading book) ≈ **$47.6686, a -$2.3314 (-4.66%) accumulated loss** — deepened from this morning's -3.87% and from 13:37's -4.60%, a new intraday low for the week.

## 2. Heat map summary

| Holding | Sector | Risk Level | Key driver |
|---|---|---|---|
| **NVDA** | Semis / AI compute | 🔴 **Critical** | Earnings + leadership-transition call in ~3-4 hours, -23.8% below cost, -14.8% through bear-case line, both deepening intraday |
| **OMCL** | Healthcare IT | 🟠 **High** | Now trading 2.2% below MS's $35.24 bear-case line (deepened from this morning), -26.7% below cost, thin single-name liquidity, no bounce catalyst |
| VTI | Broad US equity (tech-heavy look-through) | 🟡 Medium | Correlated to NVDA/mega-cap AI drawdown via index weighting, not diversifying away from the book's core risk |
| XLE | Energy | 🟡 Medium | Commodity/rate cyclicality; still the book's best performer, but that can reverse fast |
| VXUS | Int'l ex-US equity | 🟢 Low-Medium | Genuine geographic/FX diversifier, smallest drawdown of the two index funds |
| GEHC | Healthcare equipment | 🟢 Low | Defensive, no near-term catalyst, best performer, structurally uncorrelated to the AI/chip complex |
| Cash (deployable $6.10) | — | 🟢 Low | Reserve; sole dry powder, appropriately undeployed ahead of the print |

## 3. Correlation analysis
Today's price action is a live demonstration of the correlation risk this desk has flagged for weeks: NVDA and OMCL — nominally unrelated sectors — are falling together, both now trading below their own bear-case anchors simultaneously, on a day with broad-based (not company-specific) risk-off flow. VTI compounds rather than offsets this: its mega-cap tech look-through means it moves with NVDA's drawdown, not against it, so 31.78% of the equity book is a second, larger-dollar leg of the same AI/rate-sensitive-growth factor bet, not a true diversifier. GEHC (+20.3%, defensive healthcare equipment) and, to a lesser extent, XLE (+10.1%, its own commodity cycle) remain the only holdings moving independently of the NVDA/OMCL/VTI cluster today. VXUS sits in between, down but less than VTI, consistent with its lower AI-mega-cap tilt.

## 4. Sector concentration
- AI/semis direct: NVDA 9.16% of equity
- AI/mega-tech look-through (via VTI): true AI-adjacent exposure is materially above the headline 9.16% once VTI's 31.78% look-through weighting is counted
- Broad US equity: 31.78% (VTI)
- Int'l equity: 29.78% (VXUS)
- Energy: 13.24% (XLE)
- Healthcare IT: 8.83% (OMCL)
- Healthcare equipment: 7.24% (GEHC)
- Combined healthcare (OMCL+GEHC): 16.07% — two different sub-sectors, two different risk drivers, reasonable internal diversification
- **NVDA+OMCL combined single-name concentration: 17.99% of equity** — under the 25% trigger, buffer ~7.0pp

**The same caveat as every prior report applies, more forcefully today:** that 17.99% figure is falling because both names are losing value, not because position sizing improved. A shrinking percentage driven by two simultaneously cratering numerators is not risk control — it is a loss dressed up as discipline. Reporting this as "comfortably under the trigger" without that caveat would be exactly the complacent framing this desk exists to push back on.

## 5. Geographic exposure and currency risk
VXUS (29.78% of equity) remains the book's only deliberate non-US exposure and its only currency risk — unhedged international equity, so USD strength is a direct headwind, USD weakness a direct tailwind. Everything else (NVDA, VTI, OMCL, XLE, GEHC) is USD-denominated, US-domiciled. Geographic diversification is reasonable for a book this size; currency risk is real but un-hedgeable with this toolbox (equities only) and small in absolute dollar terms (~$12.37 exposed).

## 6. Interest rate sensitivity
- **NVDA: High.** Long-duration growth cash flows; every basis point of discount-rate stress in MS's WACC model compresses implied fair value further, and the Fed's hiking cycle this year (policy rate lifted to 4.00% in September, the first hike since 2023, with further tightening signaled) keeps the discount-rate backdrop unfavorable for the book's longest-duration name.
- **VTI: Medium-High**, driven by its mega-cap tech weighting.
- **OMCL: Medium-High.** Small-cap-adjacent healthcare IT names are typically more sensitive to financing conditions and multiple compression in a higher-for-longer regime.
- **VXUS: Medium**, blended international exposure, somewhat lower average duration than US mega-cap tech.
- **XLE: Low-Medium.** Energy cash flows are commodity-price-driven first, discount-rate-driven second.
- **GEHC: Low-Medium.** Defensive healthcare equipment, lower beta, steadier cash flows.

The macro backdrop (a Fed that hiked in September and signaled more tightening, 10-year yields that pushed back above 5% on the move) is not a one-off headline — it is the regime this entire book's rate-sensitive sleeve (NVDA, VTI, OMCL) is discounting against tonight, independent of whatever NVDA's own print says.

## 7. Recession stress test (illustrative drawdown from current levels)
| Holding | Estimated recession drawdown | Rationale |
|---|---|---|
| NVDA | -35% to -45% | High-beta, capex-cycle-dependent, already de-rating on governance risk and now sitting materially through its own bear-case line pre-print |
| OMCL | -25% to -35% | Small-cap-adjacent, hospital-capex-dependent (health systems cut capital spend first in a downturn), already trading below its own floor |
| VTI | -25% to -30% | Broad market beta, tech-heavy tilt amplifies the downside |
| VXUS | -20% to -28% | International cyclicals plus FX drag if USD rallies in a flight-to-safety |
| XLE | -20% to -30% | Energy demand is pro-cyclical; a recession typically hits oil demand and prices together |
| GEHC | -10% to -18% | Defensive healthcare equipment holds up best of the six in a downturn |

Blended portfolio estimate: roughly **-25% to -32%** on the equity sleeve in a genuine recession scenario — on top of the NVDA/OMCL-specific damage already working through the book today, and before whatever tonight's print adds or subtracts.

## 8. Liquidity risk
- NVDA, VTI, VXUS: 🟢 extremely liquid, mega-cap/ETF, immaterial slippage risk at this book's size.
- XLE: 🟢 highly liquid sector ETF.
- GEHC: 🟢 large-cap, good liquidity.
- **OMCL: 🟡 Medium.** Smaller market cap than the rest of the book, wider typical spreads. Today's deepened trade-through of its own bear-case floor on no company-specific news is more evidence for this flag, not less — it is the weakest link if this book ever needs to exit a position in size under stress.

## 9. Single stock risk & position sizing
In absolute dollars these remain trivial positions ($3-6 each), so single-stock blowup risk is capped by account size, not sizing discipline. The risk that matters is **precedent and percentage drift under stress**, not dollars. NVDA's 9.16%/OMCL's 8.83% individual weights, and their combined 17.99%, all sit under any reasonable single-name or combined cap — but as noted above, that comfort is borrowed from price depreciation, not earned through trimming. **Recommendation, restated with more force given the print is now hours away: no new capital into NVDA or OMCL before tonight's call, full stop.** This is not a new rule; it is the standing contingency plan this desk continues to endorse. The one thing worth flagging plainly: this is now the book's sixth-to-seventh consecutive no-trade run through a worsening intraday drift, and nobody has revisited whether the $180/$35.24 bear-case anchors themselves still make sense as floors versus as triggers for a structural re-underwrite, given both have now been breached more than once. Holding through a print is correct discipline; treating a repeatedly-breached anchor as untouchable without a scheduled re-look is a process gap, not vindication.

## 10. Tail risk scenarios
| Scenario | Rough probability | Impact |
|---|---|---|
| NVDA print disappoints AND Kress's first call as CEO fails to reassure on succession/governance — a second leg down on an already-fallen stock | ~25-30% | Could take NVDA toward or through fresh multi-month lows; -10% to -20% incremental on the position |
| NVDA beats/reassures and the stock snaps back sharply (short-covering + relief rally) | ~25-30% | Fast, favorable repricing; the book's unresolved governance discount could partially unwind in a single session |
| OMCL-specific negative headline surfaces (still none found as of this run) while NVDA is also moving — compounding, correlated single-session shock | ~10-15% | Both of the book's weakest names fall together on the same day, worst-case correlation scenario |
| Broad macro/rate shock hits cyclicals (XLE) and growth (NVDA/VTI) simultaneously | ~10% | Would overwhelm the book's modest diversification; GEHC alone can't carry the portfolio |
| Status-quo grind: muted print reaction, no fresh catalyst, continuation of today's drift | ~20-25% | The pattern every run today has logged — but "most likely" is not "safe to ignore" given the stakes in ~3-4 hours |

## 11. Hedging strategies (equities-only — no options available)
1. **NVDA/leadership-transition risk:** the only real equities-only hedge left is sizing discipline — do not add pre-print, do not average down reflexively on a post-print drop, and let GEHC/XLE (uncorrelated to this specific risk) continue to be the book's ballast rather than diluting them to fund an NVDA add.
2. **OMCL structural/concentration risk:** GEHC is a partial natural hedge — same broad healthcare theme, different sub-sector and different risk driver (equipment/defensive vs. hospital-IT/capex-cyclical) — so it absorbs some of the "healthcare is risky" narrative without being 1:1 correlated to OMCL's own structural issues.
3. **Look-through AI/mega-tech concentration (via VTI):** continue tilting any new core-sleeve dollars toward VXUS over VTI, as BR has already partially adopted — this is the one lever in an equities-only book that actually dilutes AI-correlated exposure rather than just avoiding adding to it.

## 12. Rebalancing suggestions
- **Right now, pre-print: no trades.** Full agreement with the standing no-same-minute-decision discipline — there are only hours left before the one event that could actually resolve part of this.
- **Post-print, if NVDA/OMCL rally:** let the combined NVDA+OMCL weight drift back down toward ~15% of equity by not reinvesting gains into either name, rather than trimming into strength — preserves the thesis while banking some of the de-risking.
- **Post-print, if NVDA drops further:** reaffirm no averaging down without a fresh full 5-analyst cross-vet — a cheaper price alone is not a reason to add to the book's single most binary-event-exposed name on the same day its leadership question is most unsettled.
- **New this run:** whatever tonight's outcome, the next scheduled re-underwrite should explicitly revisit whether the $180 (NVDA) and $35.24 (OMCL) bear-case lines are still the right anchors, given both have now been breached repeatedly intraday without triggering a review of the anchor itself — not as a reason to move them today, but because a line that gets breached every run and never reconsidered stops functioning as a risk control.
- **Standing core-sleeve policy:** keep favoring VXUS over VTI for any new deployable cash, consistent with BR's prior partial adoption — the goal is a lower long-run look-through AI/mega-tech weight, not a one-time trade.

---
*Past reports: `git log -p -- trading-experiment/analysts/bw-risk-assessment.md`. Next mandatory re-check: first scheduled run after tonight's ~5pm ET NVDA print/call — re-grade based on Kress's actual commentary on succession and the print itself, not the raw beat/miss headline.*
