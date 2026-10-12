# MS DCF Valuation — Investment Banking Valuation Memo
**Date: 2026-10-12 (Monday), ~10:13 ET. First full model build for AMD (GS's new #1 unvetted ask as of its 2026-10-12 report, now rule-14 escalated after four consecutive GS reports naming it), alongside a price-roll-only update on the six holdings. No WACC rebuild on the legacy six this run — 10/1's Rf 5.29% input stands (see rate-check note below; this run's own fresh search hit the identical chronic dateline wall every desk has now flagged for 5+ weeks).**

*Persona: VP-level valuation coverage for the "Claude Robinhood Trader" experiment. Coverage this run: (1) NVDA, (2) OMCL, (3) VTI, (4) VXUS, (5) XLE, (6) GEHC — the six current holdings per state.md's 2026-10-12 ~09:39 ET live Robinhood snapshot (NVDA $228.2145, VTI $382.195, VXUS $84.62, OMCL $36.00, XLE $66.23, GEHC $65.88) — plus (7) **AMD, GS's #1 screen pick as of its 2026-10-12 report**, now that AVGO (10/9, hard pass, -34.2%/-50.7%) has been fully adopted and GS escalated AMD past its own rule-14 "repeated ask needs a decision" threshold. No live Robinhood access on this desk; per rule 4, state.md's live-verified prices take precedence over WebSearch for the six holdings.*

---

## Verdicts (top line) — read this first

| Ticker | Current Price | Fair Value | Gap | Verdict |
|---|---|---|---|---|
| **AMD** (not held, GS #1 — first-ever MS build) | ~$600/sh (carryforward estimate — no reliable live pull this run; see price note) | **$227.1/sh** (bull case) to **$145.8/sh** (base case) | **-62.2% to -75.7%** | **OVERVALUED, more dramatically than any name on this book — even crediting management's own loftiest long-term targets in full** |
| **XLE** | $66.23 (was $65.365) | $58.9/sh (WACC 11.09%, Brent $76/bbl — unchanged, see note) | **-11.06%** | **OVERVALUED**, a new worst-ever reading, sixth straight widening |
| **NVDA** | $228.2145 (was $231.26) | $192.0 (WACC 11.59%) | **-15.87%** | **OVERVALUED**, narrowing further on continued pullback |
| **GEHC** | $65.88 (was $64.785) | $63.9/sh (WACC 9.09%) | **-3.01%** | **Slightly overvalued** — edging toward the outer edge of the noise band |
| **OMCL** | $36.00 (was $35.185) | $49.1/sh (WACC 9.59%) | **+36.39%** | **UNDERVALUED — still the widest mispricing on the book**, narrowing slightly on price alone |
| **VTI** | $382.195 | N/A | N/A | **HOLD BY CONSTRUCTION** |
| **VXUS** | $84.62 | N/A | N/A | **HOLD BY CONSTRUCTION** |

**Bottom line for the trader:**

1. **AMD is this report's headline, and it is the widest hard pass this desk has ever issued — wider than AVGO, SNDK, MRVL, or MU.** Even a bull case that credits management's full Analyst Day targets (data-center revenue CAGR >60%, non-GAAP operating margin >35%, the $100B-in-five-years data-center goal) plus the OpenAI 6GW deal's growth tailwind tops out around **$227.1/share against a ~$600 reference price — a -62.2% gap**. A more disciplined base case, which still lands the company's own headline $100B 2030 data-center target almost exactly on schedule, collapses fair value to **~$145.8/share, a -75.7% gap.** GS's bull case for the name is real; the disagreement, as always, is about price.
2. **XLE just set a new worst-ever reading for a sixth consecutive report.** Today's +1.77% live move (the book's biggest single-name mover, flagged by both this desk's and GS's reports) pushes the gap to -11.06% on the still-unmoved $76/bbl Brent assumption, now overdue for 11+ consecutive reports.
3. **NVDA's gap narrowed further on continued price weakness** — fair value unchanged since 9/23, gap easing purely on price to -15.87%. No rule treats price drift as a trigger.
4. **GEHC's drift above its fair value continues** — -3.01% (was -1.37%), the first reading this cycle to push meaningfully past this model's historical sub-2% noise band. Not yet a sell signal under any standing rule, but worth flagging as a trend rather than a one-off now.

No trade recommended off this report (research-only mandate, as always).

---

## Rate-check note (Rf input)

Fresh WebSearch this run for a same-day 10-year Treasury print reproduced the identical chronic wall every desk has now flagged for over a week: results topped out at a late-July reading of 4.66-4.69%, with no independently confirmable September or October print surfacing anywhere. Per rule 4, this doesn't meet the bar for a rebuild — **Rf 5.29% stands (set 10/1), now 11 calendar days without a fresh confirmable print.** Used as-is for both the legacy five non-ETF holdings and this run's new AMD build, for internal consistency across the book.

---

## 1. Advanced Micro Devices (AMD) — first-ever DCF build, GS's new #1 pick

### Why now, and why two scenarios
GS has named AMD its top-ranked unvetted ask for four consecutive reports, crossing its own rule-14 "repeated ask needs a decision, not another flag" threshold this run. The case is real: Data Center revenue hit **$6.7B in Q2 2026 (+107% YoY, 58% of total company revenue)** on record total revenue of **$11.54B (+50% YoY, +13% sequential)**; Q3 2026 guidance calls for **~$13.0B (+41% YoY, +13% sequential)** with management flagging Data Center growth to *accelerate* in H2. At its November 2025 Financial Analyst Day, management set long-term (3-5yr) targets of **>35% company revenue CAGR, >35% non-GAAP operating margin, >$20 non-GAAP EPS, >60% data-center revenue CAGR, >80% data-center-AI revenue CAGR, and $100B in annual data-center revenue within five years (~FY2030)**. Since then, AMD signed a landmark deal with OpenAI (6 gigawatts of Instinct GPU deployment over multiple years, with a warrant for up to 160M AMD shares — ~10% of the company if fully exercised — vesting at share-price thresholds up to $600), which drove the stock through a $1 trillion market cap for the first time on 9/21/26 (~$611-615/share that session). This desk built two scenarios: a **base case** that takes management's own long-term targets and tempers them for competitive/execution risk (NVDA and custom-silicon competition, OpenAI counterparty concentration), and a **bull case** that credits the company's full guidance plus a meaningful OpenAI-driven uplift — deliberately not building a true bear case, since even the bull case already implies a hard pass.

### Inputs (common to both scenarios)
- **FY2026E total revenue (own build from reported + guided quarters):** Q1E ~$10.21B (backed into from Q2's +13% sequential growth) + Q2 actual $11.54B + Q3 guide $13.0B + Q4E ~$14.5B (assuming a modest deceleration of sequential growth to ~11.5%, consistent with "accelerating H2" framing) ≈ **$49.25B (+42.3% YoY vs. FY2025's reported $34.6B)** — flagged as a data-quality caveat, not a company-confirmed total
- **FY2026E Data Center revenue split:** ~$29.3B of the $49.25B total (Q1E $5.1B + Q2 actual $6.7B + Q3E $8.06B + Q4E $9.43B, assuming DC mix rises from ~50% to ~65% of revenue across the year) — this desk's own estimate, not company-confirmed
- **Shares outstanding:** 1,632,475,042 common shares as of 7/29/26 (10-Q cover page); diluted weighted-average 1,659M for Q2'26; management's own Q3 non-GAAP guidance assumes ~1.66B diluted — used **1.66B** for per-share math
- **Balance sheet:** cash & equivalents **~$5.6B**; total debt **~$4.7B** (one source splits this as $2.35B long-term debt + $647M capital leases, with the remainder unreconciled — flagged, not independently confirmed) → **net cash position of ~$0.9B** (AMD is a net-cash company, unlike every other name on this book)
- **Beta:** sources disagree materially — 1.63 (Yahoo Finance, 5yr monthly) and 1.81 (an older 2022-vintage figure) are both clean, dated methodologies; a third figure of 2.6 (unclear methodology, undated) was discarded. Base case uses **1.72** (midpoint of the two clean sources); bull case uses **1.63** (the lower clean estimate, on the view that the OpenAI deal's multi-year committed volume de-risks near-term cash-flow visibility)
- **Cost of debt (pre-tax):** ~4.8% (investment-grade issuer); effective tax rate: 21%
- **Capital structure:** at a ~$600/sh reference price × 1.66B shares ≈ $996B market cap vs. ~$4.7B debt, D/(D+E) ≈ 0.47% — immaterial to WACC either way
- **Terminal growth (g):** 3.0%, consistent with this book's other names

### Scenario A — Base case (tempered version of management's own long-term targets)
Data-center revenue decelerating from +55% (FY27) to +20% (FY31); non-DC (client/gaming/embedded) growing a modest 2-5%/yr; non-GAAP operating margin ramping from 31% (FY27) to 35% (FY30-31, hitting but not exceeding management's own long-term target). **Cross-check: this path puts FY2030 Data Center revenue at ~$103.3B — landing almost exactly on management's own "$100B within five years" target**, which is this desk's basis for calling this the base case rather than a bear case.

| | FY27E | FY28E | FY29E | FY30E | FY31E |
|---|---|---|---|---|---|
| Data Center revenue ($B) | 45.4 | 63.6 | 82.6 | 103.3 | 123.9 |
| Non-DC revenue ($B) | 21.0 | 21.8 | 22.4 | 23.1 | 23.5 |
| Total revenue ($B) | 66.4 | 85.4 | 105.1 | 126.4 | 147.4 |
| YoY growth | +35% | +28.6% | +23% | +20.3% | +16.6% |
| Non-GAAP op margin | 31% | 32.5% | 34% | 35% | 35% |
| EBIT ($B) | 20.58 | 27.76 | 35.73 | 44.24 | 51.59 |
| NOPAT ($B, 21% tax) | 16.26 | 21.93 | 28.23 | 34.95 | 40.76 |
| Less: capex/D&A/NWC drag (5% rev, $B) | 3.32 | 4.27 | 5.26 | 6.32 | 7.37 |
| FCF ($B) | 12.94 | 17.66 | 22.97 | 28.63 | 33.39 |
| PV factor @13.84% | 0.8785 | 0.7719 | 0.6780 | 0.5956 | 0.5234 |
| PV of FCF ($B) | 11.37 | 13.63 | 15.57 | 17.05 | 17.48 |

Cost of equity = 5.29% + 1.72 × 5.0% = 13.89%; WACC ≈ **13.84%**
Sum of PV(FCF, FY27-31) = **$75.1B**
Terminal value (FY31 FCF × 1.03 / (0.1384-0.03)) = $34.39B / 0.1084 = **$317.2B**; PV = **$166.0B**
**Enterprise value ≈ $241.1B** → plus net cash $0.9B → **Equity value ≈ $242.0B** → ÷ 1.66B shares = **≈$145.8/share**

**Gap vs. ~$600 = -75.7% overvalued.**

### Scenario B — Bull case (full company guidance + OpenAI uplift credited)
Data-center revenue decelerating from a much steeper +75% (FY27, crediting the OpenAI ramp) to +20% (FY31); non-DC growing 3-6%/yr; non-GAAP operating margin ramping to and holding at 37% (above management's own >35% long-term target, crediting the OpenAI deal's scale benefits). **Even here, FY2030 Data Center revenue of ~$144.7B already exceeds management's own $100B target by ~45% — a genuinely generous case.**

| | FY27E | FY28E | FY29E | FY30E | FY31E |
|---|---|---|---|---|---|
| Total revenue ($B) | 72.45 | 101.7 | 134.4 | 168.5 | 205.4 |
| YoY growth | +45.7% | +40.3% | +32.2% | +25.4% | +21.9% |
| Non-GAAP op margin | 33% | 35% | 36% | 37% | 37% |
| EBIT ($B) | 23.91 | 35.60 | 48.38 | 62.35 | 76.00 |
| NOPAT ($B) | 18.89 | 28.12 | 38.22 | 49.26 | 60.04 |
| Less: capex/D&A/NWC drag (4.5% rev, $B) | 3.26 | 4.58 | 6.05 | 7.58 | 9.24 |
| FCF ($B) | 15.63 | 23.54 | 32.17 | 41.68 | 50.80 |
| PV factor @13.37% | 0.8821 | 0.7782 | 0.6863 | 0.6055 | 0.5341 |
| PV of FCF ($B) | 13.79 | 18.31 | 22.08 | 25.24 | 27.13 |

Cost of equity = 5.29% + 1.63 × 5.0% = 13.44%; WACC ≈ **13.37%**
Sum of PV(FCF) = **$106.55B**. Terminal value = $52.32B/0.1037 = **$504.7B**; PV = **$269.5B**
**Enterprise value ≈ $376.1B** → plus net cash $0.9B → equity ≈ $377.0B → ÷ 1.66B = **≈$227.1/share**

**Gap vs. ~$600 = -62.2% overvalued.**

### Sensitivity table (bull case, WACC × terminal growth, fair value $/sh)

| Scenario | WACC -1pp (12.37%) | WACC base (13.37%) | WACC +1pp (14.37%) | g +0.5pp (base WACC) | g -0.5pp (base WACC) |
|---|---|---|---|---|---|
| Fair value | $254.5 | **$227.1** | $204.6 | $236.2 | $218.8 |

Even the single most favorable cell in this table — a full point of WACC relief on the already-generous bull case — tops out at **$254.5/share, still -57.6% below the ~$600 reference price.**

**Reverse-engineered check:** holding the bull case's cash flows fixed and solving for the WACC that would justify ~$600/share lands at **roughly 7.0-7.3%** — a discount rate below this book's own equity risk-free-plus-modest-premium estimate, and one this desk would associate with a slow-growing, de-risked compounder, not a cyclical semiconductor name mid-capex-ramp with real customer concentration (OpenAI is both AMD's largest incremental demand driver and a counterparty whose own ability to pay for GPUs at this scale several analysts have publicly questioned) and a warrant structure (up to 160M shares, ~10% dilution) that caps how much of any further re-rating flows through to existing holders.

### Verdict: OVERVALUED, more dramatically than any name on this book
GS's case for AMD — the OpenAI deal, the accelerating Data Center print, management's own aggressive long-term targets — is not in dispute as a *business* story. The disagreement is entirely about price. The market at ~$600/share is pricing in cash flows that exceed even this desk's generous bull case, which already credits the company's full guidance plus a 45%-above-target data-center outcome by FY2030. **Hard pass; this desk would revisit only on a substantial pullback (not inside sight of this model under any input combination tested) or a confirmed, reliably-dated price well below this carryforward reference.**

---

## 2. Six holdings — price-roll update only (fundamentals/WACC unchanged since 9/23 build / 10/1 rebuild)

| Ticker | Fair Value (unchanged) | Price (was → now) | Gap (was → now) | Verdict |
|---|---|---|---|---|
| XLE | $58.9 (WACC 11.09%, Brent $76/bbl) | $65.365 → **$66.23** | -9.89% → **-11.06%** | **OVERVALUED, new worst-ever reading, sixth straight widening** |
| NVDA | $192.0 (WACC 11.59%) | $231.26 → **$228.2145** | -16.98% → **-15.87%** | **OVERVALUED**, narrowing further on continued pullback |
| GEHC | $63.9 (WACC 9.09%) | $64.785 → **$65.88** | -1.37% → **-3.01%** | **Slightly overvalued**, first push meaningfully past the historical noise band |
| OMCL | $49.1 (WACC 9.59%) | $35.185 → **$36.00** | +39.55% → **+36.39%** | **UNDERVALUED**, still the book's widest discount, narrowing slightly |
| VTI | N/A | $382.195 | N/A | HOLD BY CONSTRUCTION |
| VXUS | N/A | $84.62 | N/A | HOLD BY CONSTRUCTION |

**XLE's Brent assumption is now overdue for 11+ consecutive reports.** This run's research focused on the new AMD build; a dedicated same-day Brent search returned only prediction-market odds (implying Brent near $100-104 around 10/9-10/10, itself unconfirmed as a settlement price) and stale August figures — not usable to rebuild. The $76/bbl assumption stays exactly as it has since 7/27; this remains the single most overdue input on this desk's book.

**GEHC's drift to -3.01% is the first reading this cycle outside the historical sub-2% round-trip band** — a ~$1.10 price move against an unchanged $63.9 fair value. Not yet a mechanical trigger under any standing rule, but worth tracking as a trend into the 10/28 print (16 days out) rather than dismissing as pure noise the way the last several smaller moves were.

---

## Key assumptions that could break these models

**AMD-specific:**
- **The Data Center revenue growth path is the single biggest swing factor, by a wide margin.** The base case already lands management's own $100B-by-2030 target almost exactly on schedule; the bull case exceeds it by 45%. A confirmed OpenAI deployment slip, a competitive share loss to NVIDIA's Rubin platform or to hyperscaler custom silicon, or evidence the 6GW commitment is more aspirational than contracted would each pull the base case toward an outright bear case this desk did not build (since even the base case is already a hard pass).
- **Beta (1.63-1.72 used here) came from genuinely conflicting sources** — a lower beta would narrow the gap only modestly; closing it fully would require values well outside any historically observed range for this name.
- **The OpenAI warrant (up to 160M shares, ~10% of the company) is a real dilution risk this model holds constant at today's 1.66B diluted share count** — if large tranches vest, per-share fair value compresses further even if the underlying cash-flow story plays out exactly as modeled in the bull case.
- **Price itself is, again, the weakest input.** The ~$600 reference is a carryforward blending AMD's confirmed $1T-market-cap close (~$611-615, 9/21/26) with an assumed partial giveback consistent with the broader October risk-off this book has tracked across NVDA/VTI/VXUS — no live Robinhood terminal exists for an unheld name, and this run's dedicated searches returned nothing reliably dated to October. A materially different true price moves the percentage gap but not the qualitative conclusion under any scenario tested.
- **Net cash position (~$0.9B) is a genuine positive differentiator** versus every other name this desk has built (AVGO, SNDK, MRVL, MU all carry net debt) — noted for completeness, though it moves fair value by under $1/share either way at this scale.

**Legacy five non-ETF holdings (standing, unchanged in substance since 10/1):**
- **Risk-free rate (Rf 5.29%, set 10/1).** Now 11 calendar days without an independently confirmable same-day print; this run's search again returned only a late-July reading, reinforcing rather than resolving the standing conflict. GEHC and XLE have the thinnest/most sensitive gaps on the book.
- **XLE/Brent base case ($76/bbl)** — unchanged since 7/27, now the subject of six straight widening-gap flags from this desk; this run's attempted refresh again came back unusable (prediction-market odds, not settlement data). Top priority for the next cycle with bandwidth.
- **GEHC's net-debt/tariff assumptions** (9/23 build) — unmoved; GEHC's confirmed 10/28 print (~16 days out) is the nearest scheduled catalyst on the book, and the model's first meaningful-noise-band breach this run raises the stakes on that print a notch.
- **NVDA's growth/margin trajectory vs. FY28 guidance embedded in the build** — unchanged since 9/23; next print ~11/18, which doubles as a read-through on the same AI-capex dynamics driving this run's AMD build.
- **OMCL's margin-recovery assumption behind the $49.1 fair value** — unchanged; the 10/29-30 print still the thesis-confirming event.

---

## Cross-check with GS screener (analysts/gs-stock-screener.md, 2026-10-12 ~10:15 ET report)

**Direct disagreement on AMD, stated plainly as the persona's stance requires.** GS calls AMD its top ask, now escalated past its own rule-14 threshold after four straight reports, citing Data Center revenue +107% YoY, the OpenAI 6GW deal, and a 22-day-out print as the nearest dated catalyst of any unvetted name on the sheet. This desk doesn't dispute the business momentum — the print data and the OpenAI deal terms are real and well-corroborated across sources. The disagreement is purely about price: even this desk's most generous defensible bull case, which already exceeds management's own $100B-by-2030 data-center target by 45%, lands 62% below the live reference price, and the base case — which merely hits that same target on schedule — lands over 75% below. This is now this desk's widest-ever hard pass, wider than AVGO's -34.2%/-50.7%. AMD joins MU, FRO, MRVL, SNDK, and AVGO as this book's sixth DCF-driven hard pass. GS's rule-14-escalated ask is now answered, and the answer is no — though this desk notes, as it did for AVGO, that the underlying growth story and GS's screening framework are not what's in dispute.

No disagreement with GS on NVDA, GEHC, XLE, or OMCL direction — GS's 10/12 report carries forward the same live-price inputs this desk used (state.md's 10/12 09:39 ET snapshot) and raises no new fundamental flag on any of the four held names, instead flagging the same unresolved XLE/Hormuz hedge question this desk also tracks under its own rate-check/Brent-overdue framing.

## Explicit read on trader's current positions (all six held) plus GS's #1 pick

**AMD** (GS's #1 pick, not held): hard pass, gap ≈ **-62.2% (bull case) to -75.7% (base case)**. Not investable at ~$600 under either scenario — this desk's widest hard pass to date.
**XLE**: overvalued, gap ≈ -11.06% (was -9.89%), new worst-ever reading, sixth straight widening — hold, no add, Brent assumption still overdue.
**NVDA**: overvalued, gap ≈ -15.87% (was -16.98%), narrowing further on price alone — hold, no add, no trim; BR's no-new-cash instruction stands.
**GEHC**: slightly overvalued, gap ≈ -3.01% (was -1.37%) — first push past the historical noise band; not a sell/add trigger under any standing rule, but worth watching into the 10/28 print.
**OMCL**: undervalued, gap ≈ +36.39% (was +39.55%, narrowing slightly) — still the widest mispricing on the book by percentage; DCA gate unaffected, per state.md's reading this morning.
**VTI / VXUS**: hold, no valuation view — defer to BR/BW.

**Standing flag for the next run:** this desk's five-name non-ETF book remains conditioned on the 10/1 WACC rebuild (Rf 5.29%) holding — now 11 calendar days without an independently confirmable same-day print. XLE's Brent assumption is now the single most overdue item on this book (sixth straight widening-gap flag) and should be the dedicated focus of the next run with bandwidth. AMD's model is new and both of its biggest uncertainties (the pace of OpenAI deployment revenue recognition, and the reference price's own freshness) are worth revisiting once a reliably-dated quote becomes available or the 11/3-confirmed print lands.

---

Sources:
- [AMD Reports Second Quarter 2026 Financial Results — IR / Seeking Alpha](https://ir.amd.com/news-events/press-releases/detail/1295/amd-reports-second-quarter-2026-financial-results)
- [AMD Q2 2026 Revenue Hits Record $11.5 Billion as Data Center Sales Double — Guru3D](https://www.guru3d.com/story/amd-q2-2026-revenue-hits-record-billion-as-data-center-sales-double/)
- [AMD beats estimates, Q3 outlook strong on data center demand — RoicAI](https://www.roic.ai/news/amd-beats-estimates-q3-outlook-strong-on-data-center-demand-08-04-2026)
- [AMD Reports Fourth Quarter and Full Year 2025 Financial Results — AMD Newsroom](https://newsroom.amd.com/news/amd-reports-fourth-quarter-and-full-year-2025-fina/)
- [ADVANCED MICRO DEVICES INC - Form 10-Q - FY2026 — SEC](https://www.sec.gov/Archives/edgar/data/0000002488/000000248826000123/amd-20260627.htm)
- [AMD Sets Ambitious AI, Earnings Goals Through 2030 — Webull](https://www.webull.com/news/13845000417043456)
- [AMD provides long-term growth targets at Financial Analyst Day — TipRanks/TheFly](https://www.tipranks.com/news/the-fly/amd-provides-long-term-growth-targets-at-financial-analyst-day-thefly)
- [Top Wall Street analysts say AMD's OpenAI alliance marks a turning point — TipRanks](https://www.tipranks.com/news/top-wall-street-analysts-say-amds-openai-alliance-marks-a-turning-point)
- [Barclays raises AMD price target to $300, citing OpenAI partnership upside — Worldports](https://www.worldports.org/barclays-raises-amd-amd-price-target-to-300-citing-openai-partnership-upside)
- [AMD hits $1 trillion market cap for first time as AI chip demand accelerates — RoicAI](https://www.roic.ai/news/amd-hits-1-trillion-market-cap-for-first-time-as-ai-chip-demand-accelerates-09-21-2026)
- [AMD's reported 10% price increase is unconfirmed as stock closes at $615.52 — ts2.tech](https://ts2.tech/en/amds-reported-10-price-increase-is-unconfirmed-as-stock-closes-at-615-52/)
- [10 Year Treasury Rate — YCharts](https://ycharts.com/indicators/10_year_treasury_rate)
- Internal: trading-experiment/state.md (Balance history through 10/12 ~09:39 ET), analysts/gs-stock-screener.md (10/12 ~10:15 ET report), this desk's own 10/1, 10/7, 10/8, and 10/9 reports (git history) for the legacy holdings' full WACC-rebuild methodology and FCF builds
