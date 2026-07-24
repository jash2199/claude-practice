# MS DCF Valuation — Investment Banking Valuation Memo
**Date: 2026-07-24 (Friday, ~10:16 ET, first update since 7/23 ~10:11 ET)**

*Persona: VP-level valuation coverage for the "Claude Robinhood Trader" experiment. Coverage this run: (1) NVDA, (2) OMCL, (3) VTI, (4) VXUS — all four current holdings per state.md — plus (5) **XLE**, GS's current #1 pick (analysts/gs-stock-screener.md, 2026-07-24 ~09:45 ET report — XLE was promoted from #2 to #1 this cycle, swapping places with OMCL). **This is the first cycle XLE has actually been GS's #1 pick rather than #2/#3, so this is the first cycle it falls inside this desk's fixed coverage mandate (holdings + current #1 only) — not a scope expansion, and not the OXY/MU backlog GS/BW/BR have also been asking about, which remain outside mandate as written.** Live holding prices below are the trader's own Robinhood-verified quotes from state.md's 2026-07-24 ~09:36 ET check-in (per standing rule 4 — never size off WebSearch for these four names); XOM/CVX/XLE prices are WebSearch-sourced since this desk has no live feed for non-holdings, same convention GS uses for screening ideas — flagged explicitly below.*

---

## Verdicts (top line)

| Ticker | Current Price | DCF Fair Value (base case) | Verdict |
|---|---|---|---|
| **NVDA** | $207.685 (7/24, ~09:36 ET trader-recorded live quote) | ~$150.6 (WACC 11%, g 3%) — unchanged model | **OVERVALUED — ~27.5% downside to DCF fair value.** Narrowed slightly from 28.6% (7/23) as the stock eased a touch further; no model change. |
| **OMCL** | $40.17 (7/24, ~09:36 ET trader-recorded live quote) | ~$56.35 (WACC 9%, g 3%) — unchanged model | **UNDERVALUED — ~40.3% upside to DCF fair value**, a fresh widest-yet reading. Still no buy signal into 7/30 — see below. |
| **VTI** | $365.055 (7/24, ~09:36 ET trader-recorded live quote) | N/A — no single-company DCF applies | **NOT APPLICABLE / HOLD BY CONSTRUCTION.** Unchanged from prior reports. |
| **VXUS** | $83.52 (7/24, ~09:36 ET trader-recorded live quote) | N/A — no single-company DCF applies | **NOT APPLICABLE / HOLD BY CONSTRUCTION.** Unchanged from prior reports. |
| **XLE** *(NEW — GS's #1 pick this cycle)* | $59.20 (7/24, WebSearch-sourced — no live feed for non-holdings) | ~$47-48 implied (composite look-through DCF, base case — see Part 5 methodology) | **MODESTLY-TO-MODERATELY OVERVALUED at base case (~19% downside on the top-2-holdings composite)** — but the gap is driven almost entirely by one assumption (oil-price mean reversion), not by weak underlying businesses. A genuinely bullish, defensible case exists on the other side of that same assumption — see below. **Not a clean "hard pass" the way MU is; this clears rule 6 for a small, disciplined size if the trader/BR/BW want to proceed, with eyes open on the assumption driving the verdict.** |

**Bottom line for the trader:** Nothing structural changed on NVDA or OMCL this cycle — fresh WebSearch found no new catalyst on either name, and both gaps moved only mechanically with price (NVDA's gap narrowed slightly as the stock eased further; OMCL's widened slightly as the stock gave back yesterday's bounce). **The headline this cycle is XLE, finally covered now that it's actually GS's #1 pick.** This desk built a composite look-through DCF using XLE's two largest holdings — ExxonMobil (XOM, 20.3% of the fund) and Chevron (CVX, 14.6% of the fund), together ~35% of AUM — rather than a single-company model, since XLE itself is a 24-stock basket with no cash flows of its own. The finding: **at this desk's base-case assumptions, XOM screens as meaningfully overvalued (~30% downside) while CVX screens close to fair value (~4% downside)**, blending to a composite read of ~19% overvalued for the modeled 35% of the fund. But the entire gap traces to one lever — whether Brent normalizes toward the ~$60-70 range GS's own and JPM's own commodity desks are forecasting for 2026-27, or stays structurally elevated near today's ~$100 print. **If oil stays elevated, XOM's own bull-case DCF corner ($173.70) actually exceeds its spot price ($156.90)** — meaning this is not a "the business is broken" overvaluation call like MU's, it's a "the price only works if the current geopolitical oil premium is permanent" call, and reasonable people (including this book's own GS desk, whose thesis explicitly rests on a *structural* OPEC spare-capacity story, not just event risk) can disagree on which scenario is right. **This desk's own read: treat the base case as the more likely one** — GS's own sourced Q4'26 forecast ($71 Brent) and JPM's/EIA's 2027 reads ($60-65) all point toward normalization, and a DCF should anchor to the consensus commodity path, not the spot price, for a cyclical sector. That said, this is a genuinely closer call than any other name on this desk's book, and — unlike MU's ~71% unrebutted overvaluation — this one clears rule 6 for a small, disciplined entry if BR/BW want to proceed, with the position sized assuming real cyclicality risk, not a "hedge that can't lose."

---

## 1. NVIDIA (NVDA) — brief update, model unchanged

### What changed since 7/23
Price eased further from $210.79 (7/23 open) to $207.685 (7/24, ~09:36 ET), a further ~1.5% pullback over the two sessions, consistent with the broad market staying soft into the Friday open on lingering Fed-hike/AI-capex-valuation concerns carried over from Thursday's Alphabet/Tesla-driven rout (per state.md's 7/24 09:36 ET run notes). Fresh WebSearch this cycle found nothing structurally new: NVDA is described as "barely beating the S&P 500 in 2026" despite Q2 revenue of $81.6B (+85% YoY), trading at a forward P/E of ~23.6x (a modest 10% premium to the S&P 500) with Street's own average 12-month target at $302.83 — a very different number from this desk's own $150.6 base case, a divergence already documented and unchanged since the 7/10 build (Street prices in continued hyperscaler capex momentum; this desk's model has consistently discounted that durability given the China-export-control and custom-silicon competitive risks flagged since inception). No new guidance, no new export-policy text, next earnings still ~8/26 — nothing to rebuild here.

### Verdict: **OVERVALUED, gap narrowed modestly on further price pullback**
Same 5-year build (FY2027E revenue $380B, FCF margin path 56%→48%, WACC 11% base, g 3% base) against today's $207.685 spot:

| WACC \ Terminal g | 2.0% | 3.0% | 4.0% |
|---|---|---|---|
| 9% | $178.6 | $202.2 | $235.2 |
| 10% | $155.7 | $172.7 | $195.5 |
| **11% (base)** | $137.8 | **$150.6** | $167.1 |
| 12% | $123.6 | $133.4 | $145.8 |
| 13% | $111.9 | $119.7 | $129.2 |

Base case ($150.6) implies **~27.5% downside** from $207.685 (28.9% on 7/15 → 27.7% on 7/16 → 24.9% on 7/17 → 25.8% on 7/20 → 27.2% on 7/21 → 27.1% on 7/22 → 28.6% on 7/23 → 27.5% today) — the gap moved mechanically narrower as the stock eased further toward (not away from) fair value, not a fundamental reassessment. Key breakable assumptions unchanged (margin durability is the upside break; China export policy, Blackwell-Rubin execution, HBM supply bottleneck, and the emerging custom-silicon competitive threat are the downside breaks; full writeup via git history, 7/10 report). **Still a hold-for-other-reasons position, not an add, and not a trim** — concentration remains comfortably below BW/BR's 18-20% trigger (~14.69% equity/~10.50% pool per state.md's 7/24 09:36 ET check).

---

## 2. Omnicell (OMCL) — brief update, model unchanged, discount widest yet

### What changed since 7/23
Price gave back part of yesterday afternoon's bounce, opening today at $40.17 (7/24, ~09:36 ET, -0.12% vs. the $40.32 level this desk cited 7/23 morning but +0.78% vs. Thursday's $39.86 close — the stock's first-ever close below the contingency plan's $40 line, per state.md). Fresh WebSearch this cycle found nothing new structurally: earnings remain confirmed for July 30 before the open; the only "news" surfaced (the 7/1 COO→President promotion, the Q1 EPS beat/guidance raise) is stale background already priced into the thesis. **Data-quality flag, restated again**: WebSearch consensus figures continue to disagree with each other cycle to cycle (one search this run surfaced an EPS estimate of $0.44 vs. the $0.48 Zacks figure this desk and JPM have both used for weeks) — treated as noise, not a new signal; the trader's own Robinhood-verified price ($40.17) is the only number used below, per rule 4.

### Sensitivity table — fair value per share (unchanged)

| WACC \ Terminal g | 2.0% | 3.0% | 4.0% |
|---|---|---|---|
| 7% | $70.30 | $85.26 | $110.19 |
| 8% | $58.30 | $67.90 | $82.31 |
| **9% (base)** | $49.73 | **$56.35** | $65.60 |
| 10% | $43.33 | $48.11 | $54.50 |
| 11% | $38.36 | $41.95 | $46.56 |

### DCF vs. market price
Base case ($56.35) implies **~40.3% upside** from the $40.17 live price — a fresh widest-yet reading (up from 7/23's ~39.8%), purely a function of the stock giving back part of yesterday's bounce against an unchanged model. All 15 sensitivity cells still sit above the current price.

### Verdict: **UNDERVALUED, still no buy signal into 7/30**
No change to this desk's framing from the last four cycles of saying it: the discount widening on drift is not itself a buy signal. No guidance cut, no contract loss, no margin/bookings deterioration has been found by this desk, JPM, or any other desk this cycle. The mandatory $40 re-read already fired and resolved cleanly on 7/23 (BR's dedicated re-read, HOLD/no structural break) — today's price sitting back above $40 doesn't reopen that question, and this desk has nothing new to add to it. **No case to add before 7/30.** Rule 4 of the contingency plan (no same-minute decisions on the print itself) remains the operative discipline for next week, not this desk's valuation lane.

### Key assumptions that could break this model (unchanged)
- **Upside break**: back-half FY2026 revenue tracking closer to Q1's +14.9% pace than the guided ~6.6%, with margin expansion continuing at the Q1 rate — plausibly pushes fair value into the $65-85 range.
- **Downside break**: JPM's -20%/+15% 7/30 tail is the dominant near-term risk this desk is tracking — a tighter-than-usual beat bar this quarter (consensus at the top of guide vs. Q1's blowout) raises the chance of a "beat but sell off anyway" outcome.

---

## 3. Vanguard Total Stock Market ETF (VTI) — unchanged, brief refresh only
No change to the standing "not applicable" treatment. Price ($365.055, 7/24 ~09:36 ET) is up ~0.10% vs. Thursday's close — a calmer, mixed open after Thursday's triple-shock session. No view offered on adding to or trimming this position — that's BR's lane, not a DCF call.

## 4. Vanguard Total International Stock ETF (VXUS) — unchanged, brief refresh only
No change to the standing "not applicable" treatment. Price ($83.52, 7/24 ~09:36 ET) is down ~0.12% vs. Thursday's close, essentially flat and moving in line with the broader tape. No DCF-based case to add or trim.

---

## 5. Energy Select Sector SPDR (XLE) — NEW COVERAGE, composite look-through DCF

### Why this is a composite model, not a single-company DCF
XLE is a 24-holding, market-cap-weighted basket, not an operating company — it has no revenue, margin, or cash flow line of its own to project. The standard practice for valuing a concentrated sector fund (and the only way to produce a genuinely decision-useful "fair value vs. price" read, rather than an empty "N/A" the way this desk treats VTI/VXUS) is a **look-through build on the names that actually drive the fund's economics**. XLE's top two holdings — **ExxonMobil (XOM, 20.3% of AUM) and Chevron (CVX, 14.6% of AUM)** — together account for ~35% of the fund; the next three (ConocoPhillips 5.9%, Marathon Petroleum 4.7%, Phillips 66 4.6%) add another ~15%, split between upstream E&P (COP, similar oil-price leverage to XOM) and downstream refining (MPC/PSX, whose refining-margin economics can actually move opposite to crude-price spikes). This desk modeled the top two directly and applies the result to the whole fund only directionally, flagged explicitly below — this is a first-pass build, not a name-level model with the confidence of the NVDA/OMCL builds.

**The dominant assumption, more important than WACC or terminal growth for either name**: Brent crude is currently ~$100/bbl (per this week's Hormuz/Red Sea/Kazakhstan-CPC disruption, the highest since May) against a Street consensus that expects this to normalize — Goldman Sachs's own commodities desk has Q4 2026 Brent at **$71**, J.P. Morgan's house view averages **~$60** for full-year 2026, and the EIA's 2027 forecast is **~$64**. This desk's base case anchors near that consensus normalization path rather than extrapolating today's spot price forward, consistent with how a DCF should treat a genuinely cyclical, event-driven commodity spike. A bull case (oil staying structurally elevated — plausible given GS's own OPEC spare-capacity thesis) is shown separately in the sensitivity grid, not ignored.

### 5a. ExxonMobil (XOM) — proxy build off consensus EPS/FCF-per-share path
*Using per-share consensus estimates directly (rather than aggregate financials ÷ an estimated share count) to avoid compounding error from an unverified share count — WebSearch-sourced figures for a non-holding, cross-check before sizing.*

Assumed 5-year FCF-per-share path (Y1 = current elevated-oil run-rate per 2026 consensus EPS of $7.81; Y2-Y5 tapering as Brent normalizes toward the $60-70 consensus band, then stabilizing on buyback-driven per-share growth): **$7.81 → $6.50 → $5.60 → $5.70 → $5.85**

| WACC \ Terminal g | 1.5% | 2.5% | 3.5% |
|---|---|---|---|
| 6.5% | $113.07 | $135.80 | $173.70 |
| 7.0% | $103.04 | $121.06 | $149.41 |
| **7.5% (base)** | $94.69 | **$109.28** | $131.25 |
| 8.0% | $87.59 | $99.62 | $117.02 |
| 8.5% | $81.51 | $91.57 | $105.66 |

Base case ($109.28) vs. spot **$156.90** (7/24 close, WebSearch-sourced) implies **~30.4% downside**. Note the range: at the low-WACC/high-growth corner (6.5%/3.5% — i.e., a genuinely permanent oil-premium, low-risk-premium world), fair value reaches **$173.70**, *above* spot — the honest way to read this table is that XOM's current price requires the market to be pricing oil closer to today's spot than to the sell-side's own consensus normalization path. Cross-check: Street's own average analyst target is $167-173 (30 analysts, "Buy" consensus) — materially above both this desk's base case and spot, implying Street's own models are using assumptions closer to this table's bull corner than its base case. Flagging that divergence plainly rather than picking a side silently.

### 5b. Chevron (CVX) — proxy build off consensus EPS/FCF-per-share path
*Same per-share-proxy method. Note: consensus EPS figures for CVX were noticeably less consistent across sources this cycle (2026E ranging $8.30-$16.74 depending on source/vintage) — a real data-quality caveat, not just this desk's usual disclaimer, and CVX's own Q2 2026 print lands July 31, one day after OMCL's, which will be the actual test of these assumptions.*

Assumed path: **$13.51 → $12.68 → $10.50 → $10.70 → $11.00** (mirrors XOM's normalization logic, less pronounced given CVX's higher Permian-basin volume growth partially offsetting price normalization)

| WACC \ Terminal g | 1.5% | 2.5% | 3.5% |
|---|---|---|---|
| 6.5% | $211.90 | $254.60 | $325.80 |
| 7.0% | $193.00 | $227.00 | $280.20 |
| 7.5% | $177.30 | $204.80 | $246.00 |
| **8.0% (base)** | $164.00 | **$186.60** | $219.30 |
| 8.5% | $152.60 | $171.50 | $197.90 |

Base case ($186.60) vs. spot **$194.42** (7/24, WebSearch-sourced) implies only **~4.0% downside** — essentially fairly valued, a materially different read than XOM despite both names sharing the same oil-normalization assumption. This is driven by CVX's Y1 EPS estimate already sitting at a modest premium and its volume-growth offset; given the source inconsistency flagged above, treat this as the less confident of the two builds and revisit after the 7/31 print.

### 5c. Blended read-through to XLE
Weighting XOM and CVX by their actual fund weights (20.3% / 14.6%, i.e. 58.1% / 41.9% of the modeled ~35% subset): blended base-case gap = 58.1%×(−30.4%) + 41.9%×(−4.0%) ≈ **−19.3%** — i.e., the modeled portion of the fund screens as **modestly-to-moderately overvalued** at this desk's base case. The un-modeled ~65% (COP and other E&P names carry similar oil-price-mean-reversion risk to XOM; MPC/PSX's refining economics are a genuine partial offset, since crack spreads can widen when crude spikes) makes the fund-level number directionally similar but less precise than either single-name read above.

### Verdict: **MODESTLY-TO-MODERATELY OVERVALUED at base case — closest call on this desk's book, clears rule 6 for a small, disciplined size**
Unlike MU (~71% overvalued, unrebutted for nine-plus cycles — a clean, non-controversial hard pass) or OMCL (a clean undervaluation with an unrelated binary-event gate), XLE's overvaluation call rests almost entirely on one assumption this desk believes is the more defensible one (oil normalizing toward consensus) but which reasonable analysts — including this book's own GS desk, whose thesis is explicitly structural (OPEC spare capacity), not just event-driven — could reasonably weight differently. **This desk's own view: size any XLE position, if BR/BW proceed, on the assumption that today's ~13.5% weekly Brent gain is closer to a geopolitical risk premium than a new floor** — a re-rating that historically mean-reverts once the acute shock (Hormuz/Red Sea/Kazakhstan) resolves, consistent with this desk's base-case build. That is a real, non-trivial disagreement with GS's own framing, stated bluntly per this desk's mandate — but it is a disagreement about a commodity-price scenario, not a business-quality problem, which is why this clears the rule-6 gate for a modest allocation where MU never has.

### Key assumptions that could break this model
- **Upside break (bull case for XLE)**: GS's own OPEC spare-capacity thesis proves structural rather than event-driven (the UAE's reported OPEC exit, modeled 2027 spare capacity cut from 3.8 to 2.5 mb/d) — if Brent settles into a genuinely higher structural range (~$85-95, not today's acute-shock spike but not the $60-70 consensus either), both XOM's and CVX's fair values shift meaningfully toward or above spot, and the composite verdict flips to fairly-valued-to-undervalued.
- **Downside break**: a fast de-escalation on Hormuz/Red Sea (the scenario multiple sources this cycle price at Brent $65-80) would compress cash flows faster than even this desk's base case assumes, widening the overvaluation further, especially for XOM and the E&P-heavy remainder of the fund.
- **Data-quality caveat**: several third-party EPS/revenue figures for both XOM and CVX were inconsistent across sources this cycle (flagged explicitly in Part 5b) — this is a first-pass build off WebSearch data, not a live-terminal pull; treat the precise dollar figures as directional, the qualitative divergence (XOM stretched, CVX near-fair, oil-assumption-dependent either way) as the more robust takeaway.

---

## Cross-check with GS screener (analysts/gs-stock-screener.md, 2026-07-24 ~09:45 ET)
GS promoted XLE to #1 this cycle (from #2) on the strength of the OPEC spare-capacity data point layered on top of the existing Hormuz/Red Sea/Kazakhstan event-risk thesis, explicitly flagging this desk's ten-cycle-long silence on the name as the book's single biggest process friction. This report closes that gap. **This desk's read is more cautious than GS's**, though not a hard pass: GS is underwriting the *structural* case (spare capacity), which is a real and separate argument from the event-risk premium this desk's base case treats as likely-to-mean-revert — worth both desks' views being on the record rather than this desk simply deferring to GS's conviction or vice versa. GS's OMCL read (still #1 by conviction, #2 by actionability, hold through 7/30) matches this desk's own unchanged view exactly. **OXY and MU remain outside this cycle's mandate** (current holdings + GS's #1 pick only, per the persona definition) — both are GS's #4 and #3 picks respectively this cycle, not #1, so covering them would be a scope expansion this desk isn't authorized to make unilaterally; noting this explicitly given state.md's Strategy & theories rule 10 flags the backlog as a standing friction — the fix this cycle is that XLE, the name that actually reached #1, is now covered, not that the mandate itself has changed.

## Explicit read on trader's current positions (NVDA, VTI, VXUS, OMCL) + new coverage (XLE)
**NVDA**: unchanged directionally — DCF does not support adding at $207.685 (~27.5% downside to base case); existing ~$5 notional position isn't worth trading out of on valuation grounds. Concentration check: ~14.69% equity/~10.50% pool, still well inside BW/BR's 18-20% review trigger.
**OMCL**: hold, no add, discount now at its widest reading yet (~40.3%) but still not a pre-print buy signal — see rule 4 discipline. No change to this desk's framing over five straight cycles.
**VTI / VXUS**: hold, no valuation view — diversified core-sleeve buys, not DCF calls.
**XLE**: **not currently a holding.** This desk's base case reads it as modestly-to-moderately overvalued (~19% on the modeled subset), but — unlike MU — this is a defensible, close call resting on a single commodity-price assumption rather than a clean hard pass, and it clears rule 6's cross-vetting bar. Sizing decision (if any) belongs to BR's allocation framework and BW's risk read, not to this desk's valuation lane; this desk's contribution is simply that the gate GS/BW/BR have been waiting on is now open, with an explicit statement of what the trader would be betting on (oil mean-reverting, not staying elevated) if a position is opened.
