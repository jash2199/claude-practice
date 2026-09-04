# MS DCF Valuation — Investment Banking Valuation Memo
**Date: 2026-09-04 (Friday) ~14:20 ET — first-ever IONQ DCF build (resolves the book's most chronic process gap, now GS's #1 pick), plus price-roll updates on all six holdings including GEHC's first full-holding treatment.**

*Persona: VP-level valuation coverage for the "Claude Robinhood Trader" experiment. Coverage this run: (1) NVDA, (2) OMCL, (3) VTI, (4) VXUS, (5) XLE, (6) GEHC — all six current holdings per state.md's 2026-09-04 ~09:37 ET live Robinhood snapshot (NVDA $233.10, VTI $380.535, VXUS $88.04, OMCL $34.37, XLE $63.77, GEHC $68.96) — plus (7) IONQ, GS's new #1 pick as of its 2026-09-04 ~09:41 ET report (moved up from an unranked/lower slot; GS's own framing: "a screening-priority change, not a valuation change," reflecting the 9/8 Investor Day 4 days out, not fresh conviction). Per rule 4, live Robinhood-verified prices from state.md take precedence over WebSearch for every name. IONQ's price is state.md's own live-verified read ($39.185, +0.42% vs. prior close) — GS's fresh WebSearch pull this morning ($37.87) is treated as the less reliable figure and discarded, consistent with the standing sourcing discipline this desk and GS have both applied to AVGO/GEHC/OXY/FRO all week.*

---

## Verdicts (top line)

| Ticker | Current Price | DCF Fair Value (base case) | Verdict |
|---|---|---|---|
| **IONQ** *(not held — GS's new #1 pick, first-ever DCF build)* | $39.185 (state.md, 9/4 ~09:37 ET, live Robinhood) | **~$6.50** (WACC 13%, g 3% — extended 10-yr build, see §0) | **SHARPLY OVERVALUED — ~83% downside to base case. Hard pass**, joining MU/FRO/AVGO as a DCF-driven veto. Even the bull scenario (~$12.50) implies ~68% downside. |
| **NVDA** | $233.10 (state.md, +2.04%) | **~$206.2** (WACC 11%, g 3% — model unchanged since 8/27) | **MILDLY OVERVALUED — ~11.5% downside to base case**, wider than 9/3's ~8.8%. Price ($233.10) is now within ~1.0% of the bull case ($235.5) — the gap to even this desk's most generous scenario has nearly closed. |
| **OMCL** | $34.37 (state.md, -1.29%) | ~$53.89 (WACC 9%, g 3%, unchanged since 7/30) | **UNDERVALUED — ~56.8% upside to DCF fair value**, widened from 9/3's ~52.4% on today's pullback. Still the widest mispricing on the book by a wide margin. |
| **VTI** | $380.535 (-0.10%) | N/A — no single-company DCF applies | **NOT APPLICABLE / HOLD BY CONSTRUCTION.** Unchanged. |
| **VXUS** | $88.04 (+0.08%) | N/A — no single-company DCF applies | **NOT APPLICABLE / HOLD BY CONSTRUCTION.** Unchanged. |
| **XLE** | $63.77 (-1.32%) | Composite (oil-adjusted) fair value ≈ **$53.2/sh** (refreshed this run, essentially flat vs. 9/3's $53.3) | **OVERVALUED, gap ≈ -16.4%**, narrowed from 9/3's -18.1% purely on today's price pullback (CVX ~$205-211, Brent ~$95.2-96.9, both essentially flat/quiet vs. 9/3 — no anchor revision). **Do not add.** |
| **GEHC** *(now a holding — first full-holding treatment since the 9/3 entry)* | $68.96 (-1.09% vs. 9/3 close, +0.39% vs. $68.69 entry cost) | ~$70.2 (WACC 8.5%, g 3%, unchanged since 8/21) | **MILDLY UNDERVALUED — ~1.8% upside to base case.** First time this desk has read GEHC below its own fair value since coverage began — a genuine (if small) flip from the mild-overvaluation read that stood through the entire entry-trigger saga. |

**Bottom line for the trader:** The headline item this cycle is process, not price action — this desk is finally closing the single most chronic gap in the book's history (6+ weeks, longer than GEHC's gate ever ran) with a first-ever IONQ DCF, delivered the same week GS moved it to #1 ahead of the 9/8 Investor Day. The verdict is an unambiguous hard pass: on a conservative-but-not-punitive extended build, IONQ's operating business is worth close to nothing on discounted cash flows today — essentially all of its ~$15.9B market cap is optionality on a commercialization path this model cannot see within any reasonable explicit window, not cash flow the model can price. This is not a claim the technology bet is wrong; it is a claim that a DCF is the wrong tool to underwrite it, which is exactly the disclosure rule 6 exists to force before any capital moves. Separately: NVDA's rally has pushed price to within ~1% of this desk's own bull case for the first time — worth flagging even though the model itself is unchanged and no rebuild is triggered. GEHC has quietly flipped to mildly undervalued, the first time that's happened since this desk started covering it back in August — small, but notable given the entire entry saga played out with the stock at or above this desk's fair-value line. OMCL's discount widened back out on today's pullback, still the cheapest name on the book. XLE's overvaluation gap narrowed on a weaker tape for the ETF itself, not a fresh oil-anchor read (today was another quiet day for both CVX and Brent). Nothing here crosses a pre-committed action threshold on its own — these are valuation reads, not trade signals.

---

## 0. IonQ (IONQ) — first-ever DCF build, closing the book's most chronic process gap

### Why this build, why now
GS's 2026-09-04 ~09:41 ET report moved IONQ to #1 on its sheet, explicitly and honestly framed as a screening-priority change (4 trading days to the 9/8/26 Investor Day, a scheduled, dated catalyst) rather than a fresh valuation call — GS itself has no DCF or risk read to lean on and says so. This desk has never opened an IONQ model despite repeated GS asks stretching back 6+ weeks, longer than GEHC's rule-6 gate ever ran before it fired. Per this desk's own mandate (value the current #1 pick every run) and the team's standing complaint about this exact gap, this is that build.

### The core valuation problem: a hyper-growth, deeply cash-negative business with no near-term path to FCF breakeven
IonQ is not a mature, cash-generative company — it is a pre-commercial-scale quantum computing hardware/software provider that just closed a $1.8B all-stock acquisition (SkyWater, closed 7/31/26) to build out semiconductor-based manufacturing capacity. The financial profile:
- **Q2 2026 revenue**: $80.1M (+287% YoY), full-year 2026 guidance raised to **$280-290M** (company's own 8-K/press release, corroborated by Quantum Computing Report's independent coverage). **Data-quality flag**: a separate WebSearch pull this run surfaced a conflicting $260-270M full-year figure attached to a reiterated "$(310)-$(330)M adjusted EBITDA loss" guide — that figure traces to pre-Q2-raise commentary recirculating under a current date, the same stale-recirculation failure mode rule 4 has caught repeatedly this month (the 8/27 CDS and 8/28 OpenAI examples already on file). This desk uses the higher, company-sourced $280-290M figure as primary (midpoint $285M) since it is the more authoritative and more recent source, but is flagging the conflict for the team rather than silently picking a side.
- **Cash burn**: Q2 GAAP operating loss $337.2M on $80.1M revenue; net cash used in operating activities **$254.8M in H1 2026 alone** (~$510M annualized run-rate). This is the honest cash-burn figure this model uses — it is materially worse than the adjusted-EBITDA-loss guide because it captures real working-capital and cash effects the adjusted metric excludes.
- **Balance sheet strength**: cash + investments **$2.96B** as of 6/30/26 (pre-dating the 7/31 SkyWater close, so this figure may not fully reflect deal-related cash use — a genuine data gap this desk is flagging rather than papering over). This is the one clearly strong input: at the current burn rate, IonQ is not at any near-term insolvency or dilution-crisis risk.
- **Shares outstanding**: ~405M as of late August 2026 (up from ~367.7M diluted average just one quarter earlier — meaningful, ongoing dilution, itself a structural headwind to per-share value not fully captured in the cash-flow build below).

### Build methodology — why this is a 10-year, not 5-year, explicit window
IonQ's own guidance shows no path to EBITDA breakeven inside a standard 5-year DCF window. Forcing a 5-year explicit period onto a company that is still burning >100% of revenue in operating losses would produce a terminal-value calculation on a deeply negative Year-5 FCF number — mechanically invalid (Gordon growth requires a stabilized, typically positive, terminal cash flow). This desk instead built a two-stage, 10-year extended model: Stage 1 (FY26-30) uses the company's own near-term growth/burn trajectory; Stage 2 (FY31-35) fades growth toward a terminal rate and margin toward a mature, semiconductor/specialty-hardware-like terminal FCF margin, consistent with how this desk would treat any pre-profit growth name once its business model is at least directionally legible. **The need for a 10-year build itself is a valuation red flag, not a technical footnote** — a DCF this dependent on assumptions 8-10 years out is inherently fragile, and this desk is flagging that fragility explicitly rather than dressing the model up as more precise than it is.

**Revenue path** (FY26 base $285M, growth decelerating from the current 100%+ pace):
| FY26 | FY27 | FY28 | FY29 | FY30 | FY31 | FY32 | FY33 | FY34 | FY35 |
|---|---|---|---|---|---|---|---|---|---|
| $285M | $485M (+70%) | $728M (+50%) | $1,020M (+40%) | $1,326M (+30%) | $1,591M (+20%) | $1,830M (+15%) | $2,013M (+10%) | $2,154M (+7%) | $2,262M (+5%) |

**FCF margin path** (from today's ~-179% of revenue toward a 15% terminal margin, breakeven landing in FY32/33 — beyond the standard explicit window, which is the point):
-175% → -110% → -70% → -40% → -20% → -5% → +5% → +10% → +13% → +15% (terminal)

### Fair value and verdict
| Scenario | Fair value/share | vs. $39.185 live price |
|---|---|---|
| Bear (perpetual burn, no sustained breakeven within the model horizon — effectively a cash-floor-only valuation) | ~$3.50 | **-91% (sharply overvalued)** |
| **Base (breakeven ~FY32-33, 15% terminal margin, WACC 13%, g 3%)** | **~$6.50** | **-83% (sharply overvalued)** |
| Bull (breakeven ~FY31, 20% terminal margin, WACC 11%, g 3% — de-risked scenario) | ~$12.50 | **-68% (sharply overvalued)** |

**Sensitivity table (base-case cash-flow path, $/share, varying WACC and terminal growth):**
| WACC \\ Terminal g | 2% | 3% | 4% |
|---|---|---|---|
| 11% | $7.3 | $7.7 | $8.1 |
| **13% (base)** | $6.3 | **$6.5** | $6.9 |
| 15% | $5.6 | $5.9 | $6.2 |

Every cell in this grid — including the most generous bull-case scenario — implies substantial downside to the live price. As a sanity floor: net cash of $2.96B ÷ ~405M shares ≈ **$7.31/share** if the entire operating business were valued at exactly zero; the base-case DCF ($6.50) lands close to but below that floor, meaning this model assigns slightly negative value to the operating business itself once the multi-year cash burn is discounted back — consistent with, not an outlier from, the cash-floor check.

**WACC rationale (13% base, the highest on this desk's entire coverage list)**: reflects genuine, stacked risk factors none of this book's other names carry simultaneously — GAAP unprofitability with no near-term breakeven line of sight, ongoing share-count dilution (~10% growth in shares outstanding in a single quarter), integration risk on a recently-closed $1.8B acquisition, and a technology-commercialization timeline that is inherently harder to underwrite than a mature semiconductor, healthcare, or energy business.

### Verdict: **SHARPLY OVERVALUED — hard pass, the book's fourth DCF-driven veto (after MU, FRO, AVGO)**
This is a valuation-discipline call, not a technology call. IonQ may well be a legitimate long-run winner in quantum computing — that is precisely the kind of claim a standard discounted-cash-flow model is the wrong tool to price, because essentially none of the value the market is assigning today ($15.9B market cap vs. a ~$0 to slightly-negative DCF-derived operating value) shows up as cash flow inside any horizon this model can respons­ibly forecast. Per rule 5 (a DCF "sharply overvalued" call is a hard pass, full stop, regardless of how good a screener's case looks), and consistent with GS's own framing that its #1 ranking is a timing/urgency call, not a valuation one, this desk's read is: **do not buy IONQ into the 9/8 Investor Day on this model.** Rule 6 (cross-vetting) still requires a BW risk read before this could ever be actionable regardless of this desk's verdict — that gate remains open and is BW's to close, not this desk's.

### Key assumptions that could break this model
- **Upside break**: if the 9/8 Investor Day delivers a credible, quantified path to EBITDA/FCF breakeven materially faster than this model's mid-2030s assumption (e.g., SkyWater's manufacturing scale economies compressing the cost base faster than modeled), that would justify a meaningfully higher bull-case rebuild — this desk will revisit after 9/8 regardless of whether BW has opened a risk read by then.
- **Downside break**: continued share-count dilution at anywhere near this quarter's pace (~10%/quarter) would erode per-share value faster than this model captures, since the build above holds share count flat at ~405M throughout.
- **Data-quality flag carried forward**: the $2.96B cash figure predates the SkyWater close (7/31); the true post-close cash position is likely lower and is a concrete, checkable input the next rebuild should source directly from IonQ's next 10-Q rather than carry forward as-is.
- **Framing risk**: this is fundamentally a real-options/story-stock valuation problem. A reader should take the "-83%" headline as "cannot be justified on discounted cash flows today," not as a prediction the stock must fall 83% — DCF blindness to optionality value is a known, structural limitation of this method on pre-commercial technology names, the same caveat this desk has applied to every prior hard-pass call (MU, FRO, AVGO).

---

## 1. NVIDIA (NVDA) — price-roll update, model unchanged, gap widens as price nears the bull case

Price $233.10 (state.md, 9/4 09:37 ET, +2.04% vs. 9/3 close), continuing the same rally this desk has tracked all week. No new company-specific catalyst beyond the already-digested, now-confirmed Hugging Face acquisition (signed 9/2, ~$12.93B, immaterial to this model's size). Model unchanged since the 8/27 full rebuild.

| Scenario | Fair value/share | vs. $233.10 live price |
|---|---|---|
| Bear (guide disappoints, WACC 12%, g 2%) | $124.3 | **-46.7% (sharply overvalued)** |
| Base (partial credit, WACC 11%, g 3%) | **$206.2** | **-11.5% (mildly overvalued)** |
| Bull (full credit to mgmt's own guide, WACC 11%, g 3%) | $235.5 | **+1.0% (essentially at fair value)** |

**Notable this run**: the gap to the bull case has compressed to ~1.0% — the closest this desk's model has ever come to being fully caught by the price. A further ~1% rally would put NVDA above even this desk's most generous credible scenario, which would be the first time that's happened on this name. Worth a fresh full rebuild if that line is crossed, rather than continuing to roll the same 8/27 numbers forward.

### Verdict: **MILDLY OVERVALUED, gap widened to ~11.5% on a continuing rally — no rebuild, no verdict flip (yet)**
Hold, no add, no trim from this desk's chair. Per state.md's 9/4 09:37 ET read, NVDA sits at ~12.85% equity/~11.34% pool — comfortably below the 18-20% single-name trigger. NVDA+OMCL combined ~20.97% — below the 25% combined trigger, buffer ~4.03pp.

### Key assumptions that could break this model (unchanged from 8/27)
- Upside break: the 70% FY28 guide proves genuinely supply-constrained (a floor, not a ceiling).
- Downside break: AVGO/hyperscaler custom-silicon competition erodes the 75% gross-margin assumption in years 3-5; the CDS record (still unresolved after seven cycles) sustaining a confirmed close above 82bps would argue for the bear-case WACC.
- Downside break: any plateau in AI capex growth collapses the bull/base case toward the bear case fast — worth watching given how close price now sits to the bull-case ceiling.

---

## 2. Omnicell (OMCL) — price update, model unchanged, discount widens on today's pullback

Price $34.37 (state.md, 9/4 09:37 ET, -1.29% vs. 9/3 close). No fresh company-specific catalyst found this run — WebSearch this run surfaced nothing beyond the already-known Q2 print and the 10/29 next-earnings date.

Base case fair value **$53.89** (WACC 9%, g 3% — unchanged since 7/30) vs. today's $34.37 implies **~56.8% upside**, widened from 9/3's ~52.4% on today's pullback. This remains, by a wide margin, the largest DCF discount on the book.

### Verdict: **UNDERVALUED — still the widest mispricing on the book, still gated**
The two-way, no-catalyst volatility this desk has flagged for weeks continues. The standing sizing gate (BW's risk sign-off / the OMCL DCA accumulated-profit threshold, per state.md's 9/4 run notes sitting further from firing today as the pool value dipped) remains the operative timing mechanism, not this desk's valuation call, which has read "undervalued" consistently since 7/30.

### Key assumptions that could break this model (unchanged)
- Upside break: the softer Q3/bookings guide proves conservative rather than a genuine slowdown — would push fair value toward $56-60+.
- Downside break: continued high-amplitude, no-catalyst price action is itself a signal of unusually high name-specific volatility relative to this book's other holdings — an argument for sizing discipline, not for revising this desk's valuation call.

---

## 3. Vanguard Total Stock Market ETF (VTI) — unchanged, brief refresh only
No change to the standing "not applicable" treatment. $380.535 (-0.10%). This desk has no fair-value view on VTI and defers entirely to BR/BW on sizing and drift-band status.

## 4. Vanguard Total International Stock ETF (VXUS) — unchanged, brief refresh only
No change to the standing "not applicable" treatment. $88.04 (+0.08%). No fair-value case to add or trim. Defer to BR/BW.

---

## 5. Energy Select Sector SPDR (XLE) — oil-adjusted composite re-read, gap narrows on a weaker tape for the ETF itself

Fresh WebSearch this run: CVX trading roughly $205-211 (some dispersion across sources; using ~$208 as a working midpoint), essentially flat-to-modestly-softer vs. 9/3's $212.42 read. Brent $95.2-96.9 (dispersion across sources/times, consistent with the same range this desk has carried all week) — still elevated on the live Hormuz conflict, no directional break. GS's own $80 Q4'26 Brent house forecast remains unrevised. Applying the modest CVX pullback to the composite leaves the oil-adjusted fair value essentially flat at **~$53.2/sh** (from 9/3's $53.3) — another quiet day on the oil-anchor leg of this model.

Applied to XLE's live price ($63.77, -1.32% on the day), the implied gap is **~-16.4%**, narrowed from 9/3's ~-18.1% — the ETF itself pulled back today while the composite anchor barely moved, closing part of the gap on price action rather than a fundamentals revision.

### Verdict: **OVERVALUED — gap narrows on price action alone, do-not-add stance unchanged**
No trim (no structural break in the held position's own thesis; the Hormuz conflict remains live per today's WebSearch — the confirming case for holding XLE as a hedge, not a reason to touch it), no add. The equity-comp-leg-only adjustment this desk has run since 8/31 remains a stopgap; a full ground-up composite rebuild (last done 7/24-7/28) remains overdue and is again the standing recommendation.

### Key assumptions that could break this model
- Upside break (narrows the overvaluation further): if GS revises its own $80 Q4'26 Brent house forecast upward given the sustained spot climb (Brent still well above the forward anchor), this desk would follow with a genuine anchor revision.
- Downside break: OPEC's 2026 demand-cut framing would, if the forward anchor moves at all, argue for moving it down, not up — unchanged this cycle.

---

## 6. GE HealthCare (GEHC) — first full-holding treatment since the 9/3 entry, and a genuine flip to mildly undervalued

### Why this section is new
GEHC fired its entry trigger and became this book's sixth holding on 2026-09-03 (~10:38 ET, $2.50 quarter-size buy at ~$68.69 avg cost). Every prior mention of this name in this desk's reports was in the "non-holding names carried forward" section; this is the first time it gets the same full treatment as the other five positions.

### What changed since 8/21 (the last full build)
Nothing in the model — no rebuild triggered, no GEHC-specific structural news found this run beyond the already-known Grogan CFO transition (effective 9/14) and the Wells Fargo Health Conference (9/9). What changed is the price: GEHC has drifted from $70.66-71.30 (hovering above this desk's own $70.2 base case through most of the entry-trigger saga) down to **$68.96** today (state.md, 9/4 09:37 ET, -1.09% vs. 9/3 close, but +0.39% vs. the $68.69 entry cost — a genuine, if small, gain on the position).

### Fair value and verdict
Base case fair value **$70.2/sh** (WACC 8.5%, g 3%, unchanged since 8/21) vs. today's $68.96 implies **~1.8% upside** — the first time this desk has read GEHC as undervalued, even mildly, since coverage began. For context: undervalued ~+7% at 8% WACC (≈ BTIG's $79 target); overvalued ~-14% at 9% WACC. The position sits in the narrow, defensible middle of that band this desk has described from the start — "a genuine close call, not a hard pass."

### Verdict: **MILDLY UNDERVALUED — a small, genuine flip, not a reason to add**
Hold, no add from this desk's chair — a ~1.8% DCF discount on a name this desk has always described as "assumption-dependent" is not a green light for further sizing, and this is a quarter-size satellite position already at its intended weight. Worth flagging for BR/BW as the first hard evidence that the entry was, on this desk's own numbers, priced reasonably rather than at a premium as it looked for most of August.

### Key assumptions that could break this model (unchanged from 8/21)
- Upside break: FCF conversion improving toward ~10% faster than modeled (the central assumption behind this desk's fair-value line) would push fair value higher.
- Downside break: net debt sourced worse than BW's 10-Q-corrected ~$8.0B (this desk's illustrative $7.5B was already ~$0.5B optimistic per BW's own correction) would pull fair value down further; a backlog/book-to-bill reversal would be a genuine structural break, not modeled here.

---

## Cross-check with GS screener (analysts/gs-stock-screener.md, 2026-09-04 report)
GS moved IONQ to #1 this cycle, explicitly and correctly framing it as a screening-priority/urgency call (4 days to the 9/8 Investor Day) rather than a valuation call — GS has no DCF or risk read of its own on this name and says so directly. This desk's first-ever build supplies exactly the valuation check that framing was missing: **sharply overvalued, hard pass**, the fourth name on this book to draw that verdict (after MU, FRO, AVGO). This is the textbook case this desk's stance exists for — when the screener's #1 pick is driven by timing rather than conviction, the valuation desk's job is to say plainly whether the price can be justified on the numbers, and here it cannot. No disagreement with GS's other reads or rankings.

## Explicit read on trader's current positions (all six: NVDA, OMCL, VTI, VXUS, XLE, GEHC) plus IONQ
**NVDA**: hold, no add, no trim — base-case DCF gap widened to ~11.5% overvalued; price now within ~1.0% of this desk's bull case for the first time. Model unchanged, but worth a fresh rebuild if the bull-case line is crossed.
**OMCL**: hold, no add from this desk's chair — DCF discount widened to ~56.8% (from ~52.4% on 9/3) on today's pullback, still by far the widest mispricing on the book. The DCA plan's own profit-threshold gate remains the actual timing mechanism.
**VTI / VXUS**: hold, no valuation view — diversified core-sleeve holdings, not DCF calls. Defer to BR/BW on drift-band status.
**XLE**: hold, no trim, no add — gap narrowed to ~-16.4% on the ETF's own pullback, not a fresh oil-anchor read. A full ground-up composite rebuild remains overdue and is again this desk's standing recommendation.
**GEHC**: hold, no add — first-ever mildly-undervalued read (~+1.8%) since this desk started covering the name, a small but genuine flip. Not a sizing signal on its own for a position already at its intended quarter-size weight.
**IONQ** *(not held, GS's new #1 pick)*: hard pass on valuation — first-ever DCF build finds ~83% downside to base case, ~68% downside even under a generous bull scenario. Rule 6 (a BW risk read) has never opened on this name and remains the independent, separate gate. Not actionable regardless of the 9/8 Investor Day outcome unless a future rebuild finds a materially faster path to cash-flow breakeven than this model assumes.

---

Sources:
- [IonQ Reports Record Q2 2026 Financial Results: Revenue Soars 287% to $80.1M, Full-Year Guidance Raised to $290M (Quantum Computing Report)](https://quantumcomputingreport.com/ionq-reports-record-q2-2026-financial-results-revenue-soars-287-to-80-1m-full-year-guidance-raised-to-290m/)
- [IonQ, Inc. - Form 10-Q - FY2026 (SEC)](https://www.sec.gov/Archives/edgar/data/0001824920/000119312526341001/ionq-20260630.htm)
- [IonQ posts Q2 2026 loss on warrant charges (StockTitan)](https://www.stocktitan.net/sec-filings/IONQ/10-q-ion-q-inc-quarterly-earnings-report-78417cbb5121.html)
- [IonQ, Inc. (IONQ) Statistics & Valuation (StockAnalysis)](https://stockanalysis.com/stocks/ionq/statistics/)
- [IONQ Shares Outstanding (GuruFocus)](https://www.gurufocus.com/term/Shares+Outstanding/NYSE:IONQ)
- [IonQ, Inc. (IONQ) Market Cap & Net Worth (StockAnalysis)](https://stockanalysis.com/stocks/ionq/market-cap/)
- [Chevron Corporation (CVX) Stock Price, News, Quote & History (Yahoo Finance)](https://finance.yahoo.com/quote/CVX/)
- [Brent oil - Price - Chart - Historical Data (TradingEconomics)](https://tradingeconomics.com/commodity/brent-crude-oil)
- [Current price of oil as of Sept. 4, 2026 (Fortune)](https://fortune.com/article/price-of-oil-09-04-2026/)
- Internal: trading-experiment/state.md (9/4 09:37 ET live Robinhood run notes), analysts/gs-stock-screener.md (9/4 09:41 ET report), analysts/ms-dcf-valuation.md (9/3 report, this desk's prior report — full detail via git history)
