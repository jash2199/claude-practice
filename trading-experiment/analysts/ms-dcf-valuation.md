# MS DCF Valuation — Investment Banking Valuation Memo
**Date: 2026-10-13 (Tuesday), ~10:14 ET.** First full model build for **ALAB (Astera Labs)**, GS's new #1 unvetted ask as of its 2026-10-13 ~09:43 ET report (now escalated past its own rule-14 "repeated ask needs a decision" threshold after 21+ consecutive reports naming it as #1) — same mechanism that triggered this desk's AMD build on 10/12. Alongside a price-roll-only update on the six current holdings (no WACC rebuild this run — 10/1's Rf 5.29% input stands, now 12 calendar days stale; see rate-check note below).

*Persona: VP-level valuation coverage for the "Claude Robinhood Trader" experiment. Coverage this run: (1) NVDA, (2) OMCL, (3) VTI, (4) VXUS, (5) XLE, (6) GEHC — the six current holdings, priced off state.md's freshest live Robinhood snapshot (2026-10-13 ~09:40 ET: NVDA $223.8482, VTI $381.535, VXUS $84.535, OMCL $37.26, XLE $66.485, GEHC $68.04) — plus (7) **ALAB, GS's new #1 screen pick**, now that AMD (10/12 build, hard pass -62.2%/-75.7%) has been fully adopted and closed by GS as "don't re-raise without new numbers." No live Robinhood access on this desk; per rule 4, state.md's live-verified prices take precedence over WebSearch for the six holdings.*

---

## Verdicts (top line) — read this first

| Ticker | Current Price | Fair Value | Gap | Verdict |
|---|---|---|---|---|
| **ALAB** (not held, GS #1 — first-ever MS build) | ~$389.80/sh (carryforward, 10/6-dated — no reliably-dated October print found this run either; see price note) | **$119.3/sh** (bull case) to **$54.8/sh** (base case) | **-69.4% to -86.0%** | **OVERVALUED — the widest hard pass this desk has ever issued, wider than AMD** |
| **GEHC** | $68.04 (was $65.88) | $63.9/sh (WACC 9.09%, unchanged) | **-6.08%** | **OVERVALUED**, a sharp widening past the noise band — this run's headline holdings move |
| **XLE** | $66.485 (was $66.23) | $58.9/sh (WACC 11.09%, Brent $76/bbl — unchanged) | **-11.41%** | **OVERVALUED**, a new worst-ever reading, seventh straight widening |
| **NVDA** | $223.8482 (was $228.2145) | $192.0 (WACC 11.59%) | **-14.23%** | **OVERVALUED**, narrowing further on continued pullback |
| **OMCL** | $37.26 (was $36.00) | $49.1/sh (WACC 9.59%) | **+31.77%** | **UNDERVALUED — still the widest mispricing on the book**, narrowing on price |
| **VTI** | $381.535 | N/A | N/A | **HOLD BY CONSTRUCTION** |
| **VXUS** | $84.535 | N/A | N/A | **HOLD BY CONSTRUCTION** |

**Bottom line for the trader:**

1. **ALAB is this report's headline, and it is now the widest hard pass this desk has ever issued — wider than AMD, AVGO, SNDK, MRVL, or MU.** Even a bull case crediting the full Scorpio X-Series/UALink ramp (management's own Q3 guide of $540-560M implies +40% sequential growth, on top of Q2's +104% YoY print) tops out around **$119.3/share against a ~$389.80 reference price — a -69.4% gap.** A more disciplined base case collapses fair value to **~$54.8/share, a -86.0% gap.** The hypergrowth and execution are real; at a trailing P/E GS itself clocks near 192x, the market is pricing in a cash-flow path well beyond anything a defensible DCF — even a generous one — can support.
2. **GEHC's drift that this desk has flagged for two straight reports as "approaching the noise band" has now broken through it decisively.** The gap widened from -3.01% to -6.08% as the live price pushed to $68.04, essentially at the $68.69 entry cost — this is now the second-worst overvaluation reading on the book behind XLE, driven entirely by price action with zero sourced structural catalyst identified by any desk across 6+ sessions.
3. **XLE set a new worst-ever reading for a seventh consecutive report.** The $76/bbl Brent assumption is now 12+ days overdue for a rebuild.
4. **NVDA's gap narrowed further on continued price weakness** — fair value unchanged since 9/23, gap easing purely on price to -14.23%.
5. **OMCL remains the book's widest mispricing by percentage**, narrowing slightly as price firmed toward fair value.

No trade recommended off this report (research-only mandate, as always).

---

## Rate-check note (Rf input)

Fresh WebSearch this run for a same-day 10-year Treasury print reproduced the identical chronic wall every desk has now flagged for 12+ days running: results topped out at a 9/24-dated secondary-aggregator claim of "5.2%, highest since 2007" (unconfirmed against Treasury.gov) and an earlier June reading of 4.42%. Per rule 4, this doesn't meet the bar for a rebuild — **Rf 5.29% stands (set 10/1), now 12 calendar days without an independently confirmable print.** Used as-is for both the legacy five non-ETF holdings and this run's new ALAB build, for internal consistency across the book.

---

## 1. Astera Labs (ALAB) — first-ever DCF build, GS's new #1 pick

### Why now, and why two scenarios
GS has named ALAB its top-ranked unvetted ask for 21+ consecutive reports and escalated past its own rule-14 threshold this run, framing the earnings-date confusion itself (four disagreeing estimates: 11/3, 11/5, 11/7, 11/10, none company-confirmed) as a reason a valuation build is overdue, not a reason to wait. The business case is genuinely strong: Q1 2026 revenue $308.4M (+93% YoY), Q2 2026 revenue $392.4M (+104% YoY, non-GAAP EPS $0.80, GAAP net income $153.1M), Q3 2026 guidance of $540-560M (+38-43% sequential — management says the Scorpio Fabric Switch line becomes the largest product line a full quarter ahead of schedule, tied to the 320-lane X-Series ramp and emerging UALink/optical-connectivity demand). This desk built two scenarios: a **base case** that assumes meaningful but decelerating hypergrowth as the law of large numbers takes hold, and a **bull case** that credits a longer, steeper ramp consistent with management's own "ahead of schedule" framing — deliberately not building a true bear case, since even the bull case already implies a hard pass.

### Inputs (common to both scenarios)
- **FY2026E total revenue (own build from reported + guided quarters):** Q1 actual $308.4M + Q2 actual $392.4M + Q3 guide midpoint $550M + Q4E ~$632.5M (assuming sequential growth moderates to ~15% from Q3's ~40%, a normalization after the Scorpio pull-forward) ≈ **$1.883B** — flagged as a data-quality caveat, this desk's own estimate, not company-confirmed
- **Shares outstanding:** Q2 2026 10-Q reports diluted weighted-average shares of **183.34M** for the quarter ended 6/30/26 (basic 172.38M); used **183M diluted** for per-share math
- **Balance sheet (6/30/26 8-K):** cash & equivalents $111.5M + marketable securities $1.14B ≈ **$1.25B liquid assets**; total debt figures conflict across sources ($41.9M per one secondary source vs. "debt free" per another, dated-stale) — used the more conservative $41.9M → **net cash position ≈ $1.21B** (like AMD, a net-cash company, unlike every other name on this book)
- **Beta:** sources disagree materially and across a wide range — 3.96 (Yahoo Finance HK mirror, undated), 3.66 (MarketBeat, late July), 2.01 (TradingView, undated) — a far wider spread than AMD's. Base case uses **3.0** (a disciplined midpoint reflecting this name's genuinely higher small-cap/single-product-cycle volatility vs. AMD); bull case uses **2.0** (the lower clean estimate, on the view that the multi-quarter beat-and-raise cadence and hyperscaler design-win visibility de-risk near-term cash-flow visibility)
- **Cost of debt / capital structure:** immaterial — net-cash company, effectively all-equity financed; **WACC ≈ cost of equity** in both scenarios
- **Effective tax rate:** 21%
- **Terminal growth (g):** 3.0%, consistent with this book's other names

### Scenario A — Base case (hypergrowth decelerating under the law of large numbers)
Revenue growth decelerating from +55% (FY27) to +18% (FY31) as the Scorpio/UALink ramp matures and comps normalize; non-GAAP operating margin ramping from 35% (FY27, in line with Q2's already-high ~39% net-margin run-rate before giving back some to opex reinvestment) to 42% (FY31).

| | FY27E | FY28E | FY29E | FY30E | FY31E |
|---|---|---|---|---|---|
| Total revenue ($B) | 2.919 | 4.087 | 5.313 | 6.482 | 7.649 |
| YoY growth | +55% | +40% | +30% | +22% | +18% |
| Operating margin | 35% | 37% | 39% | 40.5% | 42% |
| EBIT ($B) | 1.022 | 1.512 | 2.072 | 2.625 | 3.213 |
| NOPAT ($B, 21% tax) | 0.807 | 1.194 | 1.637 | 2.074 | 2.538 |
| Less: capex/D&A/NWC drag (5% rev, $B) | 0.146 | 0.204 | 0.266 | 0.324 | 0.382 |
| FCF ($B) | 0.661 | 0.990 | 1.371 | 1.750 | 2.156 |
| PV factor @20.29% | 0.8313 | 0.6911 | 0.5744 | 0.4777 | 0.3971 |
| PV of FCF ($B) | 0.550 | 0.684 | 0.788 | 0.836 | 0.856 |

Cost of equity = 5.29% + 3.0 × 5.0% = 20.29%; WACC ≈ **20.29%** (all-equity, net-cash company)
Sum of PV(FCF, FY27-31) = **$3.71B**
Terminal value (FY31 FCF × 1.03 / (0.2029-0.03)) = $2.221B / 0.173 = **$12.84B**; PV = **$5.10B**
**Enterprise value ≈ $8.81B** → plus net cash $1.21B → **Equity value ≈ $10.02B** → ÷ 0.183B shares = **≈$54.8/share**

**Gap vs. ~$389.80 = -86.0% overvalued.**

### Scenario B — Bull case (extended hypergrowth + lower discount rate)
Revenue growth decelerating from a steeper +75% (FY27, crediting a longer Scorpio/UALink/optical ramp consistent with "ahead of schedule" commentary) to +22% (FY31); operating margin ramping to and holding at 45% (above the base case's 42% ceiling, crediting continued gross-margin strength — Q1's GAAP gross margin was already 76.3%).

| | FY27E | FY28E | FY29E | FY30E | FY31E |
|---|---|---|---|---|---|
| Total revenue ($B) | 3.295 | 5.107 | 7.150 | 9.152 | 11.165 |
| YoY growth | +75% | +55% | +40% | +28% | +22% |
| Operating margin | 38% | 40% | 42% | 44% | 45% |
| EBIT ($B) | 1.252 | 2.043 | 3.003 | 4.027 | 5.024 |
| NOPAT ($B) | 0.989 | 1.614 | 2.372 | 3.181 | 3.969 |
| Less: capex/D&A/NWC drag (4.5% rev, $B) | 0.148 | 0.230 | 0.322 | 0.412 | 0.502 |
| FCF ($B) | 0.841 | 1.384 | 2.050 | 2.769 | 3.467 |
| PV factor @15.29% | 0.8674 | 0.7519 | 0.6522 | 0.5657 | 0.4906 |
| PV of FCF ($B) | 0.730 | 1.041 | 1.337 | 1.566 | 1.701 |

Cost of equity = 5.29% + 2.0 × 5.0% = 15.29%; WACC ≈ **15.29%**
Sum of PV(FCF) = **$6.37B**. Terminal value = $3.571B/0.1229 = **$29.06B**; PV = **$14.26B**
**Enterprise value ≈ $20.63B** → plus net cash $1.21B → equity ≈ $21.84B → ÷ 0.183B = **≈$119.3/share**

**Gap vs. ~$389.80 = -69.4% overvalued.**

### Sensitivity table (bull case, WACC × terminal growth, fair value $/sh)

| Scenario | WACC -1pp (14.29%) | WACC base (15.29%) | WACC +1pp (16.29%) | g +0.5pp (base WACC) | g -0.5pp (base WACC) |
|---|---|---|---|---|---|
| Fair value | $131.1 | **$119.3** | $109.4 | $123.0 | $115.9 |

Even the single most favorable cell in this table — a full point of WACC relief on the already-generous bull case — tops out at **$131.1/share, still -66.4% below the ~$389.80 reference price.**

**Reverse-engineered check:** closing the full gap to ~$389.80 would require an equity value of roughly $71.3B against this model's bull-case cash flows — more than triple the $21.84B this desk's most generous defensible scenario produces. That gap can't be closed by any single reasonable input (WACC, terminal growth, or margin) in isolation; it would require a WACC in the low single digits or a growth/margin path several multiples beyond even the bull case's own already-aggressive assumptions — not a credible combination for a company still proving out a multi-year product ramp.

### Verdict: OVERVALUED — the widest hard pass this desk has ever issued
GS's case for ALAB — the beat-and-raise cadence, the Scorpio/UALink ramp running ahead of schedule, Nasdaq-100 inclusion, hyperscaler design wins — is not in dispute as a *business* story; this desk's own build, even in its generous bull case, already has FY2031 revenue at over $11B (roughly 6x FY2026E) and operating margins exceeding 45%. The disagreement is entirely about price. The market at ~192x trailing earnings is pricing in an outcome this desk cannot construct a defensible cash-flow path to, even granting the company's own best current momentum an extra decade of runway. **Hard pass; this desk would revisit only on a substantial pullback (not inside sight of this model under any input combination tested) or a confirmed, reliably-dated price well below this carryforward reference.**

### Price note
No source in this run's dedicated WebSearch returned a reliably-dated October 2026 ALAB quote — the same chronic dateline wall every desk has flagged for 6+ weeks. The ~$389.80 reference carries forward GS's own 10/6-dated figure (now a week stale), the freshest dated print this desk could independently corroborate. A materially different true price moves the percentage gap but not the qualitative conclusion under any scenario tested here.

---

## 2. Six holdings — price-roll update only (fundamentals/WACC unchanged since 9/23 build / 10/1 rebuild)

| Ticker | Fair Value (unchanged) | Price (was → now) | Gap (was → now) | Verdict |
|---|---|---|---|---|
| GEHC | $63.9 (WACC 9.09%) | $65.88 → **$68.04** | -3.01% → **-6.08%** | **OVERVALUED — sharp widening, decisively past the noise band** |
| XLE | $58.9 (WACC 11.09%, Brent $76/bbl) | $66.23 → **$66.485** | -11.06% → **-11.41%** | **OVERVALUED, new worst-ever reading, seventh straight widening** |
| NVDA | $192.0 (WACC 11.59%) | $228.2145 → **$223.8482** | -15.87% → **-14.23%** | **OVERVALUED**, narrowing further on continued pullback |
| OMCL | $49.1 (WACC 9.59%) | $36.00 → **$37.26** | +36.39% → **+31.77%** | **UNDERVALUED**, still the book's widest discount, narrowing on price firming |
| VTI | N/A | $381.535 | N/A | HOLD BY CONSTRUCTION |
| VXUS | N/A | $84.535 | N/A | HOLD BY CONSTRUCTION |

**GEHC is this run's headline holdings move.** The last two reports flagged the stock's unexplained multi-session drift as "approaching" and then "the first push past" this model's historical sub-2% noise band (-1.37% → -3.01%). This run's fresh price ($68.04, essentially at the $68.69 entry cost) pushes the gap to -6.08% — a genuinely material widening, not noise, with zero sourced catalyst identified by any of the five desks across 6+ sessions (BW, GS, and BR have all independently flagged and tracked this). Still not a mechanical trigger under any standing rule (BR closed the upside-trigger band-reopening question 10/12 ~16:12 ET on explicit terms: reopens only on a 5pp pool-drift breach or a sourced structural catalyst), but this desk is now flagging it in the same terms BW and GS have used — a governance gap, not yet a trade signal, with the 10/28 print (15 days out) the nearest scheduled resolution.

**XLE's Brent assumption is now overdue for 12+ consecutive days / seven straight reports.** This run's dedicated search again returned only Kalshi prediction-market odds (implying Brent north of $99.99 with 63-69% confidence around 10/9-10/16) — not a settlement price, and per rule 4 not usable to rebuild. The $76/bbl assumption stays exactly as it has since 7/27, now the single most overdue input on this desk's book.

---

## Key assumptions that could break these models

**ALAB-specific:**
- **The revenue growth path is the single biggest swing factor, by a wide margin.** The base case already has FY2031 revenue at ~4x FY2026E; the bull case pushes past 6x. A confirmed slowdown in the Scorpio/UALink ramp, a design-win loss to a competing interconnect standard, or evidence that Q3's "ahead of schedule" framing was pulling forward rather than adding demand would each pull the base case toward an outright bear case this desk did not build (since even the base case is already a hard pass).
- **Beta (2.0-3.0 used here) came from an unusually wide spread of conflicting sources (2.01 to 3.96)** — this is the least-settled input this desk has used on any build to date. Even the low end of that range still produces a double-digit-percent hard pass.
- **Net cash position (~$1.21B) is a genuine positive differentiator**, consistent with AMD's own net-cash status — noted for completeness, though it moves fair value by only a few dollars per share either way at this scale relative to the equity-value gap involved.
- **Price itself is, again, the weakest input.** The ~$389.80 reference is a week-stale carryforward (GS's 10/6 figure); no live Robinhood terminal exists for an unheld name, and this run's dedicated searches returned nothing reliably dated to October. A materially different true price moves the percentage gap but not the qualitative conclusion under any scenario tested.
- **Shares outstanding used diluted weighted-average (183.34M) rather than a confirmed current share count** — the Q2 10-Q's cover-page share count wasn't located in this run's search; a material difference here would move fair value per share roughly proportionally, not the EV-level conclusion.

**Legacy five non-ETF holdings (standing, unchanged in substance since 10/1):**
- **Risk-free rate (Rf 5.29%, set 10/1).** Now 12 calendar days without an independently confirmable same-day print; this run's search again returned only a late-September secondary-aggregator claim, reinforcing rather than resolving the standing conflict. GEHC and XLE have the thinnest/most sensitive gaps on the book, and GEHC's sharp widening this run raises the stakes on this input a notch.
- **XLE/Brent base case ($76/bbl)** — unchanged since 7/27, now the subject of seven straight widening-gap flags from this desk; this run's attempted refresh again came back unusable (prediction-market odds, not settlement data). Top priority for the next cycle with bandwidth.
- **GEHC's net-debt/tariff assumptions** (9/23 build) — unmoved; GEHC's confirmed 10/28 print (15 days out) is the nearest scheduled catalyst on the book, and this run's sharp gap-widening raises the stakes on that print meaningfully.
- **NVDA's growth/margin trajectory vs. FY28 guidance embedded in the build** — unchanged since 9/23; next print ~11/18.
- **OMCL's margin-recovery assumption behind the $49.1 fair value** — unchanged; the 10/29-30 print still the thesis-confirming event.

---

## Cross-check with GS screener (analysts/gs-stock-screener.md, 2026-10-13 ~09:43 ET report)

**Direct disagreement on ALAB, stated plainly as the persona's stance requires.** GS escalated ALAB past its own rule-14 threshold this run, framing the newly-discovered four-way earnings-date split as a reason a valuation build is overdue rather than a reason to keep deferring — and explicitly notes it is asking for "a build, not a trade" (rule 6 keeps any unvetted name blocked regardless). This desk doesn't dispute the growth story or GS's screening logic; the Scorpio/UALink ramp, the beat-and-raise cadence, and the Nasdaq-100 inclusion are all real and well-corroborated across sources. The disagreement is purely about price: even this desk's most generous defensible bull case lands 69% below the live reference price, and the base case lands 86% below. This is now this desk's widest-ever hard pass, wider than AMD's -62.2%/-75.7%. ALAB joins MU, FRO, MRVL, SNDK, AVGO, and AMD as this book's seventh DCF-driven hard pass. GS's rule-14-escalated ask is now answered, and the answer is no.

No disagreement with GS on NVDA, GEHC, XLE, or OMCL direction — GS's 10/13 report carries forward the trader's own live-price inputs and raises no new fundamental flag on any held name, consistent with this desk's reads above.

## Explicit read on trader's current positions (all six held) plus GS's #1 pick

**ALAB** (GS's #1 pick, not held): hard pass, gap ≈ **-69.4% (bull case) to -86.0% (base case)**. Not investable at ~$389.80 under either scenario — this desk's widest hard pass to date.
**GEHC**: overvalued, gap ≈ -6.08% (was -3.01%) — a sharp widening, decisively past the historical noise band; not a mechanical trigger under any standing rule (BR's 10/12 band-closure decision stands), but worth escalated attention into the 10/28 print.
**XLE**: overvalued, gap ≈ -11.41% (was -11.06%), new worst-ever reading, seventh straight widening — hold, no add, Brent assumption still overdue.
**NVDA**: overvalued, gap ≈ -14.23% (was -15.87%), narrowing further on price alone — hold, no add, no trim; BR's no-new-cash instruction stands.
**OMCL**: undervalued, gap ≈ +31.77% (was +36.39%, narrowing on price firming) — still the widest mispricing on the book by percentage; DCA gate unaffected, per state.md's reading this morning.
**VTI / VXUS**: hold, no valuation view — defer to BR/BW.

**Standing flag for the next run:** this desk's five-name non-ETF book remains conditioned on the 10/1 WACC rebuild (Rf 5.29%) holding — now 12 calendar days without an independently confirmable same-day print. XLE's Brent assumption is now the single most overdue item on this book (seventh straight widening-gap flag). GEHC's sharp gap-widening this run (-3.01% → -6.08%) should be the team's next priority watch item alongside the standing rate/Brent refreshes, given it has now crossed from "worth noting" to "decisively past the noise band" in a single session. ALAB's model is new and both of its biggest uncertainties (the still-unresolved print date, and the reference price's own week-old staleness) are worth revisiting once a reliably-dated quote becomes available.

---

Sources:
- [Astera Labs Q2 2026 earnings — tikr.com](https://www.tikr.com/blog/astera-labs-alab-stock-slips-q2-2026-earnings-guidance)
- [Astera Labs Q3 2026 guidance, earnings forecasts — Benzinga](https://it.benzinga.com/quote/alab/earnings-forecasts)
- [Astera Labs, Inc. - Form 10-Q (Q2 2026, period ended 6/30/26) — SEC EDGAR](https://www.sec.gov/Archives/edgar/data/0001736297/000173629726000035/alab-20260630.htm)
- [Astera Labs, Inc. - Form 10-Q (Q1 2026, period ended 3/31/26) — SEC EDGAR](https://www.sec.gov/Archives/edgar/data/0001736297/000173629726000020/alab-20260331.htm)
- [Astera Labs balance sheet / 8-K material event — StockTitan](https://www.stocktitan.net/sec-filings/ALAB/8-k-astera-labs-inc-reports-material-event-aa1bcba3ad6b.html)
- [Astera Labs Reports First Quarter 2026 Financial Results — company release](https://www.asteralabs.com/news/astera-labs-reports-first-quarter-2026-financial-results/)
- [Astera Labs beta (5yr monthly, 3.96) — Yahoo Finance HK mirror](https://hk.finance.yahoo.com/quote/ALAB/)
- [Astera Labs beta/price commentary (3.66; July 2026) — MarketBeat](https://www.marketbeat.com/instant-alerts/astera-labs-nasdaqalab-stock-price-down-31-heres-why-2026-07-27/)
- [10 Year Treasury Rate — YCharts](https://ycharts.com/indicators/10_year_treasury_rate)
- [Brent crude Kalshi prediction markets (10/9, 10/16 weekly contracts)](https://kalshi.com/markets/kxbrentw/brent-oil/kxbrentw-26oct0917)
- Internal: trading-experiment/state.md (Balance history through 10/13 ~09:40 ET), analysts/gs-stock-screener.md (10/13 ~09:43 ET report), this desk's own 10/1, 10/7, 10/8, 10/9, and 10/12 reports (git history) for the legacy holdings' full WACC-rebuild methodology and FCF builds
