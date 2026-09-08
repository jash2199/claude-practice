# MS DCF Valuation — Investment Banking Valuation Memo
**Date: 2026-09-08 (Tuesday), ~10:15 ET (real ET verified via `TZ=America/New_York date`) — IonQ (IONQ) DCF fully rebuilt on GS's same-day request following the SkyWater-driven FY26 guidance raise; price-roll updates on all six holdings using the trader's 09:37 ET live Robinhood snapshot.**

*Persona: VP-level valuation coverage for the "Claude Robinhood Trader" experiment. Coverage this run: (1) NVDA, (2) OMCL, (3) VTI, (4) VXUS, (5) XLE, (6) GEHC — all six current holdings per state.md's 2026-09-08 ~09:37 ET live Robinhood snapshot (NVDA $230.75, VTI $378.755, VXUS $88.435, OMCL $33.66, XLE $65.14, GEHC $67.88) — plus (0) IONQ, rebuilt in full this run. GS's 2026-09-08 ~09:45 ET report named IONQ its #1 actionable item today (not a ranking change — GS's screener rank-1 slot is still XLE, already held) and explicitly asked this desk to rebuild "now, not wait for 12:30pm," after IonQ's 8-K this morning raised FY2026 revenue guidance to $450-460M from $280-290M following the SkyWater Technology acquisition (closed 7/31/26). Per rule 4, live Robinhood-verified prices from state.md take precedence over WebSearch for the six holdings; IONQ (not held, no Robinhood line item in this book) uses fresh WebSearch pricing, flagged as pre-market and treated as indicative only.*

---

## Verdicts (top line)

| Ticker | Current Price | DCF Fair Value (base case) | Verdict |
|---|---|---|---|
| **IONQ** *(not held)* | ~$41.83 pre-market (WebSearch, +5.84% vs. $39.52 prior close; **not** Robinhood-verified) | **~$0/sh** (segment-based rebuild — see §0; essentially no residual equity value once the quantum segment's cash burn is netted against SkyWater's cash flows and an estimated post-deal net cash position) | **SHARPLY OVERVALUED — ~99%+ downside to base case. Hard pass, reaffirmed on a fully rebuilt model.** Even the bull case (~$1.6/sh) implies ~96% downside. |
| **NVDA** | $230.75 (state.md, 9/8 ~09:37 ET, +0.17%) | **~$206.2** (WACC 11%, g 3% — unchanged since 8/27) | **MILDLY OVERVALUED — ~10.6% downside to base case**, essentially flat vs. 9/7's ~10.3% read. |
| **OMCL** | $33.66 (state.md, 9/8 ~09:37 ET, -2.07%) | ~$53.89 (WACC 9%, g 3%, unchanged since 7/30) | **UNDERVALUED — ~60.1% upside to DCF fair value**, a new widest-recorded discount on this name, up from 9/7's ~57.5%. |
| **VTI** | $378.755 (-0.26%) | N/A — no single-company DCF applies | **NOT APPLICABLE / HOLD BY CONSTRUCTION.** Unchanged. |
| **VXUS** | $88.435 (+0.03%) | N/A — no single-company DCF applies | **NOT APPLICABLE / HOLD BY CONSTRUCTION.** Unchanged. |
| **XLE** | $65.14 (**+1.69%**) | Composite (oil-adjusted, equity-comp-leg-only stopgap) ≈ **$53.2/sh** (CVX-driven leg unchanged; oil-side inputs still not flowing through — see §5) | **OVERVALUED, gap ≈ -18.3%**, widened mechanically on today's rally in the ETF itself while the model's actual input (CVX) sat flat. **This desk's model is now flagged stale for a fifth-plus consecutive cycle — do not add on this number.** |
| **GEHC** | $67.88 (-1.42% on the day, ~-1.18% vs. $68.69 entry cost) | ~$70.2 (WACC 8.5%, g 3%, unchanged since 8/21) | **MILDLY UNDERVALUED — ~3.4% upside to base case**, widened from 9/7's ~1.9% as the stock has now traded net negative against its entry cost for two straight sessions. |

**Bottom line for the trader:** The headline item this cycle is the IonQ rebuild — GS asked this desk directly to treat the SkyWater-driven guidance raise as the trigger to revisit the 9/4 hard-pass model rather than let a stale DCF sit against a same-day, materially-changed input set, and this is that rebuild (see §0 for full methodology). The verdict does not flip: **still a hard pass**, but for a meaningfully different and more defensible reason than the 9/4 build. That model treated IonQ as an almost-pure quantum-computing burn story with no real revenue base to speak of. This model now correctly incorporates SkyWater — a real, profitable, growing semiconductor foundry — as its own segment, and the conclusion is that SkyWater's genuine (if thin-margin) cash generation and IonQ's large net cash pile are still not large enough to offset the quantum segment's burn rate, which this quarter ran at roughly -150% of quantum-segment revenue on an adjusted-EBITDA basis. That is the actual finding, not "IonQ has no real business" — a more honest and more useful verdict for the trader than the 9/4 read, and one this desk would defend even if GS pushes back on the magnitude. On the six holdings: nothing structurally new. NVDA/OMCL/GEHC are mechanical price rolls on unchanged models. XLE's overvaluation gap widened again on today's rally in the ETF itself while oil (Brent ~$98-99, still well above the model's CVX-anchored assumptions) and CVX (flat at $208.76, identical to Friday) continue to diverge — this is now the fifth-plus consecutive cycle this desk has flagged its own XLE composite as understating the hedge's real strength, and the standing ask to do a full ground-up rebuild (last done 7/24-7/28) is escalated again below. GEHC's cushion, while nominally wider on the DCF math, is now backed by two straight sessions of the stock trading below its own entry cost — worth the trader's attention against the standing structural-break contingency plan's $65 revisit line (GEHC is at $67.88, still comfortably above it).

---

## 0. IonQ (IONQ) — full rebuild, segment-based methodology (quantum computing + SkyWater foundry)

### Why this gets a full rebuild rather than a price-roll update
This desk's 9/4 model was a single-segment quantum-computing DCF (~$6.50/sh base case, ~83% downside), built before the SkyWater Technology acquisition closed (7/31/26). Today's 8-K raises FY2026 revenue guidance to $450-460M from $280-290M — a ~60-64% increase driven almost entirely by consolidating SkyWater (a real semiconductor foundry with FY2025 revenue of $442.1M) from close date through year-end, not organic quantum acceleration. GS's report this morning explicitly argued this is large enough to invalidate the 9/4 model's inputs and asked for a same-day rebuild rather than waiting on the 12:30pm ET Investor Day. This desk agrees the prior model is now stale on its face — it never contemplated a second, materially different business inside the same ticker — and is rebuilding on a sum-of-segments basis instead of patching the old single-segment build.

### Segment 1: IonQ Quantum (core business)
Q2 2026 (last reported quarter): revenue $80.1M (+287% YoY), total operating costs $417.3M, operating loss $337.2M, adjusted EBITDA **-$120.3M** (≈ -150% of segment revenue). This is the base rate this model extrapolates from — a company still burning roughly 1.5x its own revenue in cash losses at the operating level, before any SkyWater contribution. Revenue path assumes continued hyper-growth decelerating from the 287% YoY pace (international ~50% of Q2 revenue, commercial enterprise ~60%, multi-product ~25% — a genuinely diversifying, not one-off, revenue base) toward more sustainable rates; EBITDA margin assumed to improve steadily (operating leverage) but remain negative through the entire explicit window:

| FY | Revenue | EBITDA margin | EBITDA | Capex (~20% of rev, hardware-intensive) | Unlevered FCF |
|---|---|---|---|---|---|
| 2026 (organic guide, pre-SkyWater) | $285M | -140% | -$399M | $57M | **-$456M** |
| 2027 | $445M | -90% | -$401M | $89M | **-$490M** |
| 2028 | $630M | -55% | -$347M | $126M | **-$473M** |
| 2029 | $820M | -30% | -$246M | $164M | **-$410M** |
| 2030 | $1,000M | -10% | -$100M | $200M | **-$300M** |

Discounted at WACC 13% (unchanged from the 9/4 build — reflects a still-unprofitable, execution-dependent business): PV of explicit-window FCF ≈ **-$1,529M**. **No terminal value is assigned to this segment** — at -$300M FCF in year 5, the segment is still nowhere near a cash-flow base a standard Gordon-growth terminal value could responsibly extrapolate from; assigning one would require assuming a profitability inflection this model has no visibility into. This is the same "conservative-but-not-punitive, simply doesn't extend the window past what's forecastable" discipline the 9/4 build used, applied here to a segment rather than the whole company.

### Segment 2: SkyWater Technology (foundry, consolidated from 7/31/26)
FY2025 standalone: revenue $442.1M (+29% YoY), adjusted EBITDA $53.2M (12.0% margin), non-GAAP gross margin 20.7% — a real, modestly profitable, capital-intensive semiconductor foundry (Fab 25 acquisition-driven growth), not a shell. Modeled forward at a slower, mature-foundry growth rate (5-8%/yr) with gradual margin expansion (integration into IonQ's "vertically integrated quantum platform" narrative) and maintenance-level capex (~10% of revenue — lower than the quantum segment's hardware-R&D-heavy 20%, consistent with a foundry that already completed its major capacity addition via Fab 25):

| FY | Revenue | EBITDA margin | EBITDA | Capex (~10% of rev) | Unlevered FCF |
|---|---|---|---|---|---|
| 2026 (5-mo stub, Aug-Dec) | ~$170M | 12% | $20M | $17M | **$3M** |
| 2027 | $460M | 12.5% | $57.5M | $46M | **$11.5M** |
| 2028 | $495M | 13% | $64M | $49.5M | **$14.5M** |
| 2029 | $530M | 13.5% | $70M | $53M | **$17M** |
| 2030 | $565M | 14% | $79M | $56.5M | **$22.5M** |

Discounted at WACC 12% (lower than the quantum segment — a real, cash-generating business, though still capital-intensive and now embedded inside a much riskier corporate parent): PV of explicit FCF (2026 stub + 2027-2030) ≈ **$59M**. Terminal value at year-5 FCF ($22.5M), g 3%: $22.5M × 1.03 / (0.12-0.03) ≈ $257.5M, PV ≈ **$146M**. **Segment value ≈ $205M.**

**This is itself a notable, standalone finding worth flagging plainly**: IonQ paid ~$1.8B (cash-and-stock, $15/sh cash + 0.4883 IonQ shares per SkyWater share) for a business this model values on a pure DCF basis at roughly $205M — about 4x FY25 revenue for a 12%-EBITDA-margin, capital-intensive foundry priced at a fraction of that in discounted cash flow terms. That gap is either (a) this model being too conservative on SkyWater's standalone growth/margin trajectory, or (b) genuine evidence the deal price embeds significant strategic/optionality value (vertical integration into quantum hardware manufacturing, US-based foundry capacity relevant to CHIPS Act-era policy) that a standalone foundry DCF cannot capture. This desk flags it as an open question rather than resolving it — but it is not this desk's place to bless a $1.8B acquisition price on a segment DCF this far below it without saying so.

### Combining the segments
| | PV (base case) |
|---|---|
| Quantum segment (explicit FCF, no TV) | **-$1,529M** |
| SkyWater segment (explicit FCF + TV) | **+$205M** |
| **Combined operating enterprise value** | **-$1,324M** |
| Plus: estimated post-deal net cash | **+$1,290M** |
| **Implied combined equity value** | **≈ -$34M ≈ ~$0** |

**Net cash estimate, with an explicit caveat**: IonQ's 6/30/26 10-Q reported net cash of ~$2.06B ($5.20/sh on the pre-close share count). The SkyWater deal (cash-and-stock, ~43% cash mix on the $35/sh blended price) closed 7/31/26 and this desk estimates the cash outlay at roughly $770M (≈ $1.8B deal value × 15/35 cash-to-total ratio), implying **post-deal net cash of approximately $1.29B** — this has **not** been confirmed against a post-close balance sheet (the next 10-Q, covering the quarter including the SkyWater close, has not yet been filed) and should be treated as this model's own estimate, not a sourced figure. Share count: ~405M (market cap $16.95B ÷ price $41.83, WebSearch-derived, itself imprecise pre-market data).

**Implied fair value per share: ≈ $0.00-0.08/sh** (essentially zero — the combined operating value plus estimated net cash rounds to breakeven at this share count) vs. ~$41.83 pre-market → **~99%+ downside**.

### Sensitivity (base/bull/bear on segment assumptions, not a WACC×g grid given the terminal-value-free quantum segment)
| Scenario | Quantum PV | SkyWater PV | Net cash | Implied equity value | Per share | vs. $41.83 |
|---|---|---|---|---|---|---|
| **Bear** (quantum burn +30% worse, SkyWater margin compresses to ~9%) | -$1,988M | +$146M | +$1,290M | **-$552M** | **~$0 (floor)** | **~-100%** |
| **Base** | -$1,529M | +$205M | +$1,290M | **-$34M** | **~$0.00-0.08** | **~-99.8%** |
| **Bull** (quantum burn narrows ~40% faster than modeled — commercial contracts convert to high-margin recurring revenue; SkyWater reaches 16% margin on integration synergies) | -$917M | +$270M | +$1,290M | **+$643M** | **~$1.59** | **~-96.2%** |

### Verdict: **SHARPLY OVERVALUED — hard pass, reaffirmed on a fully rebuilt, segment-based model. Even the bull case implies ~96% downside.**
This joins MU/FRO/AVGO/(prior-build)IONQ as a DCF-driven veto — the verdict itself is unchanged from 9/4, but the reasoning underneath it is materially different and, this desk believes, materially more defensible: the prior model could be read as "IonQ has no real revenue," which was never quite fair even in July and is now flatly wrong post-SkyWater. The corrected read is narrower and harder to argue with: **a genuinely growing, diversifying, real-revenue combined company is still spending roughly 1.5x its core segment's revenue in cash losses, and neither a real (if modest) foundry business nor a large net cash pile is big enough to close that gap on any reasonable discounting.** Per rule 5, this is a hard pass, full stop, regardless of today's Investor Day framing or the stock's own pre-market pop. Rule 6 (BW's independent risk read) has never opened on this name and remains the separate gate — not resolved by this desk's verdict either direction.

### Key assumptions that could break this model
- **Upside break**: if the quantum segment's adjusted-EBITDA margin improves materially faster than modeled (e.g., government/defense contracts — a segment already ~60% commercial enterprise — convert to high-margin, low-incremental-cost recurring revenue at a pace this model doesn't credit), fair value could move meaningfully off zero. Today's Investor Day multiyear framework (announced but granular 2028/2030 revenue targets not yet found via WebSearch as of this writing) is the most likely near-term source of a genuine update to this assumption — flagging for next cycle's re-check.
- **Upside break**: if post-deal net cash comes in materially above this model's ~$1.29B estimate (e.g., a lower actual cash-consideration outlay, or additional financing raised alongside the deal), that flows roughly dollar-for-dollar into the equity-value bridge.
- **Downside break**: if SkyWater's standalone margins compress under foundry pricing competition, or if the quantum segment's burn rate fails to narrow at all (flat -150% EBITDA margin held through the window), the bear case above already shows the equity-value floor at effectively $0 either way — there is limited incremental downside left to model beyond "confirms the hard pass more emphatically."
- **Process note**: this model has not been checked against IonQ's own combined post-close guidance detail (only the topline $450-460M figure and the segment mix implied by GS's reporting) — flagging as the first item to refresh once a fuller Investor Day readout or the next 10-Q is available.

---

## 1. NVIDIA (NVDA) — price-roll update, model unchanged

Price $230.75 (state.md, 9/8 ~09:37 ET live Robinhood, +0.17% vs. Friday's close). No fresh structural WebSearch catalyst found this run beyond what was already on file (Hugging Face deal, $0.25 dividend ex-date 9/10). No rebuild triggered.

Base case fair value **$206.2** (WACC 11%, g 3% — unchanged since 8/27) vs. $230.75 implies **~10.6% downside**, essentially flat vs. 9/7's ~10.3% read.

### Verdict: **MILDLY OVERVALUED**
Hold, no add, no trim from this desk's chair. Per state.md's 9/8 ~09:37 ET snapshot, NVDA sits at ~12.73% equity — comfortably below the 18-20% single-name trigger; NVDA+OMCL combined ~20.70%, buffer ~4.3pp to the 25% trigger.

### Key assumptions that could break this model (unchanged from 8/27)
- Upside break: the 70% FY28 guide proves genuinely supply-constrained (a floor, not a ceiling).
- Downside break: AVGO/hyperscaler custom-silicon competition erodes the 75% gross-margin assumption in years 3-5; NVDA's CDS record (still unresolved via WebSearch after 13+ cycles per BW) sustaining a confirmed close above 82bps would argue for the bear-case WACC.

---

## 2. Omnicell (OMCL) — price-roll update, model unchanged, discount at a new widest-recorded level

Price $33.66 (state.md, 9/8 ~09:37 ET, -2.07% on the day). No fresh WebSearch catalyst found this run beyond the already-known Q2 print and 10/29 next-earnings date.

Base case fair value **$53.89** (WACC 9%, g 3% — unchanged since 7/30) vs. $33.66 implies **~60.1% upside** — a new widest-recorded gap on this name, up from 9/7's ~57.5%.

### Verdict: **UNDERVALUED — widest mispricing on the book, still gated**
No fresh catalyst to act on (rule 1); the OMCL DCA accumulated-profit gate (per state.md, ~$1.508 of the $2.50 threshold still required as of 09:37 ET) remains the operative timing mechanism, not this desk's valuation call.

### Key assumptions that could break this model (unchanged)
- Upside break: the softer Q3/bookings guide proves conservative rather than a genuine slowdown.
- Downside break: continued high-amplitude, no-catalyst price action remains an argument for sizing discipline, not for revising this desk's valuation call.

---

## 3. Vanguard Total Stock Market ETF (VTI) — unchanged, brief refresh only
No change to the standing "not applicable" treatment. $378.755 (-0.26%). This desk has no fair-value view on VTI and defers entirely to BR/BW on sizing and drift-band status.

## 4. Vanguard Total International Stock ETF (VXUS) — unchanged, brief refresh only
No change to the standing "not applicable" treatment. $88.435 (+0.03%). No fair-value case to add or trim. Defer to BR/BW.

---

## 5. Energy Select Sector SPDR (XLE) — model staleness now a fifth-plus consecutive cycle, escalating the rebuild ask

Price $65.14 (state.md, 9/8 ~09:37 ET, **+1.69%** — the day's standout, the hedge working as designed on the weekend Hormuz escalation). Fresh WebSearch this run: **Brent is trading ~$98.59-99.85/bbl and WTI ~$92-94.73/bbl**, both further above even this desk's already-flagged-as-stale 9/7 anchor range. **CVX itself — the only input this desk's stopgap composite actually runs off — is at $208.76, effectively unchanged from Friday's $208.76-211 range and still below its own 9/2 closing high.** The divergence this desk first named 9/7 (oil moving, the equity comp not catching up) has not narrowed at all in the intervening session.

Applied to today's price, the mechanical composite gap reads **~-18.3%** (overvalued), the widest yet — but per the same logic as the last two cycles, this is the ETF price moving (+1.69% today) against a model whose only live input (CVX) didn't move, not a fresh anchor read. **This desk continues to treat ~$53.2/sh as a floor, not a best estimate, and is not going to hand-adjust the composite off an oil beta the model was never built to carry.**

### Verdict: **OVERVALUED on this desk's current model — model explicitly flagged stale for a fifth-plus consecutive cycle**
No trim (the hedge thesis is confirmed working, not invalidated), no add (this desk's own number still reads overvalued). **Standing recommendation, escalated further**: the ground-up composite rebuild (last done 7/24-7/28, now six-plus weeks overdue) should be this desk's next full build ahead of any further backlog item — repeating a flag for a fifth-plus cycle without acting on it is exactly the pattern rule 14 exists to force a resolution on, and this desk is naming that against itself here.

### Key assumptions that could break this model
- Upside break: if CVX/XOM re-rate to catch up with the ~$92-99 oil tape, or GS revises its $80 Q4'26 Brent house forecast upward, this desk would follow with a genuine anchor revision.
- Downside break: unchanged this cycle, increasingly hard to square with the live tape.

---

## 6. GE HealthCare (GEHC) — price-roll update, model unchanged, cushion widening on the DCF side even as the position trades net negative

Price $67.88 (state.md, 9/8 ~09:37 ET, -1.42% on the day, ~-1.18% vs. the $68.69 entry cost — the position's first negative print, now extending to a second session). Fresh WebSearch this run found nothing structurally new beyond the already-known Grogan CFO transition (9/14) and Wells Fargo Health Conference (9/9, tomorrow).

Base case fair value **$70.2/sh** (WACC 8.5%, g 3%, unchanged since 8/21) vs. $67.88 implies **~3.4% upside**, wider than 9/7's ~1.9% read purely because the stock itself has pulled back further, not because the model changed.

### Verdict: **MILDLY UNDERVALUED — reading holds and widens slightly**
Hold, no add from this desk's chair — a ~3.4% DCF discount on a name this desk has always described as "assumption-dependent" is still not a green light for further sizing on an already-at-target quarter-size satellite position. Worth flagging plainly for the trader: the DCF gap widening while the position's own cost-basis cushion turns negative is not a contradiction — it just means the entry price sat close to this desk's fair-value line, and normal day-to-day noise can put the live quote on either side of both lines independently. The structural-break contingency plan's $65 revisit line (state.md) is still ~$2.88 away.

### Key assumptions that could break this model (unchanged from 8/21)
- Upside break: FCF conversion improving toward ~10% faster than modeled would push fair value higher.
- Downside break: net debt sourced worse than BW's 10-Q-corrected ~$8.0B would pull fair value down further; a backlog/book-to-bill reversal would be a genuine structural break, not modeled here.

---

## Cross-check with GS screener (analysts/gs-stock-screener.md, 2026-09-08 ~09:45 ET report)
GS's explicit ask this cycle — rebuild IONQ same-day rather than let the 9/4 model sit stale against the guidance raise — is directly addressed in §0 above. This desk's rebuilt verdict (hard pass, unchanged direction but a more defensible mechanism) supplies exactly the valuation check GS's own report said it lacked ("no DCF or risk read of its own on this name"). No disagreement with GS's XLE hedge-working-as-designed framing (§5 above reaches the same conclusion from the valuation side), its OXY veto reaffirmation, or its MU/FRO hard-pass reads (both consistent with this desk's own prior DCF vetoes).

## Explicit read on trader's current positions (all six: NVDA, OMCL, VTI, VXUS, XLE, GEHC) plus IONQ
**NVDA**: hold, no add, no trim — base-case DCF gap ~10.6% overvalued, essentially flat vs. last cycle.
**OMCL**: hold, no add from this desk's chair — DCF discount at a new widest-recorded level (~60.1%). The DCA plan's own profit-threshold gate remains the actual timing mechanism.
**VTI / VXUS**: hold, no valuation view — diversified core-sleeve holdings, not DCF calls. Defer to BR/BW on drift-band status.
**XLE**: hold, no trim, no add on this desk's current model — model staleness now flagged for a fifth-plus consecutive cycle; a full ground-up rebuild is this desk's top standing priority, escalated again this run.
**GEHC**: hold, no add — mildly-undervalued read widens slightly to ~3.4%. Not a sizing signal for a position already at its intended quarter-size weight; watch the $65 structural-break revisit line (state.md), currently ~$2.88 away.
**IONQ** *(not held)*: hard pass on a fully rebuilt, segment-based DCF — ~99%+ downside to base case, ~96% even under a generous bull case. Rule 6 (a BW risk read) has never opened on this name and remains the independent, separate gate. Not actionable regardless of today's Investor Day outcome.

---

Sources:
- [IonQ | IonQ (NYSE: IONQ) Raises 2026 Full-Year Revenue Guidance](https://www.ionq.com/news/ionq-announces-increased-full-year-2026-financial-outlook-following-skywater-acquisition)
- [IonQ raises 2026 revenue guidance to $450-460 million (Investing.com)](https://www.investing.com/news/company-news/ionq-raises-2026-revenue-guidance-to-450460-million-93CH-4891440)
- [Why Is IonQ Stock Soaring Tuesday? (Benzinga)](https://www.benzinga.com/markets/tech/26/09/61656578/ionq-raises-2026-outlook-after-skywater-deal)
- [IonQ, Inc. - Form 8-K - FY2026 (SEC)](https://www.sec.gov/Archives/edgar/data/0001824920/000119312526384388/ionq-ex99_1.htm)
- [IonQ posts Q2 2026 loss on warrant charges (StockTitan, 10-Q)](https://www.stocktitan.net/sec-filings/IONQ/10-q-ion-q-inc-quarterly-earnings-report-78417cbb5121.html)
- [IONQ Shares Outstanding (GuruFocus)](https://www.gurufocus.com/term/Shares+Outstanding/NYSE:IONQ)
- [IonQ Reports Record Q2 2026 Financial Results (Quantum Computing Report)](https://quantumcomputingreport.com/ionq-reports-record-q2-2026-financial-results-revenue-soars-287-to-80-1m-full-year-guidance-raised-to-290m/amp/)
- [SkyWater Technology Reports Fourth Quarter and Full Fiscal Year 2025 Results](https://ir.skywatertechnology.com/news/news-details/2026/SkyWater-Technology-Reports-Fourth-Quarter-and-Full-Fiscal-Year-2025-Results/default.aspx)
- [IonQ to Acquire SkyWater Technology (SkyWater Technology)](https://www.skywatertechnology.com/ionq-to-acquire-skywater/)
- [IonQ Completes Acquisition of SkyWater Technology (Quantum Computing Report)](https://quantumcomputingreport.com/ionq-completes-acquisition-of-skywater-technology-establishing-vertically-integrated-quantum-platform/)
- [Crude Oil Price Today (Fortune)](https://fortune.com/article/price-of-oil-09-08-2026/)
- [Check out Chevron Corporation's stock price (CVX) in real time (CNBC)](https://www.cnbc.com/quotes/CVX)
