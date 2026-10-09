# MS DCF Valuation — Investment Banking Valuation Memo
**Date: 2026-10-09 (Friday), ~10:3x ET. First full model build for AVGO (GS's new #1 unvetted ask as of its 2026-10-09 report), alongside a price-roll-only update on the six holdings. No WACC rebuild on the legacy six this run — 10/1's Rf 5.29% input stands (see rate-check note below, same chronic WebSearch-dateline wall every desk has hit all week).**

*Persona: VP-level valuation coverage for the "Claude Robinhood Trader" experiment. Coverage this run: (1) NVDA, (2) OMCL, (3) VTI, (4) VXUS, (5) XLE, (6) GEHC — the six current holdings per state.md's 2026-10-09 ~09:43 ET live Robinhood snapshot (NVDA $231.26, VTI $380.92, VXUS $84.70, OMCL $35.185, XLE $65.365, GEHC $64.785) — plus (7) **AVGO (Broadcom), GS's #1 screen pick as of its 2026-10-09 report**, now that SNDK (10/8, hard pass, -45%/-72%) has been fully adopted and AVGO has been GS's repeated, explicitly-named "single biggest process gap" top ask for multiple weeks running. No live Robinhood access on this desk; per rule 4, state.md's live-verified prices take precedence over WebSearch for the six holdings.*

---

## Verdicts (top line) — read this first

| Ticker | Current Price | Fair Value | Gap | Verdict |
|---|---|---|---|---|
| **AVGO** (not held, GS #1 — first-ever MS build) | ~$362.51 (carryforward, undated but repeatedly best-sourced per GS; today's WebSearch again returned a $350-378 unreconciled spread) | **$238.6/sh** (bull case) to **$178.8/sh** (base case) — see below | **-34.2% to -50.7%** | **OVERVALUED, bluntly — even the generous bull case falls well short** |
| **XLE** | $65.365 (was $64.69) | $58.9/sh (WACC 11.09%, Brent $76/bbl — unchanged, see note) | **-9.89%** | **OVERVALUED**, a fifth straight widening |
| **NVDA** | $231.26 (was $234.46) | $192.0 (WACC 11.59%) | **-16.98%** | **OVERVALUED**, narrowing further on this week's pullback |
| **GEHC** | $64.785 (was $64.31) | $63.9/sh (WACC 9.09%) | **-1.37%** | **Slightly overvalued** — back out of near-parity, inside noise band |
| **OMCL** | $35.185 (was $34.995) | $49.1/sh (WACC 9.59%) | **+39.55%** | **UNDERVALUED — still the widest mispricing on the book**, essentially flat |
| **VTI** | $380.92 | N/A | N/A | **HOLD BY CONSTRUCTION** |
| **VXUS** | $84.70 | N/A | N/A | **HOLD BY CONSTRUCTION** |

**Bottom line for the trader:**

1. **AVGO is this report's headline, and the answer to GS's long-repeated priority ask is a clean, hard pass — wider than SNDK's.** Even crediting management's own high-end guidance (AI chip revenue reaching $115B in FY27, sustained ~66% non-GAAP operating margins) fair value tops out around **$238.6/share against a ~$362.51 live reference price — a -34.2% gap**. A more disciplined base case using the low end of management's own $100-115B FY27 AI-chip guidance range and modest margin compression collapses fair value to **~$178.8/share, a -50.7% gap** — wider than SNDK's -45%/-72% spread was narrow at its low end, and roughly in the same zone at the high end. GS's own sell-side-sourced average target (~$504.93, with some outliers to $550) is itself not a cash-flow framework — exactly the screener-vs-valuation tension this desk exists to flag, same dynamic as SNDK and MRVL before it.
2. **XLE just set a new worst-ever reading for a fifth consecutive report**, still on the unmoved $76/bbl Brent assumption flagged as overdue since 7/27. A fresh attempt to refresh that input this run was not separately re-run (no material new oil-price signal surfaced in this run's AVGO-focused research); the rebuild remains blocked on reliable same-day Brent data, not on priority — see legacy section below.
3. **NVDA's gap narrowed further on this week's pullback but the story hasn't changed** — fair value untouched since 9/23, gap easing purely on price to -16.98%. No rule treats price drift as a trigger.
4. **GEHC flipped back from last report's near-parity (-0.64%) to a modest -1.37% overvalued reading** on today's small bounce — still well inside this model's noise band (sub-2% swings have round-tripped sign twice in the last week), not a re-rating.

No trade recommended off this report (research-only mandate, as always).

---

## Rate-check note (Rf input)

Fresh WebSearch this run for a same-day 10-year Treasury print again hit the same wall every desk has flagged for over a week: one source attributed to the U.S. Treasury cited a 10/1 close of 5.24% (down from 5.29%), while another source's weekly reading for late July showed 4.66-4.69% — a gap too large to be a normal daily move, suggesting at least one of these figures is mis-dated or mis-scraped. No independently confirmable 10/8 or 10/9 print surfaced. Per rule 4, this doesn't meet the bar for a rebuild — **Rf 5.29% stands, fair values on the legacy five non-ETF holdings stay exactly as set 10/1, only live prices roll forward.**

---

## 1. Broadcom (AVGO) — first-ever DCF build, GS's new #1 pick

### Why now, and why two scenarios
AVGO has been GS's top-ranked unvetted ask for weeks, explicitly named in its 10/9 report as "this sheet's single biggest process gap" given 27-of-30 sell-side Buy ratings, a ~$1.7-1.8T market cap, and two dated catalysts ahead (NVDA's 11/18 print as a read-through on AI capex, and AVGO's own 12/9 print). Rule 6 (MS DCF + BW risk read required before any new name is investable) is the only thing that has kept this gated. Broadcom's fiscal Q3 2026 (ended 8/2/26) revenue hit **$29.6B, +86% YoY**, with AI semiconductor revenue of **$16.7B**; GAAP net income was **$13.1B** (+215% YoY); free cash flow was **$13.7B, 46% of revenue**. Management has raised its FY2027 AI-chip-revenue outlook from an initial "line of sight to $100B" framing toward a more recent **$100-115B** range, backed by a **$73B AI backlog** (custom accelerators + networking) it expects to deliver over the next 18 months.

The honest problem for a DCF: this is a step-change in scale (total company revenue roughly doubling in two years) that the market is already pricing aggressively — sell-side average targets (~$505, GS's own figure) assume the guidance lands cleanly and the multiple holds. This desk built two scenarios: a bull case that credits management's guidance at the high end with margins holding, and a base case using the low end of the same guidance range with modest margin normalization — deliberately not building a true bear case, since even the more conservative of these two already implies a hard pass.

### Inputs (common to both scenarios)
- **FY2026E total revenue (implied from reported + guided quarters):** Q1 $19.31B + Q2 $22.2B + Q3 $29.6B + Q4 guide $34.8B ≈ **$105.9B** (own arithmetic from company-reported/guided figures, not a published consensus total — flagged as a data-quality caveat)
- **Shares outstanding:** ~4.90B (diluted, blending a 10/5 Google Finance spot count of ~4.77B with management's guided Q4 non-GAAP diluted count of ~4.94B — used the higher, more conservative-for-fair-value-per-share figure)
- **Balance sheet:** cash & equivalents **$24.0B** (Q3 10-Q-sourced); total debt **~$57.2B** (aggregator-sourced, flagged by the source itself as AI-extracted and unverified against the 10-Q — this desk could not independently confirm) → **net debt ≈ $33.2B**
- **Beta:** 1.4 (sources ranged from 1.24 to 1.65 across different windows, with one clearly erroneous -0.06 outlier discarded; 1.4 is this desk's own midpoint estimate, not a single clean consensus figure)
- **Cost of equity (CAPM):** Rf 5.29% (book-standing input, see rate-check note above) + 1.4 × 5.0% ERP = **12.29%**
- **Cost of debt (pre-tax):** ~4.5% (investment-grade issuer); effective tax rate: 21% (standard US corporate rate, consistent with this book's convention; Broadcom's actual effective rate has historically run lower, which would modestly understate FCF in both scenarios)
- **Capital structure:** market-value weights — at a ~$1,776B market cap (4.90B sh × $362.51) vs. ~$57.2B debt, D/(D+E) ≈ 3.1%
- **WACC = 0.969 × 12.29% + 0.031 × 4.5% × (1-0.21) ≈ 11.91% + 0.11% ≈ 12.02%**
- **Terminal growth (g):** 3.0%, consistent with this book's other names
- **FCF build:** Broadcom is fabless/asset-light (Q3 capex was only ~1.7% of revenue) relative to this book's other semis names — modeled combined capex/D&A/NWC drag at a lower **4% of revenue (base) / 3.5% of revenue (bull)** than SNDK's fab-heavy 5%, reflecting the genuinely different capital intensity

### Scenario A — Base case (low end of management's own $100-115B FY27 AI-chip guidance, margins normalize modestly)

AI-chip revenue path: FY27 $100B, then decelerating growth (+20%, +12%, +8%, +6%) to FY31. Non-AI (legacy semi + software/VMware) run-rate ≈ $51.6B annualized off Q3's implied pace, growing modestly (6% → 3%).

| | FY27E | FY28E | FY29E | FY30E | FY31E |
|---|---|---|---|---|---|
| AI-chip revenue ($B) | 100.0 | 120.0 | 134.4 | 145.2 | 153.9 |
| Non-AI revenue ($B) | 54.0 | 56.7 | 59.0 | 60.8 | 62.6 |
| Total revenue ($B) | 154.0 | 176.7 | 193.4 | 206.0 | 216.5 |
| YoY growth | +45% | +15% | +9.5% | +6.5% | +5% |
| Non-GAAP op margin | 64% | 63% | 62% | 61% | 60% |
| EBIT ($B) | 98.56 | 111.32 | 119.91 | 125.66 | 129.90 |
| NOPAT ($B) | 77.86 | 87.94 | 94.73 | 99.27 | 102.62 |
| Less: capex/D&A/NWC drag (4% rev, $B) | 6.16 | 7.07 | 7.74 | 8.24 | 8.66 |
| FCF ($B) | 71.70 | 80.87 | 86.99 | 91.03 | 93.96 |
| PV factor @12.02% | 0.8927 | 0.7968 | 0.7112 | 0.6349 | 0.5668 |
| PV of FCF ($B) | 64.00 | 64.42 | 61.86 | 57.80 | 53.24 |

Sum of PV(FCF, FY27-31) = **$301.3B**
Terminal value (FY31 FCF × 1.03 / (0.1202-0.03)) = $96.78B / 0.0902 = **$1,073.0B**; PV = **$608.2B**
**Enterprise value ≈ $909.5B** → less net debt $33.2B → **Equity value ≈ $876.3B** → ÷ 4.90B shares = **≈$178.8/share**

**Gap vs. $362.51 = -50.7% overvalued.**

### Scenario B — Bull case (high end of guidance, margins hold, lighter capex drag)

AI-chip revenue path: FY27 $115B, decelerating (+25%, +15%, +10%, +8%). Non-AI revenue growing slightly faster (6%/5%/4%/3%) as legacy semi recovers alongside the AI ramp.

| | FY27E | FY28E | FY29E | FY30E | FY31E |
|---|---|---|---|---|---|
| Total revenue ($B) | 170.0 | 202.0 | 226.5 | 245.4 | 261.8 |
| YoY growth | +60.5% | +18.8% | +12.1% | +8.3% | +6.7% |
| Non-GAAP op margin | 66% | 66% | 66% | 66% | 66% |
| EBIT ($B) | 112.20 | 133.32 | 149.49 | 161.96 | 172.79 |
| NOPAT ($B) | 88.64 | 105.32 | 118.10 | 127.95 | 136.50 |
| Less: capex/D&A/NWC drag (3.5% rev, $B) | 5.95 | 7.07 | 7.93 | 8.59 | 9.16 |
| FCF ($B) | 82.69 | 98.25 | 110.17 | 119.36 | 127.34 |
| PV of FCF ($B) | 73.80 | 78.27 | 78.35 | 75.79 | 72.17 |

Sum of PV(FCF) = **$378.4B**. Terminal value = $131.16B/0.0902 = **$1,454.1B**; PV = **$823.9B**
**Enterprise value ≈ $1,202.3B** → less net debt $33.2B → equity ≈ $1,169.1B → ÷ 4.90B = **≈$238.6/share**

**Gap vs. $362.51 = -34.2% overvalued.**

### Sensitivity table (bull case, WACC × terminal growth, fair value $/sh)

| Scenario | WACC -1pp (11.02%) | WACC base (12.02%) | WACC +1pp (13.02%) | g +0.5pp (base WACC) | g -0.5pp (base WACC) |
|---|---|---|---|---|---|
| Fair value | $270.5 | **$238.6** | $213.3 | $249.4 | $229.1 |

Even the single most favorable cell in this table — a full point of WACC relief stacked on the already-aggressive bull case — tops out at **$270.5/share, still -25.4% below the live $362.51 print.** There is no combination of inputs this desk is willing to defend that closes this gap.

### Verdict: OVERVALUED, bluntly
GS's case for AVGO is real: 27-of-30 sell-side Buy ratings, a genuine AI-backlog-driven re-rating, and two dated catalysts ahead are not hype. The disagreement is about price. The market at ~$362.51/share is pricing in AI-chip revenue growth and margin durability that sits at or above even this desk's bull case — which already credits the top of management's own guidance range. A reverse-engineered check: closing the gap on the bull case's cash flows alone would require a WACC near 8-9%, implying the market is discounting AVGO closer to a mega-cap-software multiple than a semiconductor name mid-capex-cycle with real customer-concentration risk (a handful of hyperscaler relationships). That is exactly the setup this desk exists to flag. **Hard pass at ~$362.51; this desk would revisit only on a substantial pullback or the 11/18 (NVDA) / 12/9 (AVGO's own print) catalysts delivering guidance that independently re-rates the out-year bridge, not before.**

---

## 2. Six holdings — price-roll update only (fundamentals/WACC unchanged since 9/23 build / 10/1 rebuild)

| Ticker | Fair Value (unchanged) | Price (was → now) | Gap (was → now) | Verdict |
|---|---|---|---|---|
| XLE | $58.9 (WACC 11.09%, Brent $76/bbl) | $64.69 → **$65.365** | -9.0% → **-9.89%** | **OVERVALUED, new worst-ever reading, fifth straight widening** |
| NVDA | $192.0 (WACC 11.59%) | $234.46 → **$231.26** | -18.1% → **-16.98%** | **OVERVALUED**, easing further on this week's pullback |
| GEHC | $63.9 (WACC 9.09%) | $64.31 → **$64.785** | -0.64% → **-1.37%** | **Slightly overvalued**, back out of near-parity, inside noise band |
| OMCL | $49.1 (WACC 9.59%) | $34.995 → **$35.185** | +40.3% → **+39.55%** | **UNDERVALUED**, still the book's widest discount, essentially flat |
| VTI | N/A | $380.92 | N/A | HOLD BY CONSTRUCTION |
| VXUS | N/A | $84.70 | N/A | HOLD BY CONSTRUCTION |

**XLE's Brent assumption remains overdue, now flagged for a fifth straight report.** This run's research focused on the new AVGO build; no dedicated same-day Brent WebSearch was separately re-run after last run's contradictory, unusable results (three mutually-inconsistent figures from the same aggregator plus an unconfirmable futures-page number). The $76/bbl assumption stays exactly as it has since 7/27 until a reliable print surfaces — this is now the single most overdue input on this desk's book and should be the dedicated focus of the next run that isn't absorbing a new-name build.

**GEHC's small flip back to slightly overvalued (-1.37% from -0.64%) is noise, not signal** — a ~$0.47 price move against an unchanged $63.9 fair value. The 10/28 earnings print (confirmed by JPM, 19 days out) remains the next thing that could move this model for real reasons.

---

## Key assumptions that could break these models

**AVGO-specific:**
- **The FY27 AI-chip-revenue landing point is the single biggest swing factor, full stop.** Management's own guidance spans $100-115B for FY27 — a 15% range that alone separates this desk's base and bull cases. The 12/9 AVGO print (and 11/18's NVDA print as an AI-capex read-through) are the two nearest events that could move this materially in either direction; a confirmed beat-and-raise toward the high end, or evidence the $73B backlog is pulling forward rather than adding demand, would each shift the calculus.
- **Beta (1.4) is this desk's own estimate, not a clean consensus figure** — sources ranged from 1.24 to 1.65. A lower beta (1.2) would lower WACC to roughly 11.1% and lift the bull-case fair value toward ~$265/share — still a -27% gap, directionally unchanged.
- **Total debt (~$57.2B) comes from a single aggregator that flagged its own figure as AI-extracted and unverified** — this desk could not independently confirm against the 10-Q this run. Net debt would need to be overstated by over $800B (i.e., essentially impossible) to close this gap through the balance-sheet bridge alone; this is a data-quality flag, not a verdict-moving risk.
- **The 4%/3.5% capex/D&A/NWC drag assumption reflects Broadcom's genuinely lower capital intensity (fabless model, Q3 capex only ~1.7% of revenue) relative to this book's fab-heavy names** — if AI-backlog fulfillment requires Broadcom to fund more packaging/test capacity or working capital than modeled, both scenarios' fair values would compress further, widening the gap.
- **Price itself is, again, the weakest input.** The ~$362.51 reference is a repeated carryforward (this desk's and GS's independent searches both returned unreconciled same-day spreads, $350-378 this run) — no live Robinhood terminal exists for an unheld name. A materially lower true price would narrow the percentage gap, but closing it fully would require a price near or below this desk's own bull-case fair value, not a modest pullback.

**Legacy five non-ETF holdings (standing, unchanged in substance since 10/1):**
- **Risk-free rate (Rf 5.29%, set 10/1).** Now nine calendar days without an independently confirmable same-day print; this run's search returned a 10/1-dated 5.24% figure alongside a mid-summer reading too far off to reconcile, reinforcing rather than resolving the standing conflict. GEHC and XLE have the thinnest/most sensitive gaps on the book.
- **XLE/Brent base case ($76/bbl)** — unchanged since 7/27, now the subject of five straight widening-gap flags from this desk; not independently re-attempted this run given the AVGO build's research load. Top priority for the next cycle with bandwidth.
- **GEHC's net-debt/tariff assumptions** (9/23 build) — unmoved; GEHC's confirmed 10/28 print (~19 days out) is the nearest scheduled catalyst on the book.
- **NVDA's growth/margin trajectory vs. FY28 guidance embedded in the build** — unchanged since 9/23; next print ~11/18, which doubles as AVGO's AI-capex read-through catalyst.
- **OMCL's margin-recovery assumption behind the $49.1 fair value** — unchanged; the 10/29-30 print still the thesis-confirming event.

---

## Cross-check with GS screener (analysts/gs-stock-screener.md, 2026-10-09 ~09:4x ET report)

**Direct disagreement on AVGO, stated plainly as the persona's stance requires.** GS calls AVGO its top ask, citing 27-of-30 sell-side Buy ratings, an average target near $505, and two dated catalysts (11/18, 12/9) — this desk doesn't dispute the underlying business momentum (the $73B backlog and FY27 AI guidance are real and well-corroborated). The disagreement is purely about price: even this desk's most generous defensible bull case lands 34% below the live reference price, and the base case lands over 50% below. This is a wider gap than SNDK's at the bull-case end and in the same range at the base-case end — AVGO joins MU, FRO, MRVL, and SNDK as this book's fifth DCF-driven hard pass. GS's rule-6 ask, repeatedly named as this sheet's biggest process gap, is now answered, and the answer is no.

No disagreement with GS on NVDA, GEHC, XLE, or OMCL direction — GS's 10/9 report carries forward the same live-price inputs this desk used (state.md's 10/9 09:43 ET snapshot) and raises no new fundamental flag on any of the four held names.

## Explicit read on trader's current positions (all six held) plus GS's #1 pick

**AVGO** (GS's #1 pick, not held): hard pass, gap ≈ **-34.2% (bull case) to -50.7% (base case)**. Not investable at ~$362.51 under either scenario.
**XLE**: overvalued, gap ≈ -9.89% (was -9.0%), new worst-ever reading, fifth straight widening — hold, no add, Brent assumption still overdue.
**NVDA**: overvalued, gap ≈ -16.98% (was -18.1%), easing further on price alone — hold, no add, no trim; BR's no-new-cash instruction stands.
**GEHC**: slightly overvalued, gap ≈ -1.37% (was -0.64%) — inside noise band, not a sell or add trigger under any standing rule.
**OMCL**: undervalued, gap ≈ +39.55% (was +40.3%, essentially flat) — still the widest mispricing on the book by percentage; DCA gate unaffected, per state.md ~$1.82 from firing this morning.
**VTI / VXUS**: hold, no valuation view — defer to BR/BW.

**Standing flag for the next run:** this desk's five-name non-ETF book remains conditioned on the 10/1 WACC rebuild (Rf 5.29%) holding — now nine calendar days without an independently confirmable same-day print. XLE's Brent assumption is now the single most overdue item on this book (fifth straight widening without a refresh attempt this run) and should be the dedicated focus of the next run with bandwidth to do so. AVGO's model is new and its two biggest sources of uncertainty (the FY27 AI-chip landing point within management's own $100-115B range, and the reference price's own freshness) are both worth revisiting once the 11/18/12/9 catalysts land or a live Robinhood-quality quote becomes available.

---

Sources:
- [Broadcom Inc. Announces Third Quarter Fiscal Year 2026 Financial Results — SeekingAlpha/PR](https://seekingalpha.com/pr/20639031)
- [Broadcom Inc. - Form 8-K - FY2026 (Q3 exhibit) — SEC](https://www.sec.gov/Archives/edgar/data/0001730168/000173016826000076/avgo-08022026x8kxex99.htm)
- [Broadcom Inc. - Form 8-K - FY2026 (Q1/Q2 exhibit) — SEC](https://www.sec.gov/Archives/edgar/data/0001730168/000173016826000051/avgo-05032026x8kxex99.htm)
- [Broadcom Q3 Revenue Reaches $29.6 Billion as GAAP Net Income Hits $13.1 Billion — QuiverQuant](https://www.quiverquant.com/news/Broadcom+Q3+Revenue+Reaches+%2429.6+Billion+as+GAAP+Net+Income+Hits+%2413.1+Billion)
- [Broadcom's AI Chip Revenue Just Doubled Year Over Year and the CEO Says $100 Billion Is Coming in 2027 — TIKR](https://www.tikr.com/blog/broadcoms-ai-chip-revenue-just-doubled-year-over-year-and-the-ceo-says-100-billion-is-coming-in-2027)
- [Broadcom Stock Locks In Six AI Customers and Eyes $100 Billion in 2027 Chip Revenue — TIKR](https://www.tikr.com/blog/broadcom-stock-locks-in-six-ai-customers-and-eyes-100-billion-in-2027-chip-revenue)
- [Broadcom Shares Jump 3% as AI Revenue Outlook Soars to $115B — Sentisense](https://app.sentisense.ai/stories/broadcom-shares-jump-3-percent-as-ai-revenue-outlook-soars-to-115b-09082026)
- [We're Upgrading Our Broadcom Price Target and Rating — TheStreet Pro](https://wp.thestreetpro.com/were-upgrading-our-broadcom-price-target-and-rating/)
- [Citi Names Broadcom Stock Top Pick — Yahoo Finance](https://finance.yahoo.com/markets/stocks/articles/citi-names-broadcom-stock-top-191300964.html)
- [Google Finance — AVGO:NASDAQ](https://www.google.com/finance/quote/AVGO:NASDAQ)
- [Broadcom (AVGO) — TipRanks Statistics](https://www.tipranks.com/stocks/mx:avgo/statistics)
- [Mortgage News Daily — US Treasury Yield Curve and Data](https://www.mortgagenewsdaily.com/treasury/10yr)
- [10 Year Treasury Rate — YCharts](https://ycharts.com/indicators/10_year_treasury_rate)
- Internal: trading-experiment/state.md (Balance history through 10/9 ~09:43 ET), analysts/gs-stock-screener.md (10/9 ~09:4x ET report), this desk's own 10/1, 10/7, and 10/8 reports (git history) for the legacy holdings' full WACC-rebuild methodology and FCF builds
