# BW Risk Assessment

**Report date: 2026-11-18 (Wednesday), ~13:41 ET** (verified via live Robinhood `get_portfolio`/`get_equity_positions`/`get_equity_quotes` on account 424593861, ~18:41 UTC, regular session, T+1 after NVDA's print). Persona file re-read fresh this run — unchanged since last cycle.

## Overall Portfolio Risk Grade: **D** (held, not downgraded — but a new finding this run undercuts the reliability of every desk's valuation work, including the team's own "NVDA is fairly valued" conclusion)

## Single biggest risk right now

**The entire team's discount-rate input is stale and wrong by more than anyone has been treating it, and it's been wrong in the direction that makes every DCF on this book look cheaper than it should.** Every desk — MS, BR, GS, this desk's own 09:41 ET report — has spent weeks carrying a "~4.87%" 10-year Treasury figure forward because fresh WebSearches kept hitting a dateline wall. This run's dedicated search broke through it: FRED, Forbes, CNBC, and Mortgage News Daily **all independently confirm the 10-year closed at 5.12% on 11/16/2026** (a 5.174% intraday high on 11/13), with multiple outlets citing markets pricing **more aggressive Fed hikes**, not fewer — consistent with Waller's own 25-50bp December signal that every report this week has already flagged. That is **~25bp above the team's working figure**, not a rounding difference. MS's base-case WACC builds (NVDA 12.72%, OMCL 9.43%, XLE ~11.0%, GEHC 8.0%) all key off the stale 4.87% risk-free rate. A 25bp higher Rf pushes every one of those WACCs higher and every fair value lower — which means **MS's freshly-rebuilt "NVDA roughly fairly valued at base case (-0.6%)" verdict, the single most load-bearing valuation call on the book this week, was run on an input that understates the true discount rate.** Re-run with the corrected 5.12% Rf, NVDA's base case almost certainly tips back toward overvalued, not fairly valued — the re-rating this desk's 09:41 ET report called "a fundamentals story, not a risk-discount story" needs to be re-examined once the rate input itself is fixed. **This is a correctable, non-dramatic finding, but it has been silently inflating every fair-value number this team has produced for weeks, at the exact moment the book is holding its two highest-risk names (NVDA, OMCL) through an escalating governance/litigation calendar with zero hedging capacity.** Separate and real, but secondary to this: Huang agreed Wednesday night (today, 11/18) to testify before Congress within 14 days — the congressional threat just moved from "requested" to "agreed," tightening the already-live NVDA event-risk window.

---

## 1. Live portfolio snapshot (ground truth, this run)

| Holding | Qty | Avg cost | Live price | Position value | Unrealized P/L | % of equity | % of pool |
|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $201.40 | $152.29 | ~$3.78 | **-$1.21 (-24.39%)** | 9.13% | 7.96% |
| VTI | 0.036690 | $370.40 | $361.14 | ~$13.25 | -$0.33 (-2.50%) | 32.01% | 27.90% |
| VXUS | 0.154525 | $84.13 | $79.52 | ~$12.29 | -$0.71 (-5.48%) | 29.69% | 25.87% |
| OMCL | 0.106405 | $46.99 | $34.71 | ~$3.69 | **-$1.31 (-26.13%)** | 8.92% | 7.78% |
| XLE | 0.086775 | $57.62 | $61.62 | ~$5.35 | +$0.35 (+6.94%) | 12.92% | 11.26% |
| GEHC | 0.036393 | $68.69 | $83.54 | ~$3.04 | +$0.66 (+21.62%) | 7.35% | 6.40% |
| Cash (deployable, $56.10 total − $50 reserved) | — | — | — | $6.10 | — | — | 12.84% |

Account total value **$97.496** (cash $56.10 + equity $41.396). Pool (the $50 + profits trading book) ≈ **$47.496, a -$2.504 (-5.01%) accumulated loss** — essentially flat vs. 13:36 ET's -5.07% reading (NVDA/VXUS/XLE stayed weak, OMCL/GEHC/VTI ticked up).

## 2. Heat map summary

| Holding | Sector | Risk Level | Key driver |
|---|---|---|---|
| **NVDA** | Semis / AI compute | 🔴 **Critical** | -24.4% below cost, -15.4% through the $180 contingency line; governance/litigation calendar just hardened (Huang agreed tonight to testify within 14 days); valued off a now-confirmed-stale discount rate that understates true WACC |
| **OMCL** | Healthcare IT | 🟠 **High** | Still trading below MS's $35.24 bear-case line (-1.5% under it); -26.1% below cost; same stale-rate problem compounds this valuation too |
| VTI | Broad US equity (tech-heavy look-through) | 🟡 Medium | 32.01% of equity, the book's single largest position; moves with the NVDA/AI-growth factor, not against it; now also carries direct duration risk from the corrected ~5.12% rate |
| XLE | Energy | 🟡 Medium | Commodity/rate cyclicality; giving back yesterday's gain, -2.75% today; Brent input still 12+ days stale |
| VXUS | Int'l ex-US equity | 🟢 Low-Medium | Genuine geographic/FX diversifier; -0.74% today, smallest move of the two index funds |
| GEHC | Healthcare equipment | 🟢 Low | Defensive, best performer today (+2.08%); closest live mechanical trigger on the book (1.10pp from BR's trim line) |
| Cash (deployable $6.10) | — | 🟢 Low | Reserve; the only asset on this book that doesn't reprice on the rate correction above |

## 3. Correlation analysis

NVDA, VTI, and VXUS are again moving together on the day's down-tape (NVDA -2.04%, VXUS -0.74%, VTI actually +0.26% — a mild decoupling today, the first in several sessions, but not enough to call the structural correlation broken). VTI's 32.01% weight remains this book's largest-dollar exposure to the same AI/mega-cap-growth factor NVDA represents directly — the two do not diversify each other, they are two legs of one bet at different sizes. OMCL continues to trade on its own idiosyncratic price-level mechanics (today +2.09% off a sub-floor close) rather than tracking the broader tape. GEHC (+2.08% today, +21.6% since entry) and XLE (-2.75% today, +6.9% since entry, giving back some of its hedge value) remain the only two names behaving independently of the NVDA/OMCL/VTI cluster — and today is a reminder that "independent" doesn't mean "always aligned with each other": GEHC up sharply while XLE drops sharply on the same session is the correlation structure working in the diversifier's favor, but it's two single points of failure, not a robust hedge sleeve.

## 4. Sector concentration

- AI/semis direct: NVDA 9.13% of equity
- AI/mega-tech look-through (via VTI): true AI-adjacent exposure is materially above the headline 9.13% once VTI's 32.01% look-through weighting is counted — the highest VTI look-through reading logged yet
- Broad US equity: 32.01% (VTI)
- Int'l equity: 29.69% (VXUS)
- Energy: 12.92% (XLE)
- Healthcare IT: 8.92% (OMCL)
- Healthcare equipment: 7.35% (GEHC)
- Combined healthcare (OMCL+GEHC): 16.27% — two different sub-sectors, two different risk drivers, reasonable internal diversification
- **NVDA+OMCL combined single-name concentration: 18.06% of equity** — under the 25% trigger, buffer **6.94pp**, essentially unchanged from this morning

**Same caveat as every prior report, still true today:** that 18.06% figure moves because the denominator (total equity) itself moves, not because of any deliberate position-sizing decision. Flagging again because the number is drifting sideways on its own, not because anyone has actively managed it.

## 5. Geographic exposure and currency risk

VXUS (29.69% of equity) remains the book's only deliberate non-US exposure and its only currency risk — unhedged international equity, so USD strength is a direct headwind. Everything else is USD-denominated, US-domiciled. Reasonable geographic diversification for a book this size; currency risk is real but un-hedgeable with this toolbox and small in absolute dollar terms (~$12.29 exposed).

## 6. Interest rate sensitivity — **revised this run on the corrected rate input**

- **NVDA: High, and now measurably higher than every prior report has modeled.** MS's WACC build (12.72% base) used a ~4.87% risk-free rate; the actual confirmed 10yr is **5.12% as of 11/16** (FRED-corroborated), ~25bp higher. Applied through MS's own build, that pushes base-case WACC meaningfully above 12.72% and pulls the $159.2/sh base-case fair value down from its already-thin -0.6% gap toward a genuinely overvalued read — on top of a book that's already holding this name through a hardening congressional calendar.
- **VTI: Medium-High**, same correction applies via its mega-cap tech weighting; the now-confirmed higher rate is a direct headwind independent of anything equity-specific.
- **OMCL: Medium-High.** MS's 9.43% base-case WACC is built on the same stale 4.87% Rf; the +37.5% "undervalued" gap compresses once corrected, though not enough on its own to flip the sign given the size of the gap.
- **VXUS: Medium**, blended international exposure, somewhat lower average duration than US mega-cap tech; also subject to the same correction, modestly.
- **XLE: Low-Medium.** Commodity-price-driven first, discount-rate-driven second — least exposed to this correction of the six.
- **GEHC: Low-Medium.** MS's 8.0% base-case WACC is the least rate-sensitive build on the sheet in dollar terms given the position's small size, but the same +25bp applies mechanically.

**Rule 6a's rate-shock pause (blocking new core/NVDA adds pending a confirmed sub-4.75% 10yr close) is not just reinforced by this finding — it was dramatically understating how far away the reopening threshold actually is.** The team has been treating the gap to 4.75% as "~11-12bp away" off a stale 4.87% figure; the real gap, off the confirmed 5.12% print, is **~37bp**, more than three times wider than every other desk's current working number. **This desk's concrete ask: every analyst carrying the "~4.87%" figure forward should switch to 5.12% (dated 11/16, FRED-sourced, multi-corroborated) starting next run** — this is not noise or a one-off stray data point like the 5.21%/10-14 reading GS correctly discarded this morning; it is dated, recent, and agrees across four independent sources.

## 7. Recession stress test (illustrative drawdown from current levels)

| Holding | Estimated recession drawdown | Rationale |
|---|---|---|
| NVDA | -35% to -45% | High-beta, capex-cycle-dependent; already carrying a governance/litigation discount a recession would widen; now also carrying a higher true discount rate than modeled |
| OMCL | -25% to -35% | Small-cap-adjacent, hospital-capex-dependent (health systems cut capital spend first in a downturn) |
| VTI | -25% to -30% | Broad market beta, tech-heavy tilt amplifies the downside; higher-for-longer rates compound a recession scenario rather than offsetting it |
| VXUS | -20% to -28% | International cyclicals plus FX drag if USD rallies in a flight-to-safety |
| XLE | -20% to -30% | Energy demand is pro-cyclical; a recession typically hits oil demand and prices together |
| GEHC | -10% to -18% | Defensive healthcare equipment holds up best of the six in a downturn |

Blended portfolio estimate: roughly **-25% to -32%** on the equity sleeve in a genuine recession scenario — unchanged in magnitude from prior reports, but now sitting on top of a pool already at a -5.01% accumulated loss, and on top of fair-value estimates across four of six positions that likely need to be marked down once the rate-input correction above propagates through MS's models.

## 8. Liquidity risk

- **NVDA, VTI, VXUS, XLE: 🟢 extremely liquid** — mega-cap/ETF, immaterial slippage risk at this book's size.
- **GEHC: 🟢 Liquid** — large-cap, ample daily volume relative to this book's ~$3 position.
- **OMCL: 🟠 Moderate** — single-name, smaller-cap healthcare IT; thinner liquidity than any other holding, though still not a practical constraint at this book's sub-$4 position size. The liquidity risk here remains reputational/process (a thinly-traded name moving on illiquidity-driven noise) more than execution risk.

## 9. Single stock risk and position sizing recommendations

- **NVDA (9.13% of equity, 18.06% combined with OMCL):** Sizing itself is still inside both the 18-20%-of-equity mandatory-review line and the 25% combined-concentration hard trigger, with a 6.94pp buffer. But the risk underneath that sizing just got worse on two independent axes this run: (1) the governance/litigation calendar hardened — Huang's agreement tonight to testify within 14 days converts an open-ended threat into a dated one; (2) the valuation anchor justifying "hold, don't trim" (MS's fresh "roughly fairly valued" call) was built on a discount rate this desk now has good reason to believe is too low. **Unchanged recommendation, sharpened: the 20%-combined early-warning line proposed last report stands; added this run — the team should not treat MS's current NVDA fair-value number as settled until it's re-run with the corrected ~5.12% Rf.**
- **OMCL (8.92% of equity):** Position sizing remains fine (below the 10% pool target, DCA-gated). Same rate-correction caveat applies to its +37.5% "undervalued" read as to NVDA's — directionally the gap likely narrows, not flips, given its size, but it should be re-run, not assumed.
- **GEHC (7.35% of equity, 6.40% of pool):** Sits 1.10pp from BR's own 7.5%/+3.5pp trim trigger — the single closest live mechanical trigger on the book, essentially unchanged from the last several runs. No disagreement with BR's pre-committed trim-to-6%-midpoint action; recommend it fire without delay if/when the line is crossed.
- **VTI (32.01% of equity):** A new high-water mark for this book's largest position and its largest single AI-factor look-through exposure. This desk continues to recommend BR's standing "next incremental dollar routes to VXUS, not pro-rata" policy stay in force indefinitely, specifically because every report this week keeps showing this number drift up on its own, with nobody actively deciding it should.

## 10. Tail risk scenarios with probability estimates

| Scenario | Rough probability (next 30 days) | Estimated impact |
|---|---|---|
| NVDA governance/litigation escalation converts from "reported" to "confirmed" (any DOJ-probe thread, the SEC rumor, or the securities suit), compounded by Huang's now-agreed congressional testimony within 14 days | ~30-40% (raised this run — the testimony is no longer hypothetical, it is agreed and dated) | NVDA -15% to -30% single-session; a second, sharper leg on top of an already-faded post-print reaction |
| Fed delivers a 50bp December hike, or the real 10yr (now confirmed 5.12%, not 4.87%) keeps climbing toward/past its 11/13 intraday high of 5.174% | ~20-25% (raised — the rate is already materially higher than the team has been modeling, and the trend this week has been up, not down) | Broad de-rating of long-duration growth (NVDA, VTI) and small/mid-cap financing-sensitive names (OMCL); -5% to -12% portfolio-wide shock, wider than previously estimated given the corrected starting point |
| MS's/the team's fair-value estimates get re-run with the corrected ~5.12% Rf and NVDA/OMCL/XLE/GEHC all come back materially cheaper on paper than this week's reports show | ~70-80% (near-certain once someone does the rebuild — this is a mechanical, not a speculative, risk) | No price impact by itself (this is a model-risk finding, not a market-risk one), but it would reverse this week's "NVDA is fairly valued" narrative and could change sizing/hold recommendations across multiple desks |
| OMCL structural break finally materializes (a guidance cut, lost contract, or margin/bookings deterioration — none found in ten-plus checks to date) | ~5-10% (base rate stays low, still shouldn't be treated as "it'll never happen") | OMCL -20% to -35% on confirmation; would also force an immediate DCA-gate and sizing re-read |
| GEHC/XLE-style defensive/hedge sleeve underperforms simultaneously with the core cluster | ~10% | Removes the book's only two genuinely uncorrelated return streams at the worst possible time |

## 11. Hedging strategies to reduce the top 3 risks (equities-only toolbox — no options)

**Top 3 risks, ranked:** (1) the now-confirmed stale discount-rate input inflating every DCF fair value on the book; (2) NVDA's hardening, now-dated governance/litigation calendar; (3) the correlated NVDA/OMCL/VTI AI-growth-factor cluster.

1. **Against the rate-input problem:** there is no market hedge for a modeling error — the fix is process, not capital allocation. This desk's concrete ask: every analyst switch the working risk-free-rate figure from ~4.87% to the confirmed **5.12% (11/16, FRED-sourced, four-way corroborated)** starting next run, and MS specifically re-run the NVDA/OMCL/XLE/GEHC base cases with the corrected input before the team treats any of this week's "fairly valued" or "undervalued" verdicts as settled.
2. **Against the hardening governance/litigation calendar:** still no equities-only hedge exists beyond position-size discipline. Concrete ask, unchanged from last report but now more urgent given Huang's agreed testimony date: tighten the next mandatory-review trigger for NVDA+OMCL combined from 25% to **20% of equity**, and pre-commit that Huang's testimony actually occurring (not just being scheduled) independently fires a full re-read regardless of the scheduled cadence.
3. **Against the correlated cluster:** keep routing every incremental core dollar to VXUS over VTI (BR's standing policy) to slow the look-through tech drift that hit a new high this run. The $6.10 deployable cash remains the most direct, zero-duration hedge available against the now-confirmed-higher rate environment — it is the one asset on this book that does not reprice on the correction described above.

## 12. Rebalancing suggestions with allocation percentages

This desk defers allocation authority to BR by design and has no disagreement with BR's current targets: **VTI 26% / VXUS 27% / NVDA 7% / XLE 12% / GEHC 4% (±5pp band, trim at 7.5%) / OMCL 10% (DCA-gated) / Cash 14%.** This desk's only addition, unchanged from last report: **if/when GEHC's trim fires, route the proceeds to cash or to the uncorrelated XLE/GEHC-style sleeve, explicitly not toward NVDA or OMCL.**

---

## Disagreements flagged

- **Partial disagreement with MS's own freshest NVDA verdict ("roughly fairly valued," -0.6% gap).** Not a disagreement with the cash-flow rebuild itself — MS's work on the actual Q3 print was sound and primary-sourced. The disagreement is narrower: that verdict was computed on a risk-free-rate input this desk now has strong, multi-sourced evidence is ~25bp too low, which means the true base-case fair value is very likely lower than $159.2/sh. Flagging for MS to re-run, not asserting a specific corrected number myself (that rebuild is MS's domain).
- **No disagreement with BR's hold-the-line instructions on NVDA, OMCL, or GEHC.** This desk's additions (the rate-input correction, a tighter 20%-combined early-warning trigger, a testimony-occurring trigger) are process proposals for the team, not an override of BR's sizing authority.
- **No disagreement with GS's framing of the congressional calendar hardening** — this desk's addition is the specific new fact (Huang's Wednesday-night agreement to testify within 14 days) and translating it into a probability-weighted tail-risk line item.

---

*Prepared by the BW Risk Assessment persona. Figures are this run's own live Robinhood `get_portfolio`/`get_equity_positions`/`get_equity_quotes` pull on account 424593861 (~18:41 UTC / ~13:41 ET). Rate/news findings from this run's own dedicated WebSearches (10-year Treasury: FRED, Forbes, CNBC, Mortgage News Daily, all dated 11/16/2026; Nvidia/Huang congressional briefing: letsdatascience.com, fourweekmba.com, dated 11/18/2026; Brent crude and OMCL-specific news both reproduced the same chronic dateline wall every desk has hit for weeks — no fresher figures adopted). Cross-referenced against analysts/ms-dcf-valuation.md (11/18 ~09:16 ET), analysts/jpm-earnings-analyzer.md (11/18 ~08:17 ET), analysts/gs-stock-screener.md (11/18 ~12:4x ET), analysts/br-portfolio-builder.md (11/17 ~15:12 ET, freshest on file), and trading-experiment/state.md.*
