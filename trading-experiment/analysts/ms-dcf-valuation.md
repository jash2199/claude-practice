# MS DCF Valuation — Investment Banking Valuation Memo

**Date: 2026-11-20 (Friday), ~09:14 ET** (14:13:56 UTC run-fire time, converted; ET = UTC-5 in November). **This is an update cycle, not a full rebuild** — persona file re-read fresh this run, unchanged since last cycle. Coverage per the persona's self-feeding rule: (1) all six current holdings (NVDA, VTI, VXUS, OMCL, XLE, GEHC); (2) GS's current #1-ranked pick is **NVDA** — already a holding, already covered, so no separate unheld build is required this run (AVGO, GS's #6, is not GS's #1 — carryforward only, consistent with the last several cycles).

**Two substantive items this run:** (1) NVDA's premarket price has fallen sharply (-3.79% vs. 11/19's close, now $140.44) with **zero fundamentals change found** — four independent WebSearches this run and every other desk's fresh report confirm nothing dated 11/20 beyond the already-known 11/12 governance story. A price move this size with no new cash-flow fact is exactly the case this model exists to price through, and it moves the base-case verdict from "roughly fairly valued" to **undervalued**. (2) XLE gets its first real update in 14 days: a dated Brent print (week ending 11/13, $95.84/bbl) was finally located, replacing a pure price-roll against stale 11/6 data with an actual, if partial, Brent-linked refresh.

---

## Verdicts (top line) — read this first

| Ticker | Current Price | Fair Value | Gap | Verdict |
|---|---|---|---|---|
| **NVDA** (held) | **$140.44** (state.md 11/20 ~08:37 ET premarket, -3.79% vs. 11/19's $145.98 close; this desk has no direct Robinhood access, defers to the trader's freshest internal pull per rule 4) | **Base $155.2/sh** (unchanged — WACC 12.97% on 5.12% Rf, no fundamentals change this run) \| Bull ~$294.5/sh \| Bear ~$56.1/sh | **Base: +10.5%**; Bull: +109.7%; Bear: -60.1% | **VERDICT: UNDERVALUED at base case** — a reversal from 11/19's "roughly fairly valued" (+1.7%) driven entirely by the stock's own -8.5% two-day decline, with no change to the cash-flow story. See §1. |
| **OMCL** (held) | **$33.18** (11/19 official close; 11/20 premarket again too illiquid to use per rule 4) | **$46.75/sh base** (unchanged, 10/29 rebuild) \| Bull $55.27 \| Bear $35.24 | **+40.9%** base | **UNDERVALUED at base — and now $2.06 (-5.85%) below MS's own bear-case floor, a third consecutive sub-floor close. This desk explicitly declines to lower the floor on price action alone — see §2 for why.** |
| **XLE** (held) | **$60.47** (trader 11/20 ~08:37 ET premarket pull) | **$56.1/sh base** (refreshed this run off a newly-located dated Brent print, $95.84/bbl week-ending 11/13, vs. the prior build's $98.77) | **-7.2%** | **OVERVALUED at base, modestly wider than 11/19's -5.1% — the first genuine (if partial) refresh in 14 days, not another stale carryforward.** See §3. |
| **GEHC** (held) | **$82.61** (11/20 ~08:37 ET premarket) | **$75.0/sh base** (unchanged, 11/2 build) | **-9.2%** | **OVERVALUED at base, flat.** BR's 7.5%-pool drift-trim trigger (~0.97pp away, the book's narrowest-ever live gate) remains the operative mechanism, not this desk's domain. See §4. |
| **VTI** | $348.58 | N/A | N/A | **HOLD BY CONSTRUCTION** (diversified index fund) |
| **VXUS** | $76.70 | N/A | N/A | **HOLD BY CONSTRUCTION** (diversified index fund) |
| **AVGO** (unheld, carryforward — not GS's #1 this cycle, no rebuild required) | Data-quality flag persists per GS, now an eighth-plus consecutive cycle; last adopted reference $332.10 (10/16 close) | $365.5/sh base (11/11 build, unchanged) | ~+10.0% at the $332.10 reference | **No rebuild this run — GS's actual #1 pick is NVDA (already held, covered above).** |

**Bottom line for the trader:**

1. **NVDA has flipped from "fairly valued" to "undervalued" at base case purely on price, not fundamentals.** $155.2/sh fair value is unchanged from 11/19 (no new cash-flow fact found by this desk or any of the other four this run); the stock's own -3.79% premarket drop (compounding 11/18-11/19's slide) is what moved the gap from +1.7% to +10.5%. This is precisely the distinction rule 5 exists to police: a widening DCF gap driven by price alone is not, by itself, a reason to add — and this desk does not place trades regardless. Rule 6a's pause and rule 20's no-new-cash-to-NVDA instruction both independently block any action here.
2. **OMCL: this desk is declining the standing ask (GS, echoed by BW) to recalibrate the $35.24 bear-case floor down after a third consecutive sub-floor close.** Having actually pulled the Q3 print details this run rather than re-asserting from memory — non-GAAP gross margin +120bps YoY, EBITDA +9%, EPS +14%, FY26 ARR guidance range *tightened with the low end unchanged* (not cut), bookings guidance reiterated — the cash-flow story behind the bear case has, if anything, gotten slightly better since the print, not worse. A stock trading through its own bear-case floor on no incremental bad news is a sentiment/multiple story, not a cash-flow one. Moving a DCF floor to chase a price print the model itself says is unsupported by the fundamentals would be the valuation-discipline failure this persona exists to prevent, mirrored: this book's rule 5 already treats a screener's momentum case skeptically when the DCF disagrees; the same skepticism applies when the market, not a screener, is the one momentum-chasing against the model. Floor held at $35.24.
3. **XLE finally gets a real update instead of a sixth stale carryforward.** A dated Brent print (week-ending 11/13, $95.84/bbl, -2.97% vs. the 11/6 build's $98.77) was located this run via a market-wrap search rather than a single-security snapshot — still not a full ground-up rebuild (the 1.4x FCF elasticity multiple itself is unverified and the WACC/cash-flow schedule otherwise untouched since 11/6), but a genuine incremental refresh. Base fair value moves from $58.5 to $56.1/sh; the overvaluation gap widens modestly from -5.1% to -7.2%.
4. **GEHC is a flat overvaluation read**, gap narrowing slightly (-10.3%→-9.2%) purely on the stock's own pullback. BR's drift-trim trigger is the live mechanism here, not this desk's domain.
5. **This desk does not place trades.** Sizing, DCA-gate mechanics, and trim/hold calls remain BR's/BW's domain.

No trade recommended off this report (research-only mandate, as always).

---

## 1. NVDA — price-driven reversal to undervalued, no fundamentals change

### 1a. Why this is a price-roll, not a rebuild

The 11/19 report closed the risk-free-rate gap (Rf 4.87%→5.12%, WACC 12.72%→12.97%, base fair value $159.2→$155.2/sh) and found no fresh fundamentals news. This run's dedicated WebSearch reproduced the same result: nothing dated 11/20 on NVDA beyond richer secondary-source detail on the already-known 11/12 Huang resignation/Kress-interim-CEO story (a second alleged affair, an FBI-investigation reference attributed to Trump's own 11/9 remarks) — corroborating, not new, consistent with every other desk's 11/19-11/20 findings. **Treasury check:** this desk's own search this run found the 10-year at ~5.12-5.15% as of mid-November (MarketXLS/FRED, TradingEconomics), confirming the 5.12% Rf adopted 11/19 is still the right figure — no further WACC re-pointing needed.

**What changed is only the price.** NVDA has fallen from $152.67 (11/19 premarket, when the last report was written) through $145.98 (11/19 official close) to $140.44 (11/20 premarket), a cumulative -8.0% over roughly 24 hours, on a governance overhang with no new incremental fact this run — the same "well-documented discount, not demand destruction" read every desk has converged on since 11/12.

### 1b. Reading the unchanged fair value against the new price

| Scenario | WACC | Fair Value/sh (unchanged from 11/19) | Price ($140.44, 11/20 premarket) | Gap |
|---|---|---|---|---|
| Bull | 11.72% | $294.5 | $140.44 | **+109.7%** |
| **Base** | **12.97%** | **$155.2** | **$140.44** | **+10.5%** |
| Bear | 14.75% | $56.1 | $140.44 | **-60.1%** |

Buffer to the trader's own $180 contingency-plan-v2 line is now **-21.98%**, a new deepest-ever reading per state.md — a continuation of the already-fired-and-resolved governance disqualifier (f), not a fresh trigger (rule 21 governs).

### 1c. Key assumptions that could break this model (unchanged from 11/19)

1. **Data Center growth deceleration path** — still the single biggest swing factor.
2. **Gross margin trajectory** (Q4 guide compression to 71-72% from 74.9%) — still assumed transient.
3. **FCF conversion/capex intensity** (46-50% FCF margin vs. 60-62% operating margin) — still this model's least-precedented assumption.
4. **Share count** (~24.1B diluted, buyback-driven decline assumed) — unchanged.
5. **Governance/legal-overhang WACC premium** (+140bp base) — if the board probe, the Kistenmacher suit, or the Megaspeed/DOJ-adjacent reporting converts from "reported, unconfirmed" to "confirmed, material," this premium should widen further. This is the one input most likely to move the model next, independent of price.
6. **Risk-free rate** — reconfirmed ~5.12-5.15% this run; stable for now.
7. **China/export policy** — unchanged; guide already assumes zero China Data Center compute revenue.

**Verdict: UNDERVALUED at base case (+10.5%)**, a reversal from 11/19's "roughly fairly valued" driven entirely by price, not cash flow. Not a buy call — this desk does not place trades, and both rule 6a's pause and rule 20's no-new-cash instruction independently block any add regardless of this verdict. Worth flagging to the team precisely because a widening DCF gap with an unchanged fair value is the cleanest possible signal that the market, not the model, has moved.

---

## 2. OMCL — bear-case floor held against a third consecutive sub-floor close

**Fundamentals unchanged since the 10/29 post-print rebuild** (base $46.75, bull $55.27, bear $35.24; WACC 9.43%/8.43%/10.43%). This run, rather than re-asserting that finding from memory, this desk pulled the actual Q3 2026 print details to directly test the standing ask from GS (and, more softly, BW) that the $35.24 bear floor be recalibrated down after repeated sub-floor closes:

- **Non-GAAP gross margin: 45.4%, +120bps YoY** — margin trajectory improving, not deteriorating.
- **Non-GAAP EBITDA: $44.9M, +9% YoY; non-GAAP diluted EPS: $0.58, +14% YoY** — both ahead of the high end of prior guidance per management's own call commentary.
- **Revenue: $307.9M, -1% YoY** — the one soft data point, but it beat the Street's own $305.9M consensus; the business is flat-to-slightly-down on top line while profitability improves, a software-transition/mix story, not a demand collapse.
- **FY26 ARR guidance range tightened, low end unchanged** (not cut); full-year product bookings guidance ($425-560M) reiterated, with bookings "back-end weighted" and the pipeline described by management as having grown since the prior call.

**None of this is a basis to lower the bear case.** A bear-case DCF floor exists to capture a scenario where the cash-flow story actually deteriorates — a guidance cut, a lost contract, margin compression. This quarter delivered the opposite on every metric except a headline revenue number that still beat consensus. The stock closing $2.06 (-5.85%) below its own bear floor for a third straight session, with the underlying print getting incrementally *better*, is evidence of multiple compression or sentiment, not a cash-flow-based case for a lower floor. Recalibrating a bear case downward to match a price the model's own fundamentals don't support would be the mirror image of the screener-momentum-chasing this persona exists to discipline against (rule 5) — this desk declines to do it absent an actual structural fact, and none has been found by any of the five desks across eleven-plus live tests of this line.

| Scenario | WACC | Fair Value/sh | Price (11/19 close) | Gap |
|---|---|---|---|---|
| Bull | 8.43% | $55.27 | $33.18 | **+66.6%** |
| **Base** | **9.43%** | **$46.75** | **$33.18** | **+40.9%** |
| Bear | 10.43% | $35.24 | $33.18 | price is **$2.06 (-5.85%) below** the bear-case floor |

**Key assumptions that could break this model:** a genuine guidance cut (not yet seen — ARR low end held, bookings reiterated), a lost major health-system contract, or an actual margin-deterioration trend (the opposite was reported this quarter). A structural deterioration, not another price-level breach, is what would move this desk's numbers — and nothing in the Q3 print, read in full this run, supplies one.

**Verdict: UNDERVALUED at base case (+40.9%).** Bear-case floor held at $35.24; this desk's own fundamentals check this run argues against, not for, lowering it.

---

## 3. XLE — first genuine Brent-linked refresh in 14 days

The 11/6 build (Brent ~$98.77/bbl, 1.4x FCF elasticity estimate, base $58.5/sh) had gone five consecutive reports without a dateable update, this sheet's most overdue rebuild. This run's WebSearch finally located a dated market-wrap figure: **Brent closed the week ending 11/13 at $95.84/bbl** (a -2.97% move from the 11/6 reference), with a further report noting the week of 11/13-11/20 was "on track for" an additional ~2.5% decline on growing oil-surplus concerns (that second figure is a forward-looking market characterization, not a confirmed close, and is not adopted into the model).

**Applying the standing 1.4x FCF-elasticity estimate to the confirmed -2.97% Brent move** (no other input changed — WACC, cash-flow schedule, and the elasticity multiple itself remain as built 11/6 and are still due a full ground-up re-verification):

| Scenario | Fair Value/sh (11/6 build) | Brent-adjusted (this run, -2.97% × 1.4x ≈ -4.2%) | Price ($60.47, 11/20 premarket) | Gap |
|---|---|---|---|---|
| Bull | $66.3 | **$63.5** | $60.47 | **+5.0%** |
| **Base** | **$58.5** | **$56.1** | **$60.47** | **-7.2%** |
| Bear | $47.0 | **$45.0** | $60.47 | **-25.6%** |

**Key assumptions that could break this model:** the 1.4x Brent-FCF elasticity multiple itself has never been re-validated against an actual realized quarter and is now the weakest link in this build, not the Brent input (which is at least dated this run); a genuine demand-side shock would not be captured by this model as built, per the standing hedge-role rule.

**Verdict: OVERVALUED at base case, modestly wider than 11/19 (-5.1%→-7.2%).** Flagging for the team: this is still a price-roll-plus-commodity-tweak, not the full ground-up rebuild this name has needed for two-plus weeks — recommend prioritizing a true rebuild (re-deriving the elasticity multiple from realized quarterly cash flow vs. realized Brent) next cycle now that a dated oil print exists to anchor it.

---

## 4. GEHC — flat price-roll

**Fundamentals and fair value unchanged since the 11/2 equity-bridge correction** (base $75.0, bull $98.5, bear $44.4; WACC 8.0%/7.0%/9.0%). No new structural fact found this run beyond what's already on file (Q3 results reported 10/28, Neal Sandy PCS-CEO transition effective 11/16 — both already reflected).

| Scenario | Fair Value/sh | Price (11/20 premarket) | Gap |
|---|---|---|---|
| Bull | $98.5 | $82.61 | **+19.2%** |
| **Base** | **$75.0** | **$82.61** | **-9.2%** |
| Bear | $44.4 | $82.61 | **-46.3%** |

**Key assumptions that could break this model:** the 11/2 equity-bridge correction's net-debt and backlog assumptions are now nearly three weeks old; the previously-flagged unidentified acquisition/redemption-date bond-filing item remains unattached to any specific deal.

**Verdict: OVERVALUED at base case, flat.** BR's 7.5%-pool drift-trim trigger (~0.97pp away per state.md, the book's narrowest-ever live mechanical gate, closest reading on record) remains the operative mechanism here; the trim decision itself is BR's domain.

---

## 5. AVGO — carryforward only; not GS's #1 pick, no rebuild required this run

First built 11/11 (base $365.5/sh, WACC 10.5%, g 4.0%; see that report in git history). No work done on this name this run — GS's current #1-ranked pick is NVDA, already a holding and already covered above, so this persona's coverage rule does not require an AVGO build this cycle. Carried forward at the last reference ($332.10, 10/16 close, per GS's own standing data-quality flag, now an eighth-plus consecutive cycle unresolved) for continuity only: implied **~+10.0% undervalued** at that stale reference, not re-verified this run.

---
*Past reports: `git log -p -- trading-experiment/analysts/ms-dcf-valuation.md`. Sources this run (WebSearch, standard mode): FRED/MarketXLS and TradingEconomics 10-year Treasury snapshots (confirmed ~5.12-5.15% mid-November); Yahoo/Barchart/Nasdaq/Finviz/TheWrap/SF Standard NVDA-Huang coverage (nothing dated 11/20, confirms 11/12 story unchanged); Morningstar/Quartr/StockStory/Quiverquant Omnicell Q3 2026 coverage, including the earnings-call transcript summary (margin, EBITDA, EPS, ARR and bookings-guidance detail); nationthailand.com market wrap (Brent $95.84/bbl, week ending 11/13) and EnergyNow (October reference, not adopted). Internal: trading-experiment/state.md (positions/holdings/triggers, freshest 11/20 ~08:37 ET pre-market entry), analysts/gs-stock-screener.md, analysts/bw-risk-assessment.md, analysts/jpm-earnings-analyzer.md, analysts/br-portfolio-builder.md (all read fresh this run for teammate context).*
