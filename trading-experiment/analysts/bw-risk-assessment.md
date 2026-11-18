# BW Risk Assessment

**Report date: 2026-11-18 (Wednesday), ~09:41 ET** (verified via live Robinhood `get_portfolio`/`get_equity_positions`/`get_equity_quotes` on account 424593861 as of ~14:41 UTC, regular session, T+1 after last night's NVDA print). Persona file re-read fresh this run — unchanged since last cycle.

## Overall Portfolio Risk Grade: **D** (unchanged letter, but the composition of the risk changed materially — see below)

## Single biggest risk right now
**NVDA's post-print reaction is fading back to unchanged, not holding a pop — and the governance/litigation overhang it's fading against just got wider, not narrower, on the same news cycle.** Last night's print was genuinely clean (Q3 rev $115.8B vs. $108B±2% guide, Data Center +110% YoY, Q4 guide $130B±3% vs. ~$125B consensus) and MS's full rebuild moved NVDA from "-22.2% overvalued" to essentially fairly valued at base case. **None of that is showing up in the live tape right now: NVDA is trading $155.35, 3 cents below last night's regular-session close ($155.46) and well off the ~$160-163 after-hours/premarket pop — round-tripping to flat on a beat that should, on fundamentals alone, have re-rated the stock up.** That is itself the finding: the market is pricing the governance/legal discount as real and durable, not as a transitory pre-print fear that a clean quarter resolves. And that discount is now being tested by *more* simultaneous threads than at any point in this book's history — three reported DOJ-probe angles (antitrust, Megaspeed, Supermicro, per Semafor, unconfirmed), a Senate invitation to Huang to testify on China-export policy, a single-sourced SEC-investigation headline, a newly-surfaced Kistenmacher securities class action, and today's proposed closed-door congressional briefing — stacked on top of an open board-led investigation with no findings yet. **This book has zero hedging instruments for single-name litigation/governance risk in an equities-only toolbox, and the position is being held through all of it on a no-new-cash, no-trim instruction.**

---

## 1. Live portfolio snapshot (ground truth, this run)

| Holding | Qty | Avg cost | Live price | Position value | Unrealized P/L | % of equity | % of pool |
|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $201.40 | $155.35 | ~$3.86 | **-$1.14 (-22.87%)** | 9.32% | 8.12% |
| VTI | 0.036690 | $370.40 | $359.43 | ~$13.19 | -$0.40 (-2.96%) | 31.88% | 27.78% |
| VXUS | 0.154525 | $84.13 | $79.42 | ~$12.27 | -$0.73 (-5.60%) | 29.64% | 25.84% |
| OMCL | 0.106405 | $46.99 | $34.67 | ~$3.69 | **-$1.31 (-26.22%)** | 8.91% | 7.77% |
| XLE | 0.086775 | $57.62 | $62.15 | ~$5.39 | +$0.39 (+7.86%) | 13.04% | 11.36% |
| GEHC | 0.036393 | $68.69 | $82.30 | ~$3.00 | +$0.50 (+19.81%) | 7.24% | 6.31% |
| Cash (deployable, $56.10 total − $50 reserved) | — | — | — | $6.10 | — | — | 12.85% |

Account total value **$97.485** (cash $56.10 + equity $41.385). Pool (the $50 + profits trading book) ≈ **$47.485, a -$2.515 (-5.03%) accumulated loss — a new week-worst**, deepened from 11/17's -4.66%/-4.76% readings.

## 2. Heat map summary

| Holding | Sector | Risk Level | Key driver |
|---|---|---|---|
| **NVDA** | Semis / AI compute | 🔴 **Critical** | Beat-and-fade confirmed intraday (flat vs. pre-print close, not a pop); governance/litigation overhang widened to five simultaneous threads; -22.9% below cost, -13.7% through MS's $180 bear-case line |
| **OMCL** | Healthcare IT | 🟠 **High** | Still trading below MS's $35.24 bear-case line ($34.67, -1.6% under it); -26.2% below cost; thin single-name liquidity; no structural cause found across nine-plus re-reads |
| VTI | Broad US equity (tech-heavy look-through) | 🟡 Medium | 31.88% of equity, the book's single largest position, and its mega-cap tech weighting moves *with* the NVDA cluster, not against it |
| XLE | Energy | 🟡 Medium | Commodity/rate cyclicality; book's best performer, giving back some of yesterday's gain today (-1.9% intraday) |
| VXUS | Int'l ex-US equity | 🟢 Low-Medium | Genuine geographic/FX diversifier; today's largest single-day drawdown of the two index funds (-1.15% intraday) |
| GEHC | Healthcare equipment | 🟢 Low | Defensive, best performer, structurally uncorrelated to the AI/chip complex; closest live mechanical trigger on the book (1.19pp from BR's trim line) |
| Cash (deployable $6.10) | — | 🟢 Low | Reserve; sole dry powder, appropriately undeployed |

## 3. Correlation analysis
**Today is the cleanest live test yet of the correlation structure this desk keeps naming as the real risk.** NVDA printed a genuine beat and is still trading flat-to-down — and VTI, VXUS, and NVDA are all down together again this morning (VTI -1.59% intraday, VXUS -1.15%, NVDA -0.07% but off a much larger overnight pop), confirming VTI's 31.88% weight is a second, larger-dollar leg of the same AI/rate-sensitive-growth factor, not a diversifier. GEHC (+19.8% since entry, +0.56% today) and XLE (+7.9% since entry, though -1.9% today, giving back some of its hedge value) remain the only holdings behaving independently of the NVDA/OMCL/VTI cluster, and even XLE is red today — a reminder that "uncorrelated" positions can still have their own bad days simultaneously with the core cluster, they just aren't driven by the same factor.

## 4. Sector concentration
- AI/semis direct: NVDA 9.32% of equity
- AI/mega-tech look-through (via VTI): true AI-adjacent exposure is materially above the headline 9.32% once VTI's 31.88% look-through weighting is counted
- Broad US equity: 31.88% (VTI)
- Int'l equity: 29.64% (VXUS)
- Energy: 13.04% (XLE)
- Healthcare IT: 8.91% (OMCL)
- Healthcare equipment: 7.24% (GEHC)
- Combined healthcare (OMCL+GEHC): 16.15% — two different sub-sectors, two different risk drivers, reasonable internal diversification
- **NVDA+OMCL combined single-name concentration: 18.23% of equity** — under the 25% trigger, buffer **6.77pp**, compressed slightly from yesterday's ~7.0pp

**Same caveat as every prior report, still true today:** that 18.23% figure moving at all is a function of relative price moves across six names losing/gaining at different rates, not of any position-sizing decision. A number that drifts because the denominator (total equity) is itself falling is not the same thing as risk being actively managed down — flagging this again because the buffer compressed, not widened, even on a night with genuinely good NVDA fundamental news.

## 5. Geographic exposure and currency risk
VXUS (29.64% of equity) remains the book's only deliberate non-US exposure and its only currency risk — unhedged international equity, so USD strength is a direct headwind. Everything else is USD-denominated, US-domiciled. Reasonable geographic diversification for a book this size; currency risk is real but un-hedgeable with this toolbox and small in absolute dollar terms (~$12.27 exposed).

## 6. Interest rate sensitivity
- **NVDA: High**, and the backdrop just turned more hawkish, not less: **Fed Governor Waller said this week he's leaning toward a 25bp hike at the December 8-9 FOMC, explicitly open to 50bp if core CPI prints ~0.3%+ for a third straight month** (one report cites December-hike odds near 99%). Every basis point of that repricing compresses MS's WACC-based fair value further for the book's longest-duration name, independent of last night's print.
- **VTI: Medium-High**, driven by its mega-cap tech weighting — same Waller signal applies.
- **OMCL: Medium-High.** Small-cap-adjacent healthcare IT, typically more sensitive to financing conditions and multiple compression in a higher-for-longer/hawkish-surprise regime.
- **VXUS: Medium**, blended international exposure, somewhat lower average duration than US mega-cap tech.
- **XLE: Low-Medium.** Commodity-price-driven first, discount-rate-driven second.
- **GEHC: Low-Medium.** Defensive, lower beta, steadier cash flows.

**Rule 6a's rate-shock pause (blocking new core/NVDA adds pending a confirmed sub-4.75% 10yr close) is reinforced, not loosened, by this week's news** — Waller's openness to a 50bp move and VIX reportedly above 25 are both reasons to keep the pause engaged, not reasons to treat tonight's NVDA-driven tape relief as "risk is back on," as GS's report already flagged. The team's working ~4.87% 10yr figure still carries forward; no fresher dated print found.

## 7. Recession stress test (illustrative drawdown from current levels)
| Holding | Estimated recession drawdown | Rationale |
|---|---|---|
| NVDA | -35% to -45% | High-beta, capex-cycle-dependent; already carrying a governance/litigation discount that a recession would widen, not narrow |
| OMCL | -25% to -35% | Small-cap-adjacent, hospital-capex-dependent (health systems cut capital spend first in a downturn) |
| VTI | -25% to -30% | Broad market beta, tech-heavy tilt amplifies the downside |
| VXUS | -20% to -28% | International cyclicals plus FX drag if USD rallies in a flight-to-safety |
| XLE | -20% to -30% | Energy demand is pro-cyclical; a recession typically hits oil demand and prices together |
| GEHC | -10% to -18% | Defensive healthcare equipment holds up best of the six in a downturn |

Blended portfolio estimate: roughly **-25% to -32%** on the equity sleeve in a genuine recession scenario — unchanged in magnitude from prior reports, but now layered on top of a pool that is already at a fresh week-worst -5.03% accumulated loss before any recession scenario even starts.

## 8. Liquidity risk
- **NVDA, VTI, VXUS, XLE: 🟢 extremely liquid** — mega-cap/ETF, immaterial slippage risk at this book's size.
- **GEHC: 🟢 Liquid** — large-cap, ample daily volume relative to this book's ~$3 position.
- **OMCL: 🟠 Moderate** — single-name, smaller-cap healthcare IT; thinner liquidity than any other holding, though still not a practical constraint at this book's sub-$4 position size. The liquidity risk here is reputational/process (a thinly-traded name moving on illiquidity-driven noise, not fundamentals) more than execution risk.

## 9. Single stock risk and position sizing recommendations
- **NVDA (9.32% of equity, 18.23% combined with OMCL):** Already under BR's mandatory-review trigger (18-20% of equity), and under the 25% combined-concentration hard trigger, but **both buffers compressed this run, not widened, despite last night's good fundamental news.** This desk's recommendation, unchanged in substance but sharpened: if the combined NVDA+OMCL figure crosses **20% of equity** (not just 25%) at any future run, treat that as an early-warning trigger for a mandatory review conversation — a full 5pp earlier than the current hard trigger — given how many simultaneous, independent threads (print volatility, rate policy, litigation/governance) are now converging on exactly these two names at once.
- **OMCL (8.91% of equity):** Position sizing itself is fine (below the 10% pool target, DCA-gated from adding more). The risk here is concentration-of-attention, not concentration-of-dollars: this name has now required a structural-break re-read on nine-plus separate occasions purely on price action. No sizing change recommended.
- **GEHC (7.24% of equity, 6.31% of pool):** Sits 1.19pp from BR's own 7.5%/+3.5pp trim trigger — the single closest live mechanical trigger on the book. This desk has no disagreement with BR's pre-committed trim-to-6%-midpoint action and recommends it fire without delay if/when the line is crossed, rather than being re-litigated in the moment.
- **VTI (31.88% of equity):** The largest single position on the book by a wide margin, and — per the correlation analysis above — not a true diversifier against the NVDA/AI-growth factor. This desk continues to recommend that BR's standing "next incremental dollar routes to VXUS, not pro-rata" policy stay in force indefinitely, not just until the next rebalance, specifically to keep VTI's look-through tech concentration from drifting further without any single trigger ever naming it as the cause.

## 10. Tail risk scenarios with probability estimates
| Scenario | Rough probability (next 30 days) | Estimated impact |
|---|---|---|
| NVDA governance/litigation escalation (any one of the DOJ-probe threads, the SEC rumor, or the securities suit converts from "reported" to "confirmed/filed") | ~25-35% (elevated this run — five simultaneous threads is new; no single one is independently well-corroborated) | NVDA -15% to -30% single-session; a second, sharper leg on top of last night's already-faded reaction |
| Fed delivers a 50bp December hike (vs. the now-base-case 25bp) | ~15-20% per Waller's own framing | Broad de-rating of long-duration growth (NVDA, VTI) and small/mid-cap financing-sensitive names (OMCL); -5% to -10% portfolio-wide shock |
| OMCL structural break finally materializes (a guidance cut, lost contract, or margin/bookings deterioration — none found in nine-plus checks to date) | ~5-10% (base rate stays low given the consistent null results, but a name graded High risk shouldn't be treated as "it'll never happen") | OMCL -20% to -35% on confirmation; would also force an immediate DCA-gate and sizing re-read |
| Broad AI-trade capex-digestion pause (hyperscaler spending pulls back, independent of NVDA's own execution) | ~10-15% | NVDA -20%+ on a multiple de-rating even with clean execution; VTI/VXUS drag via mega-cap tech weighting |
| GEHC/XLE-style defensive/hedge sleeve underperforms simultaneously with the core cluster (correlation breakdown of the "safe" names) | ~10% | Removes the book's only two genuinely uncorrelated return streams at the worst possible time; today's XLE red session is a small-scale preview |

## 11. Hedging strategies to reduce the top 3 risks (equities-only toolbox — no options)

**Top 3 risks, ranked:** (1) the NVDA/OMCL/VTI correlated AI-growth-factor cluster; (2) NVDA's now five-threaded governance/litigation overhang; (3) a hawkish Fed surprise compounding duration risk across NVDA/VTI/OMCL simultaneously.

1. **Against the correlated cluster:** No inverse or options instrument exists in this book, so the only real lever is capital allocation. Keep routing every incremental core dollar to VXUS over VTI (BR's standing policy) to slow, not reverse, the look-through tech drift. Separately, this desk floats — for the team to evaluate, not a recommendation to act on unilaterally — whether a third genuinely uncorrelated sleeve (e.g., a consumer-staples or utilities ETF) is worth adding alongside GEHC/XLE the next time there's a capital-allocation decision, since relying on only two uncorrelated names means both would need to hold up simultaneously in a stress scenario, which is not guaranteed (see tail risk table above).
2. **Against the governance/litigation overhang:** The only equities-only hedge against single-name legal tail risk is position-size discipline itself. This desk's concrete ask: tighten the next mandatory-review trigger for NVDA from the current 18-20%-of-equity line to **20% of the NVDA+OMCL combined figure** (see §9) given how many independent threads are now converging on the same two names, and have the team pre-commit that **any one** governance/litigation thread converting from reported to confirmed — not just a price or weight trigger — independently fires a full re-read, rather than waiting for the next scheduled cadence.
3. **Against a hawkish Fed surprise:** Rule 6a's pause is the hedge, and it is already engaged. No new action needed beyond keeping it engaged through December 8-9's FOMC decision — the $6.10 deployable cash is itself the most direct rate hedge available in this toolbox, since it carries zero duration and is the only asset in the book that does not reprice on a hawkish surprise.

## 12. Rebalancing suggestions with allocation percentages
This desk defers allocation authority to BR by design and has no disagreement with BR's current targets: **VTI 26% / VXUS 27% / NVDA 7% / XLE 12% / GEHC 4% (±5pp band, trim at 7.5%) / OMCL 10% (DCA-gated) / Cash 14%.** This desk's only addition: **if/when GEHC's trim fires, route the proceeds to cash or to the uncorrelated XLE/GEHC-style sleeve, explicitly not toward NVDA or OMCL** — reinforcing diversification at the exact moment new capital becomes available, rather than letting it drift back into the book's most correlated names by default.

---

## Disagreements flagged
- **No disagreement with MS's NVDA rebuild or its "roughly fairly valued" conclusion on fundamentals.** This desk's point is narrower and risk-specific: a fundamentals re-rating that the market itself is not yet pricing (flat tape despite a clean beat) is evidence the governance/litigation discount is sticky, not evidence the discount is closing — a distinct read from, but not a contradiction of, MS's own valuation work.
- **No disagreement with BR's hold-the-line instructions on NVDA, OMCL, or GEHC.** This desk's additions (a tighter 20%-combined early-warning trigger, a thread-based legal-escalation trigger) are offered as process proposals for the team, not as an override of BR's sizing authority.
- **Echoing GS's and JPM's framing that last night's "beat-and-fade" is the third such pattern in four quarters** — this desk's contribution is translating that pattern into the risk read: a market that won't re-rate NVDA up on good news is a market pricing something this book's equities-only toolbox cannot hedge directly, which is exactly why position-size and trigger discipline matter more here than in a book with options available.

---

*Prepared by the BW Risk Assessment persona. Figures are this run's own live Robinhood `get_portfolio`/`get_equity_positions`/`get_equity_quotes` pull on account 424593861 (~14:41 UTC / ~09:41 ET). Cross-referenced against analysts/ms-dcf-valuation.md (11/18 ~09:16 ET), analysts/jpm-earnings-analyzer.md (11/18 ~08:17 ET), analysts/gs-stock-screener.md (11/18 ~08:4x ET), analysts/br-portfolio-builder.md (11/17 ~15:12 ET, freshest on file), and trading-experiment/state.md.*
