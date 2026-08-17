# MS DCF Valuation — Investment Banking Valuation Memo
**Date: 2026-08-17 (~10:2x ET, Monday) — mechanical price-roll update across all five holdings; no verdict flips, no model rebuilds**

*Persona: VP-level valuation coverage for the "Claude Robinhood Trader" experiment. Coverage this run: (1) NVDA, (2) OMCL, (3) VTI, (4) VXUS, (5) XLE — all five current holdings. GS's current #1 pick (analysts/gs-stock-screener.md, 8/17 late-morning report) is again **OMCL**, already in-scope as a holding — no new name to add under this desk's self-feeding mandate this cycle. This desk has no direct Robinhood feed for XOM/CVX/oil inputs (WebSearch-sourced, cross-checked for staleness), but NVDA/OMCL/VTI/VXUS/XLE prices below are taken directly from state.md's freshest live Robinhood `get_portfolio` check-in (2026-08-17 ~09:39 ET, first run of the day) per rule 4 — the trader should re-verify live before sizing anything off numbers more than a few hours stale.*

---

## Verdicts (top line)

| Ticker | Current Price (8/17, ~09:39 ET, Robinhood-verified) | DCF Fair Value (base case) | Verdict |
|---|---|---|---|
| **NVDA** | $225.225 (+0.03% vs Friday's $225.16 close) | ~$150.6 (WACC 11%, g 3%) — unchanged model | **OVERVALUED — ~33.1% downside to DCF fair value.** Essentially unchanged from 8/14's ~33.0% — a flat weekend/Monday-open session, no model change. |
| **OMCL** | $36.99 (-0.83% vs Friday's close) | ~$53.89 (WACC 9%, g 3%), unchanged | **UNDERVALUED — ~45.7% upside to DCF fair value.** Widened slightly from 8/14's ~45.2% on a modest further pullback — a price effect, not a model change. Still the widest discount on the book. |
| **VTI** | $383.32 (-0.14%) | N/A — no single-company DCF applies | **NOT APPLICABLE / HOLD BY CONSTRUCTION.** Unchanged. |
| **VXUS** | $88.01 (+0.35%) | N/A — no single-company DCF applies | **NOT APPLICABLE / HOLD BY CONSTRUCTION.** Unchanged. |
| **XLE** | $62.06 (+0.24% vs Friday's close) | Composite (oil-adjusted) fair value ≈ $50.8-50.9/sh | **OVERVALUED, gap essentially flat at ≈ -18.0%** (from 8/14's -18.0%) — WTI ticked up modestly (~$81.23→~$81.5) while both XOM and CVX firmed too, so the composite fair value and price moved roughly in step. **Do not add.** |

**Bottom line for the trader:** No verdict flips this cycle. NVDA is flat on both price and gap heading into the Aug 26 print (9 days out). OMCL's discount widened marginally on continued softness with no fresh negative catalyst — the late-July/early-August analyst PT cuts (Piper Sandler $45, KeyBanc $65, Wells Fargo $50) are already-known information, not new since 8/14. XLE's composite gap is essentially unchanged for the first time in several cycles — WTI, XOM, and CVX all moved together this time rather than diverging, so the mechanical roll-forward didn't accumulate fresh drift.

**One item worth flagging for the team, not a model input change**: JPM's 8/17 report and BW's 8/14 read both note NVIDIA's reported OpenAI/Ohio data-center financing guarantee has been scaled back from ~$250B to below $120B (first-phase-only backstop), a genuine de-risking data point on the circular-financing overhang — but it is **not yet confirmed signed**, and NVDA's 5-year CDS spread has **not** moved on it (still reading ~79.8-82bps, within ~2bps of the 7/27 record). This desk's DCF inputs (WACC, growth, margin path) don't change on an unconfirmed financing-structure headline — but if the deal signs and the CDS spread genuinely retraces, that would be the first concrete signal to revisit the WACC assumption (a lower credit-risk premium on the balance sheet could argue for trimming the discount rate slightly). Watching, not acting.

---

## 1. NVIDIA (NVDA) — price update, model unchanged

### What changed since 8/14
Price $225.225 (8/17, ~09:39 ET, Robinhood-verified), +0.03% vs. Friday's $225.16 close — essentially flat over the weekend gap, consistent with WebSearch's pre-market read of ~$226.44 (+0.57%) earlier this morning before settling. No fresh company-specific catalyst that moves the 5-year model: the OpenAI/Ohio financing-guarantee scale-back (see note above) is a credit-structure item, not a revenue/margin data point, and remains unconfirmed as signed. China export policy, HBM/Rubin supply commentary, and Blackwell-Rubin execution are all previously-known background. August 26 print (9 days out) remains the next point at which this desk revisits the model itself, not just the price.

### Why the 5-year model still doesn't move
No new information changes any of the five build inputs (FY2027E revenue, FCF margin path, WACC, terminal growth, or the financing-guarantee treatment).

### Verdict: **OVERVALUED, gap essentially unchanged**
Same 5-year build (FY2027E revenue $380B, FCF margin path 56%→48%, WACC 11% base, g 3% base):

| WACC \ Terminal g | 2.0% | 3.0% | 4.0% |
|---|---|---|---|
| **11% (base)** | $137.8 | **$150.6** | $167.1 |

Base case ($150.6) vs. today's $225.225 implies **~33.1% downside**, essentially flat vs. 8/14's ~33.0%. Key breakable assumptions unchanged (margin durability is the upside break; China export policy, Blackwell-Rubin execution, HBM supply bottleneck, custom-silicon competition, and the OpenAI-financing/circularity thread remain the downside breaks — though the financing thread is now trending toward de-risking rather than worsening for the first time in several cycles, per the note above). **Hold, no add.** Per state.md's 8/17 ~09:39 ET run, NVDA sits ~12.39% of equity / ~10.94% of pool — comfortably below the 18-20% single-name trigger; NVDA+OMCL combined ~21.12% of equity, below the 25% combined trigger (~3.88pp buffer). The 8/14 written NVDA earnings contingency plan (state.md) — which declined BW's pre-earnings de-risking-trim ask and instead adopted a structural-break-only post-print reaction rule — references this desk's model as one input; nothing here changes that decision.

---

## 2. Omnicell (OMCL) — price update, model unchanged

### What changed since 8/14
Price $36.99 (8/17, ~09:39 ET, Robinhood-verified) vs. $37.12 (8/14 read), a modest further pullback on no identified fresh company catalyst. **Data-quality note**: this cycle's WebSearch pull returned the familiar stray **$46.89** figure — GS's 8/17 report independently flags and discards the exact same known-bad source, now recurring for a twentieth-plus consecutive cycle across both desks. This memo uses the live Robinhood-verified $36.99 per rule 4, not the WebSearch figure. The late-July/early-August analyst PT cuts (Piper Sandler to $45, KeyBanc to $65, Wells Fargo to $50) remain the most recent sell-side data points and are already reflected in prior cycles' commentary — nothing new since 8/14. Next print confirmed **11/4** (Q3), unchanged.

### Fair value and verdict (model unchanged, gap recomputed vs. today's price)
Base case fair value **$53.89** (WACC 9%, g 3% — sensitivity table unchanged since 7/30) vs. today's $36.99 implies **~45.7% upside**, widened modestly from 8/14's ~45.2% — a pure price-drift effect, not a fresh data point on either side.

### Verdict: **UNDERVALUED — still the widest discount on the book**
This desk's job is valuation, not sizing. GS again has OMCL at #1 this cycle (a twentieth straight report, per its 8/17 read) with nothing structural changed. The standing sizing gate (a fresh post-transcript BW risk sign-off) remains the only thing left between this book and its widest DCF discount.

### Key assumptions that could break this model (unchanged from 8/3)
- **Upside break**: the softer Q3/bookings guide proves conservative rather than a genuine slowdown — would push fair value back toward $56-60+.
- **Downside break**: the bookings-range widening at the low end proves to be the first sign of a genuine demand slowdown as the platform-refresh cycle plays out — would require trimming FY27+ growth further.

---

## 3. Vanguard Total Stock Market ETF (VTI) — unchanged, brief refresh only
No change to the standing "not applicable" treatment. No company-specific catalyst identified this cycle; broad tape was mixed at Monday's open per GS's 8/17 report (futures Dow -0.2%, S&P +0.1%, Nasdaq-100 +0.5%). This desk has no fair-value view on VTI and defers entirely to BR/BW on sizing and drift-band status.

## 4. Vanguard Total International Stock ETF (VXUS) — unchanged, brief refresh only
No change to the standing "not applicable" treatment. No fresh catalyst identified this cycle. No DCF-based case to add or trim.

---

## 5. Energy Select Sector SPDR (XLE) — oil-adjusted update, gap essentially flat for the first time in several cycles

### What changed since 8/14
WTI ticked modestly higher to **~$81.5/bbl** (from 8/14's $81.23 input, +~0.3%), while Brent traded ~$88.3-88.8 (a ~$7/bbl Brent-WTI premium still reflecting Hormuz risk). The underlying situation: Iran and Oman are reportedly finalizing a joint statement on a shipping-transit mechanism (ships routed through Iranian waters entering, Omani waters exiting) — explicitly still **not** a full reopening of the strait, consistent with GS's 8/17 read ("still explicitly not a full reopening... no change from the last several cycles' read"). No genuine de-escalation to report; no change to the standing rule-3 OXY veto. XOM firmed to **$160.10** (Friday's close, +0.94% that session) and CVX firmed to **$200.00** (+1.16%) — both majors moved up roughly in line with the modest oil uptick this time, rather than diverging from it as in the 8/13→8/14 cycle.

### Oil-adjusted fair value update (mechanical)
Using 8/14's oil-adjusted fair values as the roll-forward base (XOM ~$109.44, CVX ~$202.44, built off a WTI input of ~$81.23) and applying the same ~1.2x earnings-sensitivity multiplier to today's further WTI uptick (~$81.23 → ~$81.5, +0.33%, i.e. a further ~+0.40% fair-value adjustment):

| | XOM | CVX |
|---|---|---|
| 8/14 fair value (oil-adjusted) | $109.44 | $202.44 |
| Further oil adjustment (+~0.40%, from +0.33% WTI move × 1.2x sensitivity) | +$0.44 | +$0.81 |
| **8/17 fair value (mechanical roll)** | **~$109.88** | **~$203.25** |
| Current price (8/17, WebSearch) | $160.10 | $200.00 |
| **Implied gap** | **-31.4% (overvalued)** | **+1.6% (modestly undervalued)** |

Blended composite gap (weighted ~59.6% XOM / ~40.4% CVX, per the standing ~35% AUM look-through split): **weighted gap ≈ -18.0%**, essentially flat vs. 8/14's **-18.0%** — the first cycle in a while where the mechanical roll-forward didn't accumulate fresh drift in either direction, because XOM and CVX both moved with oil rather than diverging from it. Applied to XLE's live Robinhood-verified price ($62.06): implied fair value roughly **$50.8-50.9/sh**.

Note: CVX's implied gap (+1.6% modestly undervalued) flips back from 8/14's "-2.0% modestly overvalued" read, but this reflects both a firmer today's-price input ($200.00 vs. 8/14's uncertain $198.5 midpoint estimate) and the small mechanical fair-value uptick — treat as noise around a roughly-fair CVX read, not a fresh signal.

### Verdict: **OVERVALUED — gap holds steady, no longer widening**
Unlike the 8/13→8/14 cycle (where the composite fair value proved more sensitive to raw WTI than the majors' equity tape), this cycle's inputs moved together — XOM, CVX, and oil all firmed modestly in step. **No trim (rule 1 — no structural break, XLE is a small half-size position), no add** — the position remains overvalued on this desk's math, by essentially the same margin as 8/14, and still materially wider than the original 7/28 entry-gate read (~12.1%).

### Key assumptions that could break this model
- **Upside break**: an actual *signed* Hormuz reopening deal that sustainably lifts oil back toward or above GS's $80 Q4'26 house forecast would reverse the recent adjustments in the other direction — the fair-value roll-forward is symmetric. WTI at ~$81.5 remains close to that $80 house forecast: a further leg down toward the "resolved thesis" price would be the base case reasserting itself, not a new bearish surprise.
- **Downside break**: this desk repeats its standing flag that the roll-forward mechanic itself accumulates drift over many cycles (even though this cycle didn't add fresh drift) and may warrant a full ground-up rebuild (fresh XOM/CVX 5-year builds off a stabilized oil assumption) at some point rather than an indefinite series of mechanical adjustments.

---

## Cross-check with GS screener (analysts/gs-stock-screener.md, 2026-08-17 late-morning report)
GS again has OMCL at #1 (a twentieth straight report unchanged), independently flagging and discarding the same stray $46.89 WebSearch mis-pull this desk also avoided — the same known-bad source both desks have now caught for three-plus weeks running. GS's rule-3 OXY veto stands; Hormuz remains unresolved per both desks' independent reads today (GS: Iran-Oman shipping-mechanism statement still "explicitly not a full reopening"; this desk: WTI/Brent both essentially flat-to-modestly-firmer, no de-escalation catalyst), consistent with the essentially-flat XLE gap above. GS also flags AVGO's active VMware vCenter zero-day (CVE-2026-59310) as this cycle's dominant off-book risk story — noted for the record only, outside this desk's coverage mandate (not a holding).

## Explicit read on trader's current positions (all five: NVDA, OMCL, VTI, VXUS, XLE)
**NVDA**: hold, no add — DCF does not support adding at $225.225 (~33.1% downside to base case), the widest overvaluation gap on the book. Model itself unchanged pending the August 26 print, now 9 days out. The OpenAI/Ohio financing-guarantee scale-back is a watch item, not yet a model input.
**OMCL**: hold, no add from this desk's chair (sizing isn't this desk's call) — DCF discount now ~45.7%, still the widest gap on the book. The BW post-transcript sign-off remains the binding constraint.
**VTI / VXUS**: hold, no valuation view — diversified core-sleeve holdings, not DCF calls. Defer to BR/BW on drift-band status.
**XLE**: hold, no trim, no add — do-not-add stance holds; gap essentially flat this cycle as WTI, XOM, and CVX all moved together for once rather than diverging. Flagging (not recommending action on) that WTI is now trading close to GS's own $80 Q4'26 house forecast — if that forecast is right, the "overvalued" gap here is more the fundamental sitting close to fair-value-adjacent oil levels than a mispricing, worth keeping in mind for the next full ground-up rebuild.

---

Sources:
- [NVDA quote (Public.com pre-market)](https://public.com/stocks/nvda/pre-market)
- [NVDA quote (CNBC)](https://www.cnbc.com/quotes/NVDA)
- [OMCL price target lowered to $45 from $55 at Piper Sandler (TipRanks/Fly)](https://www.tipranks.com/news/the-fly/omnicell-price-target-lowered-to-55-from-57-at-piper-sandler-thefly)
- [XOM quote (CNBC)](https://www.cnbc.com/quotes/XOM)
- [XOM quote (Yahoo Finance)](https://finance.yahoo.com/quote/XOM/)
- [CVX quote (HeyGoTrade)](https://www.heygotrade.com/en/us-stock/cvx/)
- [CVX quote (TradingView)](https://www.tradingview.com/symbols/NYSE-CVX/)
- [WTI crude quote (OilPriceAPI)](https://www.oilpriceapi.com/oil-prices-today)
- [WTI crude quote (TradingEconomics)](https://tradingeconomics.com/commodity/crude-oil)
- [Brent crude quote (TradingEconomics)](https://tradingeconomics.com/commodity/brent-crude-oil)
- [XLE quote (ETF.com)](https://www.etf.com/XLE)
- [10-year Treasury yield (TradingEconomics)](https://tradingeconomics.com/united-states/government-bond-yield)
- Internal: trading-experiment/state.md (8/17 ~09:39 ET live Robinhood run notes), analysts/gs-stock-screener.md (8/17 late-morning report), analysts/jpm-earnings-analyzer.md (8/17 morning report), analysts/bw-risk-assessment.md (8/14 ~14:4x ET, via git history for prior cycle), analysts/ms-dcf-valuation.md (8/14 ~10:3x ET, this desk's prior report, via git history)
