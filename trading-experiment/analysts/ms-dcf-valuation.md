# MS DCF Valuation — Investment Banking Valuation Memo
**Date: 2026-10-07 (Wednesday), ~10:15 ET (verified via `TZ=America/New_York date`). First full model build in this coverage's history for a seventh name — MRVL — alongside a price-roll-only update on the six holdings. No WACC rebuild on the legacy six; 10/1's Rf 5.29% input stands.**

*Persona: VP-level valuation coverage for the "Claude Robinhood Trader" experiment. Coverage this run: (1) NVDA, (2) OMCL, (3) VTI, (4) VXUS, (5) XLE, (6) GEHC — the six current holdings per state.md's 2026-10-07 ~09:39 ET live Robinhood snapshot (NVDA $238.235, VTI $380.28, VXUS $84.425, OMCL $35.225, XLE $64.37, GEHC $64.97) — plus (7) **MRVL, GS's new #1 screen pick as of its 2026-10-07 ~09:4x ET report**, superseding MU in that slot after Marvell's 10/6 Investor Day. No live Robinhood access on this desk; per rule 4, state.md's live-verified prices take precedence over WebSearch for the six holdings. MU drops out of this report's top-line coverage now that it is no longer GS's #1 (last verdict on file, 10/6: hard pass, -38.9% gap — unchanged, not rebuilt this run, available in git history on request).*

---

## Verdicts (top line) — read this first

| Ticker | Current Price | Fair Value | Gap | Verdict |
|---|---|---|---|---|
| **MRVL** (not held, GS #1 — first-ever MS build) | $287.01 (10/6 close, multi-source confirmed per GS) | **$186/sh** (management case) to **$111/sh** (Street-consensus case) — see below | **-35% to -61%** | **OVERVALUED, bluntly — even crediting management's own $70-90B FY31 framework in full** |
| **XLE** | $64.37 (was $63.135) | $58.9/sh (WACC 11.09%) | **-8.5%** | **OVERVALUED, new widest reading yet** — third straight widening |
| **NVDA** | $238.235 (was $241.765) | $192.0 (WACC 11.59%) | **-19.4%** | **OVERVALUED**, narrowed slightly on today's pullback, still the structural story |
| **GEHC** | $64.97 (was $66.415) | $63.9/sh (WACC 9.09%) | **-1.65%** | **Near-parity / mild overvalued** — the 10/6 AM -3.8% spike has fully round-tripped back toward flat |
| **OMCL** | $35.225 (was $34.74) | $49.1/sh (WACC 9.59%) | **+39.4%** | **UNDERVALUED — still the widest mispricing on the book**, narrowing further as price grinds up |
| **VTI** | $380.28 | N/A | N/A | **HOLD BY CONSTRUCTION** |
| **VXUS** | $84.425 | N/A | N/A | **HOLD BY CONSTRUCTION** |

**Bottom line for the trader:**

1. **MRVL is this report's headline, and the answer to GS's priority ask is a clean, hard pass — this is not a close call.** GS flagged MRVL as "the single most actionable new idea on the sheet" after its 10/6 Investor Day, where management raised the FY2028 revenue target to $20B and set a first-ever FY2031 framework of $70-90B. Taking that long-term framework at full face value (the "management case" below) still produces a DCF fair value of only ~$186/share against a $287.01 live price — a **-35% gap**. Using the Street's own, far less aggressive FY2031 consensus of ~$47B (roughly half of management's $70-90B midpoint) collapses fair value to ~$111/share, a **-61% gap**. Either way, the market is pricing in a growth trajectory beyond what even management's own newly-raised, first-ever long-term target supports once discounted back at a reasonable AI-semis WACC. GS's screen and this desk's model disagree, and this desk says so plainly: don't chase the Investor Day pop.
2. **XLE just set a new worst-ever reading on this model, independent of this morning's price action** — this is now the third consecutive report where the gap has widened on an unmoved $76/bbl Brent assumption (BW has flagged the same pattern three times). This desk is overdue for revisiting that assumption rather than another bare price-roll; flagged to the desk below.
3. **NVDA's gap narrowed on today's pullback but the story hasn't changed** — four straight reports of a "new widest ever" gap, now easing slightly to -19.4% purely on price, with a fair value this desk hasn't touched since 9/23. No rule treats price drift as a trigger; nothing here changes that.
4. **GEHC's round trip (overvalued → near-parity) in roughly 24 hours is the clearest demonstration yet of how thin this particular model's margin of error is.** Treat today's -1.65% as noise-band, not a fresh re-rating, consistent with BW's and BR's own read of the same move.

No trade recommended off this report (research-only mandate, as always).

---

## 1. Marvell Technology (MRVL) — first-ever DCF build, GS's new #1 pick

### Why now, and why two scenarios
This is MRVL's first appearance in this desk's coverage — rule 6 (MS DCF + BW risk read required before any new name is investable) has been the only thing blocking this name since GS first flagged it. The trigger: Marvell's 10/6 Investor Day, where management raised the **FY2028 revenue target to ~$20B** (from an $18B prior outlook, vs. ~$18.2B Street consensus) and introduced a **first-ever FY2031 framework of $70-90B revenue with EPS ≥$30**, alongside a plan to hold non-GAAP operating margin in the 38-40% range entering FY2027Q4 and the upper end of that band during FY2028. The stock closed +5.81% at $287.01 on the news (multi-source confirmed per GS's 10/7 report).

The honest problem for a DCF: that FY2031 framework is a **management target, not a consensus estimate** — Street's own FY2031 revenue consensus sits closer to **~$47B**, roughly half of management's $70-90B midpoint. Building one model off either number alone would be misleading, so this desk built both.

### Inputs (common to both scenarios)
- **FY2026 actual revenue (ended Jan 2026):** $8.195B, +42% YoY, record year, data center 74% of mix
- **FY2027 guide (most recent, post-raises):** ~$11.5B, +40% YoY
- **Diluted shares outstanding:** 915M (Q2 FY27, 8/27/26 print)
- **Balance sheet:** cash & equivalents $3.9B, total debt $5.0B → net debt **$1.1B**
- **Beta:** 1.8 (street estimates range wildly, 1.28-2.87 across sources this run — picked a mid-to-upper point reflecting a smaller, more customer-concentrated AI-semis name than NVDA)
- **Cost of equity (CAPM):** Rf 5.29% (book-standing input, set 10/1 — see rate-check note below) + 1.8 × 5.0% ERP = **14.29%**
- **Cost of debt (pre-tax):** ~5.8%; effective tax rate: 18% (typical fabless-semis effective rate incl. R&D credits/foreign mix)
- **Capital structure:** market-value weights — at a ~$262.6B market cap vs. $5.0B gross debt, D/(D+E) ≈ 2%
- **WACC = 0.98 × 14.29% + 0.02 × 5.8% × (1-0.18) ≈ 14.09%**
- **Terminal growth (g):** 3.0%, consistent with this book's other semis/AI names
- **FCF build:** D&A 5% of revenue, capex 4% of revenue (fabless, capital-light), ΔNWC drag 1% of revenue → the three roughly net to zero, so unlevered FCF ≈ NOPAT in this model (simplifying assumption, flagged as a model-risk item below)

### Scenario A — Management case (full credit to the $70-90B FY31 framework, midpoint $80B)

| | FY27E | FY28E | FY29E | FY30E | FY31E |
|---|---|---|---|---|---|
| Revenue ($B) | 11.5 | 20.0 | 31.8 | 50.4 | 80.0 |
| YoY growth | +40% | +74% | +59% | +59% | +59% |
| Non-GAAP op margin | 36% | 39% | 40% | 41% | 42% |
| EBIT ($B) | 4.14 | 7.80 | 12.72 | 20.66 | 33.60 |
| NOPAT ≈ FCF ($B) | 3.40 | 6.40 | 10.43 | 16.94 | 27.55 |
| PV factor @14.09% | 0.8765 | 0.7682 | 0.6734 | 0.5903 | 0.5174 |
| PV of FCF ($B) | 2.98 | 4.92 | 7.03 | 10.00 | 14.26 |

*(Revenue path: FY27/28 are management's own explicit guides; FY29-30 interpolated at the implied 58.7% CAGR needed to bridge FY28's $20B to FY31's $80B midpoint — i.e., no independent growth assumption layered on top of management's own numbers.)*

Sum of PV(FCF, FY27-31) = **$39.2B**
Terminal value (FY31 FCF × 1.03 / (0.1409-0.03)) = $28.38B / 0.1109 = **$255.9B**; PV = **$132.4B**
**Enterprise value ≈ $171.6B** → less net debt $1.1B → **Equity value ≈ $170.5B** → ÷ 915M shares = **≈$186/share**

**Gap vs. $287.01 = -35.1% overvalued**, even giving full credit to management's own newly-raised, first-ever-issued FY2031 target.

### Scenario B — Street-consensus case (FY31 revenue ~$47B, roughly the Street's own long-run number)

Same FY27/28 guided inputs; FY29-31 bridged to $47B at a 33.0% CAGR instead of 58.7%, margins trimmed slightly (less operating leverage at slower scale): FY29 39%, FY30 39.5%, FY31 40%.

| | FY27E | FY28E | FY29E | FY30E | FY31E |
|---|---|---|---|---|---|
| Revenue ($B) | 11.5 | 20.0 | 26.6 | 35.4 | 47.1 |
| NOPAT ≈ FCF ($B) | 3.40 | 6.40 | 8.51 | 11.46 | 15.45 |
| PV of FCF ($B) | 2.98 | 4.92 | 5.73 | 6.77 | 7.99 |

Sum PV(FCF) = **$28.4B**. Terminal value = $15.91B/0.1109 = **$143.5B**; PV = **$74.3B**
**Enterprise value ≈ $102.6B** → equity ≈ $101.5B → ÷ 915M = **≈$111/share**

**Gap vs. $287.01 = -61.4% overvalued.**

### Sensitivity table (management case, WACC × terminal growth, fair value $/sh)

| Scenario | WACC -1pp (13.09%) | WACC base (14.09%) | WACC +1pp (15.09%) | g +0.5pp (base WACC) | g -0.5pp (base WACC) |
|---|---|---|---|---|---|
| Fair value | $209 | **$186** | $167 | $194 | $179 |

Every cell in this table — the most favorable combination of inputs this desk is willing to defend — still sits 27-42% below the live $287.01 print. This is not a model that flips to "fairly valued" on a plausible assumption tweak.

### Verdict: OVERVALUED, bluntly
GS's own screen calls this "the single most actionable new idea on the sheet" off a genuinely strong, well-corroborated catalyst. This desk doesn't dispute the catalyst — the FY28 raise and the FY31 framework are real, multi-source-confirmed, and directionally bullish for the business. The disagreement is about price: the market is already paying for a growth outcome that requires management's own most aggressive long-term target to land exactly on the money, with no margin for a Street-consensus-style disappointment. That is exactly the setup this desk exists to flag. **Hard pass at $287.01; this desk would revisit only on a meaningful pullback (see below) or a confirmed near-term beat that independently re-rates the FY27/28 base before the FY29-31 bridge gets re-examined.**

A rough "what would make this fair" check: solving backward, the management-case model needs roughly a 10.5-11% WACC (vs. this desk's 14.09%) to justify $287 on unchanged cash flows — i.e., the market is pricing MRVL closer to an investment-grade-utility discount rate than an AI-semis-with-customer-concentration discount rate. That gap, not the growth story, is this desk's real objection.

---

## 2. Six holdings — price-roll update only (fundamentals/WACC unchanged since 9/23 build / 10/1 rebuild)

No WACC rebuild this run. Fresh WebSearch for a rate move again came up short of a same-day, independently confirmable print — one new data point this run (a 9/30-dated source citing the 10yr at exactly 5.29%) mildly corroborates the standing Rf 5.29% input rather than contradicting it, consistent with BR's 10/6 ~5.2% data point. Per rule 4, an unconfirmed-but-consistent read doesn't trigger a rebuild; **fair values stay exactly as set 10/1, only live prices roll forward.**

| Ticker | Fair Value (unchanged) | Price (was → now) | Gap (was → now) | Verdict |
|---|---|---|---|---|
| XLE | $58.9 (WACC 11.09%, Brent $76/bbl) | $63.135 → **$64.37** | -6.7% → **-8.5%** | **OVERVALUED, new widest-ever reading, third straight widening** |
| NVDA | $192.0 (WACC 11.59%) | $241.765 → **$238.235** | -20.6% → **-19.4%** | **OVERVALUED**, easing purely on today's pullback |
| GEHC | $63.9 (WACC 9.09%) | $66.415 → **$64.97** | -3.8% → **-1.65%** | **Near-parity**, round-tripping back from yesterday morning's spike |
| OMCL | $49.1 (WACC 9.59%) | $34.74 → **$35.225** | +41.3% → **+39.4%** | **UNDERVALUED**, still the book's widest discount, narrowing on the grind higher |
| VTI | N/A | $380.28 | N/A | HOLD BY CONSTRUCTION |
| VXUS | N/A | $84.425 | N/A | HOLD BY CONSTRUCTION |

**XLE deserves a flag beyond a routine price-roll.** This is the third consecutive report in which XLE's gap has widened (-5.6% on 10/5, -6.7% on 10/6 AM, -8.5% now) on a Brent assumption ($76/bbl) that hasn't been revisited since 7/27's partial rollback. BW has independently flagged the identical pattern three times from the risk side. This desk is overdue for a dedicated Brent-assumption re-check at the next full rebuild rather than another bare roll-forward — logging that explicitly rather than letting a fourth report repeat the same note.

**GEHC's round trip is this report's clearest "don't overreact to a single session" lesson.** Yesterday morning's $66.415 print flipped this model to a genuine -3.8% overvaluation; today's $64.97 brings it back to -1.65%, essentially noise-band parity, on zero fundamentals change either direction. Consistent with BW's and BR's own reads of the same move. No action; the 10/29 earnings print (~22 days out) remains the next thing that could move this model for real reasons.

---

## Key assumptions that could break these models

**MRVL-specific:**
- **The FY29-31 revenue bridge is the single biggest swing factor in either scenario** — both scenarios borrow management's own FY27/28 guides unmodified and differ only in how the FY31 endpoint is reached (management's $80B midpoint vs. Street's ~$47B). A confirmed FY28 print materially above or below $20B would move both scenarios' starting point, not just one.
- **Beta (1.8) is this desk's own estimate, not a consensus figure** — sources this run ranged from 1.28 to 2.87. A lower beta (say 1.3, closer to NVDA's megacap-adjacent profile) would lower WACC to roughly 11.9% and lift the management-case fair value toward ~$230-240/share — still below $287 but a materially thinner gap. This is the single assumption most worth revisiting if MRVL's volatility profile settles down post-Investor-Day.
- **The D&A ≈ capex ≈ NWC-drag simplification (5%/4%/1% of revenue) nets FCF to approximately NOPAT.** Custom-silicon NRE and packaging capacity commitments could push real capex meaningfully above 4% of revenue at this scale, which would lower FCF and widen the overvaluation gap further — this is a conservative-for-the-bull-case, not an aggressive, simplification.
- **Operating margin ramp to 42% by FY31** assumes continued leverage beyond management's own explicit 38-40% target band. If margins plateau at 40% instead of climbing to 42%, FY31 FCF falls by roughly 5%, and fair value in the management case drops to roughly $178/share — directionally the same conclusion, slightly wider gap.

**Legacy six (standing, unchanged in substance since 10/1):**
- **Risk-free rate (Rf 5.29%, set 10/1).** Now seven calendar days without an independently confirmable same-day print; this run's one new data point (a 9/30-dated 5.29% read) is mild corroboration, not confirmation. GEHC and XLE have the thinnest/most sensitive gaps on the book.
- **XLE/Brent base case ($76/bbl)** — unchanged since 7/27, now the subject of three straight widening-gap flags from this desk and BW alike; the next full rebuild should revisit this specifically rather than rolling it forward again.
- **GEHC's net-debt/tariff assumptions** (9/23 build) — unmoved; GEHC's confirmed 10/29 print (~22 days out) is the nearest scheduled catalyst on the book.
- **NVDA's growth/margin trajectory vs. FY28 guidance embedded in the build** — unchanged since 9/23; next print ~11/18 per JPM's fresh calendar check, well outside any near-term window.
- **OMCL's margin-recovery assumption behind the $49.1 fair value** — unchanged; 10/29-30 print still the thesis-confirming event.

---

## Cross-check with GS screener (analysts/gs-stock-screener.md, 2026-10-07 ~09:4x ET report)

**Direct disagreement on MRVL, stated plainly as the persona's stance requires.** GS calls MRVL "the single most actionable new idea on the sheet today" off a clean, multi-source-confirmed Investor Day beat, and it isn't wrong about the catalyst being real and well-corroborated. This desk's model says the market has already paid for that catalyst and then some: even the full-credit management case comes in **-35%** below the live price, and the Street-consensus case comes in **-61%** below it. GS's own bull-case price targets on file pre-event ($300-325) look dated-low now that the stock already cleared $287 on the news, but neither GS's pre-event targets nor this desk's post-event DCF support paying up at the current print. This is exactly the screener-vs-valuation tension this desk exists to surface — GS's rule-6 ask is now answered, and the answer is no.

No disagreement on NVDA, GEHC, XLE, or OMCL direction — GS's 10/7 report carries forward the same live-price inputs this desk used (state.md's 09:39 ET snapshot) and flags GEHC's stale "guidance cut" headline concern, which this desk has no fresh information to confirm or deny and treats as a data-quality flag, not a valuation input.

## Explicit read on trader's current positions (all six held) plus GS's #1 pick

**MRVL** (GS's #1 pick, not held): hard pass, gap ≈ **-35% (management case) to -61% (Street case)**. Not investable at $287.01 under either scenario.
**XLE**: overvalued, gap ≈ -8.5% (was -6.7%), new worst-ever reading, third straight widening — hold, no add, Brent assumption overdue for a re-check.
**NVDA**: overvalued, gap ≈ -19.4% (was -20.6%), easing on price alone — hold, no add, no trim; BR's no-new-cash instruction stands.
**GEHC**: near-parity, gap ≈ -1.65% (was -3.8%) — round-tripped back from yesterday's spike; still hold, not a sell trigger under any standing rule.
**OMCL**: undervalued, gap ≈ +39.4% (was +41.3%, narrowing on the grind higher) — still the widest mispricing on the book by percentage; DCA gate unaffected, per state.md ~$1.79 from firing this morning.
**VTI / VXUS**: hold, no valuation view — defer to BR/BW.

**Standing flag for the next run:** this desk's six-name book remains conditioned on the 10/1 WACC rebuild (Rf 5.29%) holding — now seven calendar days without an independently confirmable same-day print, mildly corroborated but not confirmed this run. XLE's Brent assumption is now the single most overdue item for a dedicated re-check, independent of the rate question. MRVL's model is new and its beta input (1.28-2.87 range in the market) is the single biggest source of uncertainty in that build specifically — worth revisiting once the stock's post-Investor-Day volatility settles into a cleaner read.

---

Sources:
- [Marvell Technology, Inc. Reports Fourth Quarter and Fiscal Year 2026 Financial Results](https://investor.marvell.com/news-events/press-releases/detail/1011/marvell-technology-inc-reports-fourth-quarter-and-fiscal-year-2026-financial-results)
- [Marvell Technology, Inc. Reports Second Quarter of Fiscal Year 2027 Financial Results](https://investor.marvell.com/news-events/press-releases/detail/1031/marvell-technology-inc-reports-second-quarter-of-fiscal-year-2027-financial-results)
- [Marvell Technology stock rallies following ambitious investor day targets — Investing.com](https://www.investing.com/news/stock-market-news/marvell-technology-stock-rallies-following-ambitious-investor-day-targets-4934767)
- [Marvell Investor Day: Stock Jumps 7% On $90 Billion Goal — Benzinga](https://www.benzinga.com/news/26/10/62198187/marvell-investor-day-stock-jumps-90-billion-revenue-target)
- [Marvell Technology Targets Up to $90B Revenue by 2031 as AI Demand Accelerates — Yahoo Finance](https://finance.yahoo.com/technology/ai/articles/marvell-technology-targets-90b-revenue-200205162.html)
- [Marvell Now Sees as Much as $90 Billion in Annual Sales by Fiscal 2031 — Motley Fool](https://www.fool.com/investing/2026/10/07/marvell-now-sees-as-much-as-usd90-billion-in-annual-sales-by-fiscal-2031-here-s-why-it-s-a-chip-stock-to-buy/)
- [Marvell Is Growing Faster And Its Margin Guide Is Standing Still — Trefis](https://www.trefis.com/stock/mrvl/articles2/614565/marvell-is-growing-faster-and-its-margin-guide-is-standing-still/2026-09-08)
- [MarketBeat — MRVL forecast](https://www.marketbeat.com/stocks/NASDAQ/MRVL/forecast)
- [Treasury Yields & Bond Market · October 2026 — stockmarketwatch.com](https://stockmarketwatch.com/bonds/reports/october-2026)
- Internal: trading-experiment/state.md (Balance history through 10/7 ~09:39 ET), analysts/gs-stock-screener.md (10/7 ~09:4x ET report), this desk's own 10/1 and 10/6 reports (git history) for the legacy six names' full WACC-rebuild methodology and FCF builds
