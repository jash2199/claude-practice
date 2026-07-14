# MS DCF Valuation — Investment Banking Valuation Memo
**Date: 2026-07-14 (Tuesday, mid-morning update)**

*Persona: VP-level valuation coverage for the "Claude Robinhood Trader" experiment. Coverage this run: (1) NVDA — the trader's sole current holding (brief update, no material change since 7/13), and (2) Omnicell (OMCL) — the new #1 pick from analysts/gs-stock-screener.md's 2026-07-14 report (full new build; first time this name has been run through this model — MU, last cycle's #1, has since dropped out of GS's top 3).*

---

## Verdicts (top line)

| Ticker | Current Price | DCF Fair Value (base case) | Verdict |
|---|---|---|---|
| **NVDA** | ~$207.57 (7/14) | ~$150.6 (WACC 11%, g 3%) — unchanged model | **OVERVALUED — ~27% downside to DCF fair value.** No material change from the 7/13 read; price is essentially flat and nothing this run moves the fundamental model. |
| **OMCL** | $45.08 (7/14) | ~$56.35 (WACC 9%, g 3%) | **MODESTLY UNDERVALUED — ~25% upside to DCF fair value.** First full build on this name. Unlike MU last cycle, the math here actually supports GS's bullish call — this is a case where the valuation discipline and the momentum case agree, not a rebuttal.

**Bottom line for the trader:** NVDA remains a hold-for-other-reasons position, not an add — the DCF gap hasn't closed. OMCL is the first name in several cycles where my model and GS's screener land in the same place directionally: cheap-ish, low-beta, cash-rich, guidance raised, and priced well below what a conservative 5-year build supports. This doesn't override the macro-timing entry-discipline question that's been running in state.md (that's the trader's call, not mine) — but on valuation grounds alone, OMCL clears the bar in a way MU never did.

---

## 1. NVIDIA (NVDA) — brief update, model unchanged

### What changed since 7/13
Not much. Price is essentially flat (~$208 → ~$207.57). One incremental data point worth logging but not model-moving: Nvidia is reportedly tightening AI chip sales to Asian customers via a new compliance "white list," excluding more than half of its previous neo-cloud customer base, particularly affecting resellers rather than direct hyperscaler demand. This is directionally consistent with the China/export-control downside risk I've already flagged and partially priced out of the base case since 7/10 — it's a narrower addressable customer base at the margin, not a change to the core US-hyperscaler revenue path my FY2027E-FY2031E build is built on. Also unchanged: no earnings print (next catalyst 8/26), the "Kyber" server cabinet slip to 2028 (already known), and continued broad chip-sector volatility (sentiment/multiple compression, not NVDA-specific fundamentals).

### Verdict: **OVERVALUED, unchanged**
Same 5-year build (FY2027E revenue $380B, FCF margin path 56%→48%, WACC 11% base, g 3% base) against today's $207.57 spot:

| WACC \ Terminal g | 2.0% | 3.0% | 4.0% |
|---|---|---|---|
| 9% | $178.6 | $202.2 | $235.2 |
| 10% | $155.7 | $172.7 | $195.5 |
| **11% (base)** | $137.8 | **$150.6** | $167.1 |
| 12% | $123.6 | $133.4 | $145.8 |
| 13% | $111.9 | $119.7 | $129.2 |

Base case ($150.6) implies **~27.4% downside** from $207.57 — essentially identical to the 7/13 read (~28% downside from $208). No change to the verdict or the key assumptions that could break the model (margin durability is the upside break; China export policy, Blackwell-Rubin execution, and HBM supply bottleneck remain the downside breaks — see 7/10/7/13 reports via git history for the full writeup).

---

## 2. Omnicell (OMCL) — full new build

### Snapshot
- Current price: **$45.08** (7/14/26, day range $44.75-$46.78)
- Market cap: ~$2.05-2.11B; shares outstanding ≈ **46.8M**
- Q1 2026 revenue $309.9M, up from $269.7M YoY (+14.9%); FY2025 full-year revenue was **$1.185B** (+7% YoY)
- **FY2026 guidance (raised after Q1 beat): total revenue $1.215B-$1.255B (midpoint $1.235B, +4.2% over FY2025), non-GAAP EBITDA $153M-$168M (~12.6%-13.3% margin), non-GAAP EPS $1.80-$2.00.** Note the guidance-implied full-year growth rate (~4.2%) is well below Q1's standalone +14.9% YoY print — either a genuinely tougher back half, or conservative guidance with room to raise again (Omnicell has a recent history of guiding low and beating).
- Margin trend is the real story here: non-GAAP gross margin ~46% in Q1 2026 (up from 42% a year ago); adjusted operating margin 5.4% (+2pp YoY); FCF margin 12.5% in Q1 (up from 5.5% Q1 2025) — management explicitly guiding for margin expansion to outpace revenue growth.
- Balance sheet (3/31/26): cash & equivalents $239M, total debt $168M → **net cash ~$71M**; $350M undrawn revolver, no near-term liquidity concerns; convertible notes due 2025 already repaid.
- Beta: **0.78** — notably the lowest-beta name in this book by a wide margin (vs. NVDA ~1.7-2x, MU ~2.1-2.5x per prior builds), consistent with the "decoupled from the chip-sector selloff" behavior every analyst in this book has independently observed over the past week.
- Analyst backdrop: consensus price targets cluster $49-70 (avg ~$51-57 depending on source), consensus rating Buy. Independent third-party DCF/FCFE reads I could find (Simply Wall St, a 2-stage FCFE model) land at **$53.90-$54.16** — I built my own model independently rather than anchoring to those, but it's a useful sanity check that my own number (below) lands in the same neighborhood rather than a wildly different one.

### 5-year revenue projection
Base year FY2026E revenue ≈ $1.235B (guidance midpoint).

| FY | Revenue ($B) | YoY growth | Basis |
|---|---|---|---|
| FY2027E | $1.334 | +8% | Reacceleration off FY26's conservative guide base as the healthcare-tech sector-rotation tailwind (per GS's 7/13-14 reporting on the Bloomberg/Russell-rebalancing piece) and hospital capex cycle support bookings; still below Q1's standalone +14.9% pace since that's an easy comp, not a sustainable run-rate |
| FY2028E | $1.427 | +7% | Continued steady mid-hospital-market penetration; medication-management automation remains a multi-year replacement-cycle category, not a one-time pop |
| FY2029E | $1.513 | +6% | Growth normalizes toward the category's structural mid-single-digit trend as the current bookings cohort matures into revenue |
| FY2030E | $1.589 | +5% | Approaching a mature, hospital-capex-linked growth rate |
| FY2031E | $1.668 | +5% | Terminal-adjacent; no assumption of a step-change catalyst in the model |

### Operating margin / FCF margin — the crux of the case
Unlike NVDA/MU, where the model question is "how much does peak margin mean-revert," OMCL's is the opposite: management is guiding for genuine, structural margin **expansion** off a historically thin base (5.4% adjusted operating margin, 12.5% FCF margin in Q1 — both up meaningfully YoY on mix shift toward higher-margin services/software and cost discipline). I'm modeling continued expansion but *not* extrapolating the elevated Q1 FCF print flat, since Q1 working-capital timing can flatter a single quarter:

| FY | FCF margin | FCF ($M) | Rationale |
|---|---|---|---|
| FY2027E | 7% | $93.4 | Below Q1's 12.5% print — Q1 benefited from working-capital timing that won't repeat every quarter; full-year FY26 guide implies ~12.9% EBITDA margin, and FCF should sit structurally below EBITDA once capex/cash taxes are netted out |
| FY2028E | 8% | $114.2 | Gross-margin mix shift (46% and rising) continues flowing through; opex leverage improves as revenue scales |
| FY2029E | 9% | $136.2 | Continued execution on management's "margin expansion outpaces revenue growth" guidance |
| FY2030E | 10% | $158.9 | Approaching a mature SaaS/med-tech-hybrid margin profile |
| FY2031E | 11% | $183.5 | Still conservative relative to best-in-class med-tech peers (many run FCF margins in the mid-teens to 20s at maturity) — deliberately not assuming OMCL gets there within this window |

### WACC
- Risk-free rate (10Y UST, 7/14): 4.6%
- Beta: 0.78 (sourced; notably below-market, consistent with the observed low correlation to this week's chip-sector/geopolitical selloff)
- Equity risk premium: ~4.6% (same assumption used across this book's other builds for consistency)
- Cost of equity = 4.6% + 0.78 × 4.6% ≈ **8.2%**
- Debt: $168M vs. ~$2.1B market cap (D/V ≈ 7%); after-tax cost of debt ≈ 3.2% (assumed ~4% pre-tax on convertible/term debt, 21% tax rate)
- Blended WACC ≈ 0.93 × 8.2% + 0.07 × 3.2% ≈ **7.8%**, rounded up modestly for small-cap illiquidity — **WACC range used: 7%-11%, base case 9%**

### Sensitivity table — fair value per share

| WACC \ Terminal g | 2.0% | 3.0% | 4.0% |
|---|---|---|---|
| 7% | $70.30 | $85.26 | $110.19 |
| 8% | $58.30 | $67.90 | $82.31 |
| **9% (base)** | $49.73 | **$56.35** | $65.60 |
| 10% | $43.33 | $48.11 | $54.50 |
| 11% | $38.36 | $41.95 | $46.56 |

Net cash of ~$71M added to enterprise value; 46.8M shares outstanding. Note the range is wide (as it is for every name in this book — terminal value dominates any 5-year DCF), but 11 of the 15 cells sit at or above the $45.08 spot price, and the base case sits comfortably in the same $50-60 neighborhood as the independent third-party DCF reads cited above ($53.90-$54.16) and the low end of the analyst price-target range ($49-70). This is a much tighter, more mutually-reinforcing cluster of independent estimates than I typically see in this book's coverage — a genuine signal, not just one aggressive model.

### DCF vs. market price
Base case ($56.35) implies **~25% upside** from the current $45.08 price.

### Verdict: **MODESTLY TO MODERATELY UNDERVALUED**
This is a different kind of call than NVDA or MU. Those names required disputing a market price that was capitalizing peak-cycle conditions as permanent. OMCL is the opposite situation: the market is pricing a name that just raised full-year guidance, is running net cash-positive with a fortress balance sheet, has the lowest beta in this book by a wide margin, and is executing on a credible margin-expansion story — at a price that a *conservative* (not aggressive) 5-year build still clears by a meaningful margin. I deliberately built the margin path below the Q1 print and below best-in-class med-tech peer margins to stress-test my own optimism, and the stock still comes out undervalued in the base case.

### Verdict vs. GS's screener
GS has had OMCL as its #1 idea for going on two weeks, citing Strong Buy consensus, a Q1 beat, and — as of the 7/13-14 update — a structural healthcare-sector-rotation tailwind (Russell rebalancing, Bloomberg's "healthcare looks ready to star in rotation trade" framing). **This is the first cycle in this persona's coverage history where the DCF result actually agrees with GS's conviction rather than pushing back on it.** I want to be clear that isn't me being less rigorous here — the assumptions above are, if anything, conservative relative to what OMCL's own recent print and guidance would support (Q1 FCF margin was already 12.5%; I'm modeling FY2027E at 7%, roughly half that). The valuation discipline this persona exists to provide isn't "always find a reason to say no" — it's "show the math, whichever way it points." This time it points the same way as the momentum case.

### Key assumptions that could break this model
- **Upside break**: if FY2026's back-half revenue tracks closer to Q1's +14.9% pace than the guided ~4.2% full-year rate (i.e., guidance proves conservative, as it has in recent history), and margin expansion continues at the Q1 rate rather than the more measured path I've modeled, fair value moves meaningfully higher than the $56 base case — plausibly into the $65-85 range shown in the sensitivity grid's upper-left.
- **Downside break**: hospital capital-spending cycles are sensitive to rate policy and health-system budget pressure; a renewed rate-hike cycle (BR's hawkish-Fed thesis, partially offset by this week's cooler CPI print per GS) or a health-system capex pullback would hit bookings before it shows up in trailing revenue, and OMCL doesn't have NVDA/MU-scale pricing power to offset a demand slowdown. Also watch: the "sector-rotation tailwind" thesis is only ~1-2 days old as a sourced narrative (Bloomberg 7/13) — worth confirming it has legs over the next several sessions rather than being a single-article flash-in-the-pan explanation for a move that was already happening for other reasons.
- **Data-quality note**: shares outstanding and market cap figures showed some spread across sources ($1.51B market cap in one stale March-dated pull vs. ~$2.05-2.11B current) — used the more recent, price-consistent figures (46.8M shares × $45.08 ≈ $2.1B) and flagging this per the same standing discipline as prior price-conflict notes in this book.

---

## Cross-check with GS screener (analysts/gs-stock-screener.md, 2026-07-14)
GS ranks OMCL #1 for a ninth-plus consecutive check-in, now with a structural rotation-tailwind rationale layered on top of the original decoupling observation. My DCF doesn't just fail to contradict that — it independently arrives at a similar undervaluation conclusion using a conservative, bottom-up 5-year build rather than a relative/sector-rotation argument. Where I'd add nuance: GS's case leans partly on sentiment/flow (Russell rebalancing, sector rotation) which can reverse quickly; mine is a fundamentals-only view (guidance, margin trajectory, balance sheet) that would hold up independent of whether the rotation narrative persists. The two arguments are complementary, not redundant — worth noting in case the rotation thesis fades before the fundamental case has time to play out.

No fresh BW risk-assessment or BR portfolio-builder reports read this cycle in full detail beyond what's referenced in state.md's run notes — will re-check next run per standing practice.

## Explicit read on trader's NVDA hold
Unchanged from 7/13: the DCF does not support adding to NVDA at ~$207.57, and the existing ~$5 notional position (cost basis $201.40) isn't worth trading out of on valuation grounds alone given the "no trade without a fresh catalyst" discipline already established in state.md. Nothing this run changes that read.

## Explicit read on OMCL as a potential new position
If the trader is weighing GS's #1 pick as the vehicle for deploying idle capital, my model says **yes, on valuation grounds** — a genuine, if modest, first for this persona's coverage of GS's top idea. This is not a valuation veto the way MU was. Whether *today* is the right entry (geopolitical macro-timing, position sizing, the falsifiable trigger framework already running in state.md) is the trader's discipline to apply, not mine — but if that framework's conditions clear, the DCF is not the thing standing in the way this time.
