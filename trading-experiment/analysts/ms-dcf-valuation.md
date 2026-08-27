# MS DCF Valuation — Investment Banking Valuation Memo
**Date: 2026-08-27 (~10:19 ET, Thursday) — FULL NVDA MODEL REBUILD, first post-print valuation cycle. All other holdings: price-roll update, no rebuild triggered.**

*Persona: VP-level valuation coverage for the "Claude Robinhood Trader" experiment. Coverage this run: (1) NVDA — full rebuild (see below), (2) OMCL, (3) VTI, (4) VXUS, (5) XLE — all five current holdings. GS's current #1 pick (analysts/gs-stock-screener.md, 2026-08-27 report) is again **OMCL**, already in-scope as a holding, so no separate coverage-extension name is required this cycle. GEHC and AVGO (last built 8/21) are not holdings and not GS's #1 pick — carried forward unchanged. Holding prices are taken from state.md's freshest live Robinhood run (2026-08-27 ~09:37 ET) per rule 4. NVDA fundamentals, oil/XOM/CVX, and CDS inputs are WebSearch-sourced this run.*

---

## Verdicts (top line)

| Ticker | Current Price | DCF Fair Value (base case) | Verdict |
|---|---|---|---|
| **NVDA** | $221.705 (8/27, ~09:37 ET, Robinhood-verified; +5.75% vs Wednesday's $209.66 close, post beat-and-raise) | **~$206.2** (WACC 11%, g 3%, base-case growth path — *full model rebuild this cycle, see below*) | **MILDLY OVERVALUED — ~7.0% downside to base case.** Gap has compressed dramatically from 8/26's ~29.0% overvaluation — this is a genuine re-rating driven by real fundamental acceleration, not just a price pop. **First time this desk's bull case (full credit to management's own FY28 guide) prices out flat-to-mildly-undervalued.** |
| **OMCL** | $33.56 (8/27, ~09:37 ET, Robinhood-verified; +0.33% vs Wednesday's close) | ~$53.89 (WACC 9%, g 3%), unchanged | **UNDERVALUED — ~60.6% upside to DCF fair value.** Widest discount on the book, essentially flat vs. 8/26. |
| **VTI** | $379.14 (+0.24%) | N/A — no single-company DCF applies | **NOT APPLICABLE / HOLD BY CONSTRUCTION.** Unchanged. |
| **VXUS** | $87.87 (+0.06%) | N/A — no single-company DCF applies | **NOT APPLICABLE / HOLD BY CONSTRUCTION.** Unchanged. |
| **XLE** | $62.335 (-0.15%) | Composite (oil-adjusted) fair value ≈ $50.7/sh | **OVERVALUED, gap ≈ -18.7%** (essentially flat vs. 8/26's -18.3%; oil stabilized within yesterday's post-drop range). **Do not add.** |

**Bottom line for the trader:** The one real story this cycle is NVDA. Last night's print (revenue +106% YoY, Data Center +117% YoY, non-GAAP EPS $2.22, gross margin steady at 75.0%) plus a Q3 guide of $108.0B and management's own first-ever forward-year guide of ~70% FY28 revenue growth ($673B vs. the ~$570B Street had modeled) is a genuine structural upgrade to the cash-flow base this desk models off of — not sentiment. Rebuilding the 5-year model from scratch on these inputs narrows the base-case overvaluation from ~29% to ~7%, and the bull case (giving full credit to management's own guidance, which Kress explicitly called supply- not demand-constrained) now prices out *above* today's level for the first time in this desk's coverage of the name. This is a valuation call, not a sizing call — see the explicit read on positions below, and note the CDS flag under NVDA's key assumptions, which is independently relevant to the trader's own rule-15 revisit line. OMCL and XLE carry forward with routine price-roll updates; no verdict flips on either.

---

## 1. NVIDIA (NVDA) — FULL 5-YEAR MODEL REBUILD (first rebuild since coverage began; every prior report was a mechanical price-roll on an unchanged model)

### Why a rebuild, not another roll
This desk's own standing rule (rule 9 of the persona coverage note: update briefly unless something material changed) hasn't fired on NVDA in six-plus weeks because nothing in the five build inputs actually moved — until last night. Last night's print changes the two inputs that matter most (the revenue base and the forward growth trajectory) by an order of magnitude larger than any prior weekly price move. A mechanical roll-forward on the old $380B FY2027E / unchanged-growth-path model would silently understate the real fundamental change. Full rebuild, below.

### What actually changed (Q2 FY2027 actuals + Q3 guide + first-ever FY2028 forward guide)
- **Q1 FY27 actual (reported 5/20/26):** revenue $81.6B (record, +85% YoY, beat ~$78.5B consensus).
- **Q2 FY27 actual (reported 8/26/26, last night):** revenue **$96.2B** (+106% YoY, +18% QoQ, beat ~$91-92B consensus by ~4.5%); Data Center **$89.0B** (+117% YoY, *accelerating*, not decelerating); non-GAAP EPS **$2.22** (beat ~6.3%); GAAP/non-GAAP gross margin **75.0%** (in line, no erosion); supply commitments swelled to **$279B** (mostly memory for Vera Rubin — the buildout is contractually locked in, not speculative).
- **Q3 FY27 guide:** **$108.0B ± 2%** — a further ~12-14% QoQ step-up, with management explicitly assuming **zero** China Data Center compute revenue (conservative, not aggressive).
- **FY2028 guide — the actual news:** CFO Kress told investors FY2028 revenue growth will be **~70% YoY**, versus a ~44% average analyst estimate — Kress's own words: guidance reflects **supply constraints, not demand constraints** ("customer forecasts point to growth doubling next year"). On a ~$396B FY2027 base (Street consensus, consistent with $81.6B+$96.2B+$108.0B actuals/guide for three quarters plus a Q4 estimate), 70% growth implies **~$673B FY2028 revenue** — >$100B above the pre-print Street consensus of ~$570B.
- **Credit signal, flagged not modeled**: NVDA's 5-year CDS spread widened **14bps intraday today (8/27) to ~82bps**, the largest single-day widening since the contract began trading (Nov 2025) — this **matches/crosses the trader's own rule-15 revisit line** (a break back above the 7/27 82bps record). This desk treats it as a discount-rate risk input (see WACC discussion and bear case below), not a structural-break call on the business itself — that's the trader's own contingency-plan question to resolve, flagged here because it is independently relevant to sizing.

### Rebuilt 5-year revenue/FCF model — three scenarios, not one point estimate
Per this desk's stance (counterweight to momentum, not a rubber stamp on the loudest number in the room), management's own 70% FY28 guide is treated as this desk's **bull case**, not automatically the base case — it is company-guided (a real input, not a Street guess), but a single quarter of guidance is not five years of certainty, and 70%-type growth rates mechanically cannot compound indefinitely against a >$600B base. Base case gives **partial** credit to the guide; bear case tests what happens if the guide disappoints and the credit-risk signal above is real.

| | FY27E | FY28E | FY29E | FY30E | FY31E |
|---|---|---|---|---|---|
| **Bull (full credit to mgmt's own 70% FY28 guide)** — revenue | $396.0B | $673.0B (+70%) | $888.4B (+32%) | $1,048.3B (+18%) | $1,153.1B (+10%) |
| **Base (partial credit — 50% FY28 growth, faster fade)** — revenue | $396.0B | $594.0B (+50%) | $772.2B (+30%) | $911.2B (+18%) | $1,002.3B (+10%) |
| **Bear (guide disappoints — 35% FY28 growth, margin compression)** — revenue | $396.0B | $534.6B (+35%) | $641.5B (+20%) | $718.5B (+12%) | $776.0B (+8%) |

FCF margin path: **bull/base 54%→52%→50%→49%→48%** (mirrors this desk's prior model — gross margin held at 75.0% last night, so no fresh evidence of margin erosion, but capex/depreciation intensity for the Vera Rubin buildout still argues for gradual compression); **bear 52%→49%→47%→45%→44%** (adds explicit margin pressure from a scenario where custom-silicon competition — AVGO's accelerating ASIC ramp, in-house hyperscaler chips — bites harder than the base case assumes).

WACC: **11% base/bull** (unchanged — CDS still well inside investment-grade territory in absolute terms); **12% bear** (loads the fresh CDS record explicitly into the discount rate rather than ignoring it). Terminal growth 3% base/bull, 2% bear. Net cash ~$50B (cash & marketable securities $62.6B less debt, WebSearch-sourced this run), shares outstanding ~24.4B diluted (WebSearch-sourced this run) held constant across scenarios.

**Sensitivity table — base-case revenue path, WACC × terminal g:**

| WACC \ Terminal g | 2.0% | 3.0% | 4.0% |
|---|---|---|---|
| **10%** | $243.6 | $271.3 | $308.1 |
| **11% (base)** | $214.8 | **$235.5 (bull path, see below)** | $262.2 |
| **12%** | $191.8 | $207.8 | $227.8 |

To avoid conflating the two axes: the table above uses the **bull revenue path** to show pure rate/terminal-growth sensitivity. Re-run at the **base (partial-credit) revenue path**, WACC 11%/g 3%: fair value **$206.2/share**. Re-run at the **bear (guide-disappoints) revenue path**, WACC 12%/g 2% (credit-risk-loaded): fair value **$124.3/share**.

| Scenario | Fair value/share | vs. $221.705 live price |
|---|---|---|
| Bear (guide disappoints, WACC 12%, g 2%) | $124.3 | **-43.9% (sharply overvalued)** |
| Base (partial credit, WACC 11%, g 3%) | **$206.2** | **-7.0% (mildly overvalued)** |
| Bull (full credit to mgmt's own guide, WACC 11%, g 3%) | $235.5 | **+6.2% (mildly undervalued)** |

### Verdict: **MILDLY OVERVALUED on base case, but the gap has compressed by ~22 points in one print — the most consequential single-cycle valuation move on this desk's coverage of NVDA to date**
This is not a verdict flip (base case still says overvalued) but it is the first time this desk's own bull case — built from management's own stated guidance, not a hopeful extrapolation — prices out above the live quote. The base case still argues against chasing here; the bull case argues the stock is not obviously in bubble territory either, if the guided ramp actually delivers. **Hold, no add, no trim from this desk's chair** — consistent with the trader's own rule-15 resolution this morning (no trim, no add). Per state.md's 8/27 ~09:37 ET run, NVDA sits ~12.38% of equity / ~10.90% of pool — comfortably below the 18-20% single-name trigger; NVDA+OMCL combined ~20.41% of equity, below the 25% combined trigger.

### Key assumptions that could break this model
- **Upside break (bull case realized)**: the 70% FY28 guide proves genuinely supply-constrained (i.e., a floor, not a ceiling) as Kress's own framing suggests ("customer forecasts point to growth doubling") — would push fair value toward or above $235+ and make the stock look cheap on a forward basis even after last night's pop.
- **Downside break #1 — margin compression**: AVGO's accelerating custom-silicon ramp (its own DCF-covered name on this desk's sheet, ~$252.6 base case) and hyperscaler in-house chip programs are the single most concrete competitive threat to the 75% gross-margin/high-40s-FCF-margin assumption this model leans on for years 3-5.
- **Downside break #2 — the CDS record, today**: a 14bp intraday widening to a fresh ~82bps record (matching the trader's own rule-15 revisit line) is a genuine, fresh, same-day data point this desk had not modeled as of last night's price-roll. If sustained (not a one-day spike) it argues for the bear-case WACC (12%, credit-risk-loaded) rather than the base case's 11% — a full 1-point WACC move that by itself explains roughly a third of the base-vs-bear valuation gap above. This desk flags it as a live discount-rate risk; whether it also constitutes a rule-15 "trigger" for the trader's own sizing framework is the trader's call, not this desk's.
- **Downside break #3 — law of large numbers**: even the base case's 50%→30%→18%→10% fade implies NVDA adds more absolute revenue in FY28 alone (~$198B) than the entire company generated in FY26. Any scenario where the AI capex cycle merely *plateaus* (not reverses) rather than continuing to accelerate collapses the bull/base case toward the bear case fast.

---

## 2. Omnicell (OMCL) — price update, model unchanged

### What changed since 8/26
Price $33.56 (8/27, ~09:37 ET, Robinhood-verified), +0.33% vs. Wednesday's close — continued no-catalyst drift in the low-to-mid $33s. No NVDA/CRWD-print-adjacent spillover into OMCL's healthcare-tech thesis; next OMCL print remains ~11/4, outside any near-term decision window. No fresh company-specific news this run (per this run's WebSearch sweep).

### Fair value and verdict (model unchanged, gap recomputed vs. today's price)
Base case fair value **$53.89** (WACC 9%, g 3% — sensitivity table unchanged since 7/30) vs. today's $33.56 implies **~60.6% upside**, essentially flat vs. 8/26's ~61.5% (price ticked up slightly). Even the most bearish sell-side PT (Piper Sandler's $45) sits well below this desk's own fair value.

### Verdict: **UNDERVALUED — still the widest discount on the book**
The standing sizing gate (a fresh post-transcript BW risk sign-off) remains the only thing between this book and its widest DCF discount. No change to this desk's model this cycle.

### Key assumptions that could break this model (unchanged)
- **Upside break**: the softer Q3/bookings guide proves conservative rather than a genuine slowdown — would push fair value back toward $56-60+.
- **Downside break**: the multi-week, catalyst-free slide is itself a soft signal (not evidence) that something not yet public is being priced in — still worth a fresh BW look, though this desk's own model finds no fundamental basis for a change.

---

## 3. Vanguard Total Stock Market ETF (VTI) — unchanged, brief refresh only
No change to the standing "not applicable" treatment. $379.14 (+0.24%). This desk has no fair-value view on VTI and defers entirely to BR/BW on sizing and drift-band status (VTI per state.md's 8/27 read ~36.90% of equity / ~32.51% of pool).

## 4. Vanguard Total International Stock ETF (VXUS) — unchanged, brief refresh only
No change to the standing "not applicable" treatment. $87.87 (+0.06%). No fair-value case to add or trim. Defer to BR/BW (~30.53% of equity / ~26.90% of pool per state.md's 8/27 read).

---

## 5. Energy Select Sector SPDR (XLE) — mechanical roll, oil roughly flat vs. yesterday

### What changed since 8/26
Fresh WebSearch this morning: WTI **$81.36** (-1.06% on the day), Brent **$86.93** (-1.03%) — both essentially within yesterday's post-drop range ($80.78-82.36 WTI / $87.41-88.58 Brent), extending a fourth straight down session on reported diplomatic progress in the Middle East, but not a fresh sharp move of the kind that drove 8/26's gap-widening. GS's 8/27 report independently flags OPEC's 2026 demand-forecast cut as a fresh bearish supply/demand (not just geopolitical) data point for the next full rebuild, but that is a forward-looking framing input, not a same-day price shock. XOM/CVX prices this run are WebSearch-sourced and only current through 8/25 close (~$160.24 XOM, ~$199.89 CVX) — this desk's standing rebuild-overdue flag continues to apply; today's figures are carried forward from 8/26 given no fresher print located.

### Fair value and verdict (mechanical roll, effectively unchanged)
With oil roughly flat day-over-day, the oil-adjusted composite fair value carries forward at **~$50.7/sh** (unchanged from 8/26). Applied to XLE's live Robinhood-verified price ($62.335, -0.15%), implied gap is **~-18.7%**, essentially flat vs. 8/26's ~-18.3% (the small widening is purely XLE's own price, not a fresh oil move).

### Verdict: **OVERVALUED — gap essentially unchanged, still meaningfully overvalued**
**No trim (rule 1 — no structural break, XLE is a small half-size position), no add.** This desk repeats its standing flag that the mechanical roll-forward accumulates noise over many cycles and a full ground-up composite rebuild remains overdue — GS's fresh OPEC demand-cut flag is a good candidate catalyst for that next full rebuild, since it would plausibly widen (not narrow) the gap further if incorporated.

### Key assumptions that could break this model
- **Upside break**: an actual *signed* Hormuz reopening deal that sustainably lifts oil back toward or above GS's $80 Q4'26 house forecast would reverse the recent adjustments — though continued diplomatic progress more likely compresses oil further, not lifts it.
- **Downside break**: OPEC's 2026 demand-cut framing, if incorporated into a full rebuild, would widen rather than narrow the standing overvaluation call.

---

## Non-holding names carried forward, unchanged (no rebuild this cycle)
Per the persona mandate, this cycle's required coverage is the five holdings plus GS's current #1 pick (OMCL, already covered above) — no discretionary extension name is added this run. For continuity with the team's standing rule-6 tracking:
- **GEHC** (not held): 8/21 verdict stands — base case ~$70.2/sh (WACC 8.5%, g 3%), **mildly overvalued** at the time. Per state.md's 8/27 ~09:37 ET read, GEHC trades $72.82, ~4.0% above the $70 entry ceiling — still not fired; no rebuild triggered.
- **AVGO** (not held): 8/21 verdict stands — base case ~$252.6/sh (WACC 10%, g 3%), **overvalued ~30.4% downside** at the time. AVGO is directly relevant this cycle as NVDA's own margin-compression downside break (custom-silicon competitive threat) — worth prioritizing an AVGO rebuild ahead of its own 9/2 print, but not done this cycle (rule 6 still unmet regardless — no BW read on file).

## Cross-check with GS screener (analysts/gs-stock-screener.md, 2026-08-27 report)
GS holds OMCL at #1 again, no change to this desk's OMCL treatment. GS's NVDA framing (no disagreement with JPM's "no trim, no add, hold" post-print read) matches this desk's own base-case "hold" conclusion, though GS's report does not carry a DCF view of its own — this desk's rebuild above is the first quantified post-print valuation read on the name. GS's fresh OPEC demand-cut flag for XLE is noted above as the next rebuild's leading candidate input. No disagreement to flag this cycle.

## Explicit read on trader's current positions (all five: NVDA, OMCL, VTI, VXUS, XLE)
**NVDA**: hold, no add, no trim — base-case DCF still shows ~7.0% downside post-rebuild, but the bull case (management's own guidance, full credit) now prices out ~6.2% *above* today's level — the valuation debate has genuinely narrowed, not just the price gap. The fresh CDS record (~82bps, matching the trader's own rule-15 revisit line) is flagged as a live discount-rate risk, independently relevant to the trader's own sizing framework.
**OMCL**: hold, no add from this desk's chair (sizing isn't this desk's call) — DCF discount ~60.6%, widest gap on the book, essentially unchanged.
**VTI / VXUS**: hold, no valuation view — diversified core-sleeve holdings, not DCF calls. Defer to BR/BW on drift-band status.
**XLE**: hold, no trim, no add — do-not-add stance holds; gap essentially unchanged at ~-18.7% this cycle, oil roughly flat day-over-day.
**GEHC / AVGO** *(not holdings)*: verdicts carried forward unchanged from 8/21 — no rebuild this cycle, both remain outside the required coverage set. AVGO flagged above as a useful near-term rebuild candidate given its direct relevance to NVDA's own margin-compression risk case.

---

Sources:
- [NVIDIA Announces Financial Results for Second Quarter Fiscal 2027 (SEC 8-K)](https://www.sec.gov/Archives/edgar/data/0001045810/000104581026000073/q2fy27pr.htm)
- [NVIDIA Q2 2027: $96 Billion Quarter Fueled by 117% Data Center Surge (24/7 Wall St.)](https://247wallst.com/cards/nvidia-q2-2027-earnings-nvda-01m0zw3hstde6rb2mt0kwj6d2c)
- [NVIDIA Announces Financial Results for First Quarter Fiscal 2027 (NVIDIA Newsroom)](https://nvidianews.nvidia.com/news/nvidia-announces-financial-results-for-first-quarter-fiscal-2027)
- [Nvidia gave its first-ever year-ahead forecast — a 70% growth bombshell (Yahoo Finance)](https://finance.yahoo.com/markets/stocks/articles/nvidia-gave-first-ever-ahead-003936289.html)
- [Nvidia earnings takeaways: Huang forecasts 70% fiscal 2028 revenue growth, far above estimates (CNBC)](https://www.cnbc.com/2026/08/26/nvidia-nvda-earnings-report-q2-2027-live-updates.html)
- [Nvidia's 70% growth forecast puts it on track to become tech's No. 2 company by revenue (CNBC)](https://www.cnbc.com/2026/08/26/nvidia-70percent-growth-forecast-puts-it-on-track-to-be-tech-no-2-company.html)
- [NVIDIA stock CDS spreads widen sharply — record intraday move 8/27 (moomoo)](https://www.moomoo.com/community/feed/nvidia-shares-fall-5-cds-spreads-surge-blind-spots-in-116996426170374)
- [Nvidia's credit default swaps surpass July peak (Seeking Alpha)](https://seekingalpha.com/news/4634471-nvidias-credit-default-swaps-surpass-july-peak)
- [Nvidia (NVDA) Shares Outstanding (Diluted Average) (Business Quant)](https://businessquant.com/metrics/nvda/shares-outstanding-diluted-average)
- [Current price of oil as of Aug. 27, 2026 (Fortune)](https://fortune.com/article/price-of-oil-08-27-2026/)
- [Crude Oil - Price - Chart - Historical Data (TradingEconomics)](https://tradingeconomics.com/commodity/crude-oil)
- [Omnicell (OMCL) Is Down 12.5% After Raising 2026 Revenue Outlook And Returning To Profitability (Yahoo Finance UK)](https://uk.finance.yahoo.com/news/omnicell-omcl-down-12-5-031700825.html)
- Internal: trading-experiment/state.md (8/27 ~09:37 ET live Robinhood run notes), analysts/gs-stock-screener.md (8/27 report), analysts/jpm-earnings-analyzer.md (8/27 report, via git history), analysts/bw-risk-assessment.md (8/26 ~14:5x ET report, via git history), analysts/ms-dcf-valuation.md (8/26 ~10:16 ET, this desk's prior report, via git history)
