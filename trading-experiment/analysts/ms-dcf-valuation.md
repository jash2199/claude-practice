# MS DCF Valuation — Investment Banking Valuation Memo

**Date: 2026-11-16 (Monday), ~09:17 ET** (14:17 UTC scheduler fire time, converted; ET = UTC-5). **This is a targeted update, not a full rebuild.** NVDA reports Q3 FY2027 tomorrow (11/17 AMC) — per the standing NVDA earnings contingency plan v2 / rule 21, the mandatory full ground-up rebuild (fresh revenue/margin schedule against the actual print) happens the run after that print, not pre-emptively today. This run: (1) rolls all prices to the freshest internal read, (2) adopts the team's now cross-desk-reconciled 10-year Treasury input (~4.87%, down from the 5.10% this desk had been carrying since 10/15) and recomputes NVDA's base-case WACC/fair value on that single changed input, and (3) surfaces one genuinely new fact on OMCL that resolves GS's open question from Monday morning — see §2.

*Persona: VP-level valuation coverage for the "Claude Robinhood Trader" experiment. Coverage this run: the six current holdings (NVDA, VTI, VXUS, OMCL, XLE, GEHC), plus GS's current #1-ranked screener pick — which is **OMCL**, already a holding and already covered below, so no separate unheld build is required this run. AVGO (GS's #6, a standing not-yet-rule-6-ready idea) gets a one-line carryforward for continuity.*

---

## Verdicts (top line) — read this first

| Ticker | Current Price | Fair Value | Gap | Verdict |
|---|---|---|---|---|
| **NVDA** (held) | **$157.0618** (state.md 11/16 ~08:4x ET pre-market pull, -3.56% vs Friday's 11/13 official close $162.85) | **Base $122.7/sh** (recomputed this run at WACC 12.72%, g 3.0% — Rf update only; cash-flow schedule unchanged pending tomorrow's print) \| Bull $208.7/sh \| Bear $57.5/sh (both carried forward, not re-pointed this run) | **Base: -21.9% (overvalued)**; Bull: +32.9% (undervalued); Bear: -63.4% (overvalued) | **VERDICT: OVERVALUED at base case, modestly less so than 11/13's -27.3% read — the gap narrowed because the lower risk-free rate raised fair value (~+3.2%) by more than the pre-market price drop (~-4%) widened it.** No change to the underlying "overvalued at base, undervalued only if the transition goes smoothly" read. **Full rebuild is the mandatory next step after tomorrow's print**, not today. |
| **OMCL** (held) | **$35.03** (Friday 11/13 official close — today's pre-market quote is a ~17%-wide-spread anomaly per state.md, not used) | **$46.75/sh base** (unchanged, 10/29 rebuild; bull $55.27, bear $35.24; WACC 9.43%/8.43%/10.43%) | **+33.5%** base | **UNDERVALUED at base — but flagging a genuinely new fact: Friday's official close ($35.03) was ALSO below the $35.24 bear floor, confirming a second consecutive sub-floor close (11/12 close $34.95, 11/13 close $35.03).** This answers GS's 11/16 08:55 ET open question directly. Per this desk's own standing rule (stated in the 11/13 report), a *sustained close* below the line — not an intraday graze — is this sheet's first genuine bear-case confirmation and warrants NVDA-escalation-level urgency. See §2. |
| **XLE** (held) | **$64.5348** (state.md 11/16 pre-market) | **$58.5/sh base** (unchanged, 11/6 oil-attribution rebuild; now 10 days stale — no fresher Brent print found again this run) | **-9.35%** | **OVERVALUED at base, essentially flat vs. 11/13's -9.59%.** Still this sheet's single most overdue rebuild. |
| **GEHC** (held) | **$83.30** (state.md 11/16 pre-market) | **$75.0/sh base** (unchanged, 11/2 10-Q correction) | **-9.97%** | **OVERVALUED at base, modestly wider than 11/13's -8.76% on price drift alone.** One non-material item found: GE HealthCare named Neal Sandy President/CEO of its Patient Care Solutions segment effective 11/16 — an internal leadership appointment, not a guidance, backlog, or balance-sheet fact; does not move the DCF. |
| **VTI** | $368.7348 | N/A | N/A | **HOLD BY CONSTRUCTION** (diversified index fund) |
| **VXUS** | $81.75 | N/A | N/A | **HOLD BY CONSTRUCTION** (diversified index fund) |
| **AVGO** (unheld — GS's #6, standing not-yet-rule-6-ready idea, carryforward) | ~$293.69-301.58 (GS's 11/5-11/6 dated cluster; GS flagged an unconfirmed, undated ~$364.52 figure this run that this desk does not adopt without a clean date) | **$365.5/sh base** (11/11 first build, unchanged) | ~+21-24% at the confirmed reference | **No rebuild this run — carried forward.** GS's actual rank-1 pick is OMCL, already held and covered above; AVGO remains a secondary idea, still not rule-6 sizing-ready. |

**Bottom line for the trader:**

1. **The most actionable new fact this run is on OMCL, not NVDA: Friday's official close ($35.03) was the second consecutive session to close below MS's $35.24 bear-case floor (after 11/12's $34.95).** This desk's own 11/13 report named exactly this condition — a *sustained* close below the line, not a single graze — as the threshold for treating OMCL with the same urgency as NVDA's governance disqualifier. That threshold has now been met on the data this desk can see. This desk does not place trades or make the trim call (that is BW's/BR's domain per rule 14), but flags this explicitly so the team's next structural-break re-read treats it as confirmed, not still-open.
2. **NVDA: no new fundamental work this run by design — the mandatory full rebuild is the run immediately after tomorrow's 11/17 print**, per the standing contingency plan. This run only updates the single WACC input the team has been asking this desk to reconcile for five-plus reports running: the 10-year Treasury. This desk's own fresh search this run corroborates BR's/GS's/BW's standing ~4.85-4.90% read (YCharts/Advisor Perspectives 4.86% as of 11/6, TradingEconomics ~4.85-4.88% through 11/10) over the 5.10%, 10/15-dated figure this desk had been carrying — **adopting ~4.87% as the new risk-free input going forward.** On that change alone, NVDA's base-case fair value rises from $118.9 to $122.7/sh; bull/bear are not re-pointed this run (both would move modestly higher on the same logic, but redoing three full scenario PVs the day before a rebuild that supersedes them anyway is not worth the churn).
3. **Separately — not adopted, but flagged for the post-print rebuild:** JPM's and GS's freshest reads (11/16, 11/13) now put Street consensus for Q3 at ~$108.8B revenue / $2.47 EPS, the top of NVDA's own guided range — materially above the ~$104B/$2.35 figure this desk used as its FY2027 base-year anchor in the 11/13 rebuild. **This is the single input decision that matters most for tomorrow's rebuild**, not WACC: if the higher, more recent consensus is closer to the actual print, FY2027's base-year anchor moves up, and the base-case fair value likely moves up with it (holding margin/WACC assumptions fixed). This desk will resolve it against the actual reported number, not against a Street estimate, once the print lands — no reason to guess one day early.
4. **XLE remains the most overdue rebuild on this sheet — now 10 days stale relative to Brent**, which this desk again could not refresh (WebSearch found a wide, undated $71-92/bbl spread with no reliable November print). Recommend prioritizing this ahead of GEHC next cycle.
5. **GEHC is a flat price-roll** with one cosmetic leadership item (a segment-level CEO appointment, not company-wide, not a fundamental fact) — no DCF impact.
6. **This desk does not place trades.** Sizing, DCA-gate mechanics, and the OMCL trim decision in light of §2's finding remain BR's/BW's domain.

No trade recommended off this report (research-only mandate, as always).

---

## 1. NVDA — WACC input update only (Rf reconciled); full rebuild deferred to post-print

**Why not a full rebuild today:** the 11/13 report already did the ground-up job (fresh 5yr revenue/margin schedule, full three-scenario DCF — see that report in git history for the complete build). Nothing has changed on the fundamentals side since then, and the one thing that *will* change materially — the FY2027 base-year revenue anchor — reports in roughly 24-30 hours. Rebuilding the cash-flow schedule today on the same Street-estimate inputs the 11/13 report already used would add no information; rebuilding it on a guess at tomorrow's actual print would be worse than waiting one cycle. Per the contingency plan, the next run after the print is the mandatory decision point.

**What changed this run: the risk-free rate.** This desk's own fresh WebSearch today corroborates what BR, GS, and BW have each independently flagged for five-plus consecutive reports — the 10-year Treasury has been trading in a ~4.85-4.90% band since early November (YCharts/Advisor Perspectives: 4.86% as of 11/6; TradingEconomics: ~4.85% on 11/9, ~4.88% on 11/10), not the 5.10% (10/15-dated) this desk had been carrying forward unchallenged. **Adopting ~4.87% as the new risk-free input.**

Recomputed base-case WACC: cost of equity = 4.87% + 2.15 × 3.0% = **11.32%** (down from 11.55%), + the base-case governance/transition premium of 140bp = **12.72% base WACC** (down from 13.00%). Using the existing base-case sensitivity table (§1e of the 11/13 build, which holds base-case cash flows fixed and varies WACC/g — exactly the tool needed here), interpolating between the 12.0%/g3.0% ($132.4) and 13.0%/g3.0% ($118.9) grid points at WACC 12.72%:

**Base-case fair value ≈ $118.9 + 0.28 × ($132.4 − $118.9) ≈ $122.7/sh.**

Bull (WACC 11.75% → 11.47% on the same Rf shift) and Bear (WACC 14.6% → 14.32%) are **not re-pointed this run** — both would move modestly higher (a couple of dollars, by the same logic), but this desk is not redoing two full multi-year PV schedules for scenarios that get rebuilt wholesale in ~1-2 cycles anyway. Carried forward unchanged: Bull $208.7/sh, Bear $57.5/sh.

**Implied read against price:** at $157.0618, base case is **-21.9%** (overvalued, narrower than 11/13's -27.3% because fair value rose more than price fell), bull **+32.9%** (undervalued), bear **-63.4%** (overvalued). Directionally identical conclusion to 11/13: overvalued at base, undervalued only if the transition goes smoothly.

**What this run deliberately does not resolve, and why:** the Street-consensus-vs-company-guidance gap on Q3 revenue ($108.8B per JPM's/GS's freshest reads vs. the $104B this desk's 11/13 build used) is real and matters more than the WACC tweak above, but it is exactly the kind of input this desk should resolve against the *actual* print, not guess at the day before. Flagged explicitly as the #1 input question for the post-print rebuild in the Bottom Line above.

**Unchanged from 11/13 (not revisited this run):** the 5-year revenue/margin/FCF schedule (§1b of the prior build), net cash (~$25B) and shares outstanding (~24.3B) desk estimates, and the governance/transition WACC premiums themselves (+15bp bull / +140bp base / +300bp bear). All remain the weakest and most consequential assumptions in the model and will be the first things re-examined post-print.

**Verdict: OVERVALUED at base case ($122.7/sh vs. $157.06, -21.9%).** Not a sell call. This desk does not place trades; sizing and timing remain BR's domain.

---

## 2. OMCL — fundamentals unchanged; bear-case floor now confirmed breached for a second consecutive session

**Fundamentals unchanged since the 10/29 post-print rebuild** (base $46.75, bull $55.27, bear $35.24; WACC 9.43%/8.43%/10.43%). No fresher company-specific data found this run — WebSearch again surfaces only the already-known 10/29 earnings beat-and-raise and a stale 11/4 price reference ($39.41, clearly pre-dating the current ~$35 level, not adopted).

**The new fact is on price, not fundamentals, and it matters.** GS's 11/16 08:55 ET report flagged as its #2 open item: "whether Friday's close extended the 11/12 breach to a second consecutive sub-$35.24 session... unresolved as of this report." State.md's own 11/16 pre-market run note already carries the answer, sourced to a direct Robinhood read of Friday's official close: **$35.03 — below the $35.24 floor by $0.21 (-0.60%).** Combined with 11/12's already-confirmed sub-floor close ($34.95), that is **two consecutive official closes below the bear-case line**, not the single penny-level intraday graze this desk and the team repeatedly (and correctly) declined to treat as a structural break all last week.

| Scenario | WACC | Fair Value/sh | Price (11/13 official close) | Gap |
|---|---|---|---|---|
| Bull | 8.43% | $55.27 | $35.03 | **+57.8%** |
| **Base** | **9.43%** | **$46.75** | **$35.03** | **+33.5%** |
| Bear | 10.43% | $35.24 | $35.03 | price is **$0.21 (-0.60%) below** the bear-case floor — **second consecutive session below it** |

**Verdict: UNDERVALUED at base case. But this desk's own standing rule from the 11/13 report — "a sustained session *close* below $35.24, not another intraday graze... would be this sheet's first genuine bear-case confirmation and should be treated with NVDA-escalation-level urgency" — has now been met on the available data.** This desk does not make the structural-break-vs-price-level call (that remains BW's/BR's domain per rule 14), and notes no OMCL-specific fundamental deterioration (guidance cut, lost contract, solvency issue) has been found by any desk this week — the break, if there is one, is evidenced by sustained price action against the floor, not yet by a company-specific fact. Flagging this explicitly and clearly so the next structural-break re-read treats the second-close question as resolved (yes), not still open.

---

## 3. XLE — price-roll, now 10 days overdue for a rebuild

**No fresher Brent print found this run** — WebSearch returned only a wide, undated spot-price spread ($71-92/bbl across different aggregators) and stale March/May/June references, nothing reliably dated to November. The 11/6 rebuild (Brent ~$98.77, ×1.4x FCF elasticity estimate) stands unchanged: base $58.5, bull $66.3, bear $47.0, WACC ~11.0%.

| Scenario | Fair Value/sh (11/6 build) | Price | Gap |
|---|---|---|---|
| Bull | $66.3 | $64.5348 | **+2.74%** |
| **Base** | **$58.5** | **$64.5348** | **-9.35%** (essentially flat vs. -9.59% on 11/13) |
| Bear | $47.0 | $64.5348 | **-27.17%** |

**Verdict: OVERVALUED at base case, essentially unchanged — purely on price action, no new fundamental input.** This remains the single most overdue rebuild on this sheet (10 days since the last Brent-linked refresh). Recommend prioritizing this ahead of GEHC next cycle.

---

## 4. GEHC — flat price-roll; one non-material leadership item

**Fundamentals and fair value unchanged since the 11/2 equity-bridge correction** (base $75.0, bull $98.5, bear $44.4; WACC 8.0%/7.0%/9.0%). The only new item this run's WebSearch surfaced: GE HealthCare named **Neal Sandy President and CEO of its Patient Care Solutions segment, effective 11/16** — a segment-level leadership appointment, not a company-wide, guidance, backlog, or balance-sheet fact. Does not move this desk's DCF.

| Scenario | Fair Value/sh | Price | Gap |
|---|---|---|---|
| Bull | $98.5 | $83.30 | **+18.25%** |
| **Base** | **$75.0** | **$83.30** | **-9.97%** (modestly wider than -8.76% on 11/13, on price drift alone) |
| Bear | $44.4 | $83.30 | **-46.70%** |

**Verdict: OVERVALUED at base case, modestly more so than 11/13 on price action alone.** BR's 7.5%-pool drift-trim trigger remains ~1.25pp away per the team's last reading on file; the trim decision itself remains BR's domain.

---

## 5. AVGO — carryforward, no rebuild this run

First built 11/11 (base $365.5/sh, WACC 10.5%, g 4.0%; see that report in git history for the full build). No fresher company data found this run to justify a rebuild. GS's 11/16 report flags an unconfirmed, undated ~$364.52 figure (tied to a Marvell/Google custom-silicon competitive-concern story) that, if real, would narrow this gap toward roughly fairly-valued — this desk does not adopt it without a clean date, consistent with GS's own treatment. GS's actual #1-ranked pick remains OMCL — already a holding, already covered above — so AVGO stays a secondary, not-yet-vetted idea per this persona's coverage rule.

---

## Rate and oil input note

- **10-year Treasury (WACC input): updated this run to ~4.87%** (down from the 5.10%, 10/15-dated figure this desk had carried for five-plus reports). This desk's own fresh WebSearch today corroborates the cross-desk ~4.85-4.90% range reported since early November (YCharts/Advisor Perspectives 4.86% as of 11/6; TradingEconomics ~4.85-4.88% through 11/10) — resolving the standing disagreement BR/GS/BW have each flagged repeatedly. Applied to NVDA's base-case WACC this run (§1); will be the default Rf for OMCL/XLE/GEHC at each of their next full rebuilds rather than retrofitted into sheets built on their own, separately-dated assumptions.
- **Brent crude (XLE input):** dedicated WebSearch this run again found nothing reliably dated to November — only a wide, undated spot spread ($71-92/bbl) and stale March/May/June datapoints. **Held at the 11/6 rebuild's ~$98.77 reference**, unchanged, now 10 days stale.

---

## Explicit read on trader's current positions (all six held) + AVGO (unheld)

| Position | Avg Cost | Current Price | Unrealized | MS Verdict |
|---|---|---|---|---|
| NVDA | $201.40 | $157.0618 | -21.98% | **WACC-input update only this run (Rf → 4.87%) — base case rises to $122.7/sh but overvaluation persists (-21.9%) as price fell further pre-market. Full rebuild is the mandatory next step after tomorrow's 11/17 print.** See §1. |
| VTI | $370.40 | $368.7348 | -0.45% | Hold by construction |
| VXUS | $84.13 | $81.75 | -2.83% | Hold by construction |
| OMCL | $46.99 | $35.03 | -25.45% | Undervalued at base (+33.5%), **but bear-case floor now confirmed breached on a second consecutive official close — this desk's own escalation threshold has been met.** See §2. |
| XLE | $57.62 | $64.5348 | +12.00% | Overvalued at base (-9.35%), flat; most overdue rebuild on the sheet (10 days) |
| GEHC | $68.69 | $83.30 | +21.28% | Overvalued at base (-9.97%), modestly wider on price drift; one non-material segment-CEO item, no DCF impact |
| **AVGO (unheld)** | n/a | ~$293.69-301.58 (GS reference) | n/a | Carryforward from 11/11 first build; not rule-6 sizing-ready |

This desk does not place trades or touch Robinhood — research only, per mandate. Sizing, DCA-gate mechanics, and any overweight/trim case remain BR's domain; structural-break risk framing remains BW's. **This desk's two explicit action items this run: (1) OMCL's sustained-close bear-floor breach (§2) answers GS's open question and should be treated as confirmed, not still-open, at the team's next structural-break re-read; (2) NVDA's Street-consensus-vs-guidance gap ($108.8B vs. this desk's $104B anchor) is the single input decision that matters most for the post-print rebuild — resolve it against the actual number, not a day-early guess.**

---

## Sources

- NVDA price: state.md's 2026-11-16 ~08:4x ET pre-market Robinhood pull ($157.0618) — the freshest figure this desk has direct access to.
- 10-year Treasury: this run's WebSearch — [Treasury Yields Snapshot: November 6, 2026](https://www.advisorperspectives.com/dshort/updates/2026/11/06/treasury-yields-snapshot-november-6-2026) (4.86%, YCharts/Advisor Perspectives), [US 10-Year Yield Steady Ahead of Inflation Data](https://tradingeconomics.com/united-states/government-bond-yield/news/599802) and related TradingEconomics items (~4.85% on 11/9, ~4.88% on 11/10). Reconciles the standing BR/GS/BW ~4.86% flag this desk had not yet adopted; **now adopted at ~4.87%.**
- Brent crude: this run's WebSearch found only an undated, wide ($71-92/bbl) spot-price spread across aggregators (commodity.com, oilpriceapi.com, barchart.com) and stale March/May/June 2026 datapoints — nothing reliably dated to November; not adopted, carried forward from the 11/6 oil-attribution rebuild.
- OMCL: this run's WebSearch (trade-ideas.com, marketbeat.com, chartmill.com, panabee.com) confirms the 10/29 beat-and-raise and FY26 guidance raise already on file; no fresher structural fact found. The sustained-close confirmation (§2) is sourced to state.md's own 2026-11-16 pre-market run note, which carries Friday 11/13's official close ($35.03) as a direct Robinhood-verified figure, cross-checked against GS's 2026-11-16 ~08:55 ET report (analysts/gs-stock-screener.md) flagging the same question as open.
- GEHC: this run's WebSearch (foxbusiness.com, zacks.com, gehealthcare.com) — Q3 beat-and-raise (10/28) already known; the Neal Sandy PCS-segment CEO appointment (effective 11/16) is new this run, non-material to the DCF.
- NVDA Q3 FY2027 consensus (flagged, not adopted this run): this run's WebSearch — [Nvidia's Q3 Guide Is $108B, 12% Above Q2: What 17 Nov Tests](https://fourweekmba.com/ai-nvidias-q3-guide-is-108b-12-above-q2-what-17-nov-tests/), [Nvidia Q3 earnings preview](https://www.marketpulse.com/markets/nvidia-nvda-q3-earnings-preview-ai-spending-risks-and-governance-concerns-threaten-major-uptrend/) — consensus ~$108.8B revenue/$2.47 EPS (top of the company's own $108B±2% guide), options market pricing an ~±10.6% post-print move as of 11/10. Materially above the ~$104B/$2.35 figure this desk's 11/13 build used; flagged as the key input for the post-print rebuild, not adopted today.
- VTI/VXUS/XLE prices: state.md's 2026-11-16 ~08:4x ET pre-market Robinhood pull.
- Internal: trading-experiment/state.md (2026-11-16 ~08:4x ET snapshot, freshest full live portfolio read on file), analysts/gs-stock-screener.md (2026-11-16 ~08:55 ET, freshest on file, source of the OMCL open question this report resolves), analysts/jpm-earnings-analyzer.md (2026-11-16 ~08:22 ET, freshest on file, NVDA Street-consensus figure), analysts/bw-risk-assessment.md (2026-11-13 ~13:42 ET, freshest on file for that desk), analysts/br-portfolio-builder.md (2026-11-13 ~15:15 ET, freshest on file for that desk); this desk's own 11/13 NVDA full rebuild (superseded in part by §1's WACC-input update this run), 11/6 XLE oil-attribution rebuild, 10/29 OMCL rebuild, 11/2 GEHC equity-bridge correction, and 11/11 AVGO first build (all git history where applicable).
