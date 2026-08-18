# MS DCF Valuation — Investment Banking Valuation Memo
**Date: 2026-08-18 (~10:2x ET, Tuesday) — mechanical price-roll update across all five holdings; no verdict flips, no model rebuilds**

*Persona: VP-level valuation coverage for the "Claude Robinhood Trader" experiment. Coverage this run: (1) NVDA, (2) OMCL, (3) VTI, (4) VXUS, (5) XLE — all five current holdings. GS's current #1 pick (analysts/gs-stock-screener.md, 8/18 midday report) is again **OMCL**, already in-scope as a holding — no new name to add under this desk's self-feeding mandate this cycle. This desk has no direct Robinhood feed for XOM/CVX/oil inputs (WebSearch-sourced, cross-checked for staleness), but NVDA/OMCL/VTI/VXUS/XLE prices below are taken directly from state.md's freshest live Robinhood `get_portfolio` check-in (2026-08-18 ~09:36 ET, first run of the day) per rule 4 — the trader should re-verify live before sizing anything off numbers more than a few hours stale.*

---

## Verdicts (top line)

| Ticker | Current Price (8/18, ~09:36 ET, Robinhood-verified) | DCF Fair Value (base case) | Verdict |
|---|---|---|---|
| **NVDA** | $220.94 (-1.81% vs Monday's $225.01 close) | ~$150.6 (WACC 11%, g 3%) — unchanged model | **OVERVALUED — ~31.8% downside to DCF fair value.** Narrowed from 8/17's ~33.1% purely on the price pullback (broad rate/risk-off tape, not NVDA-specific) — no model change. |
| **OMCL** | $36.39 (+1.00% vs Monday's close) | ~$53.89 (WACC 9%, g 3%), unchanged | **UNDERVALUED — ~48.1% upside to DCF fair value.** Widened from 8/17's ~45.7% on a further pullback in the underlying share price — a price effect, not a model change. Still the widest discount on the book. |
| **VTI** | $380.1953 (-0.51%) | N/A — no single-company DCF applies | **NOT APPLICABLE / HOLD BY CONSTRUCTION.** Unchanged. |
| **VXUS** | $87.185 (-0.78%) | N/A — no single-company DCF applies | **NOT APPLICABLE / HOLD BY CONSTRUCTION.** Unchanged. |
| **XLE** | $63.405 (+1.32% vs Monday's close, day's leader again) | Composite (oil-adjusted) fair value ≈ $53.5-54.0/sh | **OVERVALUED, gap narrowed to ≈ -15% to -16%** (from 8/17's -18.0%) — WTI spiked toward $84-85 (fresh Hormuz strike headline) noticeably faster than XOM/CVX equity prices moved, so the mechanical oil-adjusted fair value rose faster than the majors' share prices did. **Do not add** — narrowing overvaluation is not the same as a buy signal, and the divergence itself is a data-quality flag (see below). |

**Bottom line for the trader:** No verdict flips this cycle. NVDA's gap narrowed on a broad rate/risk-off pullback (10yr yield pushing toward 4.75%, 30yr at a fresh 19-year high per state.md) rather than any company-specific development — still the most overvalued name on the book, 8 days from the Aug 26 print. OMCL's discount widened further on continued softness with no fresh negative catalyst identified — still the most undervalued name on the book, sizing gate unchanged. XLE's overvaluation gap narrowed materially this cycle, but mechanically — driven by oil outrunning the equities on today's fresh Hormuz vessel-strike headline, not by any improvement in the underlying majors' fundamentals. **Do not read the narrower XLE gap as a green light; if anything it flags that this desk's oil-adjusted composite is becoming more sensitive to noisy, fast-moving spot-oil headlines than to the majors' own repriced equity value, reinforcing the standing flag that a ground-up rebuild (rather than an indefinite chain of mechanical rolls) is overdue.**

**One item worth flagging for the team, a genuine status change from 8/17**: the NVDA/OpenAI Ohio data-center financing arrangement is now **confirmed signed** (SEC filing, 8/17, CNBC/Axios/Yahoo corroborated) — up to $105B in financing support for an initial 4.25GW (option for 3.75GW more), structured so Nvidia's payment obligation only triggers if OpenAI itself becomes insolvent and defaults, not a blanket guarantee. This is the de-risking outcome this desk and JPM have been watching for since the ~$250B figure first circulated. **However, this desk still could not source a same-day-dated NVDA 5-year CDS bps print this run** — search results returned only recycled 7/27 (82bps, the standing revisit-line) and 7/28 (95bps) figures, no fresher confirmed read. Per the 8/17 note: if the CDS spread genuinely retraces now that the deal has signed, that would be the first concrete signal to revisit this desk's 11% WACC assumption (a lower credit-risk premium arguing for a slightly lower discount rate, which would lift NVDA's DCF fair value). **Not actioned this run** — the model requires an actual confirmed lower CDS print, not just the signing itself, before touching WACC. Flagging as the top open item for the next cycle.

---

## 1. NVIDIA (NVDA) — price update, model unchanged

### What changed since 8/17
Price $220.94 (8/18, ~09:36 ET, Robinhood-verified), -1.81% vs. Monday's $225.01 close — a broad growth/rate-pressure pullback (10yr yield pushing toward 4.75%, 30yr at a fresh 19-year high per state.md's 8/18 run notes), not an NVDA-specific negative. The one genuine company-specific development is positive: the OpenAI/Ohio financing deal is now **confirmed signed** (see note above) — the de-risking outcome this desk has been watching for, though not yet reflected in a fresher CDS print. No China export-policy, HBM/Rubin supply, or Blackwell-Rubin execution news found this cycle beyond what prior reports already logged. August 26 print (8 days out) remains the next point at which this desk revisits the model itself, not just the price.

### Why the 5-year model still doesn't move
No new information changes any of the five build inputs (FY2027E revenue, FCF margin path, WACC, terminal growth, or the financing-guarantee treatment). The Ohio deal signing is a confirmation of an already-priced-in de-risking scenario, not a new data point on revenue, margin, or growth — and per the discipline above, WACC only moves on a confirmed CDS retrace, not on the signing event itself.

### Verdict: **OVERVALUED, gap narrowed on price alone**
Same 5-year build (FY2027E revenue $380B, FCF margin path 56%→48%, WACC 11% base, g 3% base):

| WACC \ Terminal g | 2.0% | 3.0% | 4.0% |
|---|---|---|---|
| **11% (base)** | $137.8 | **$150.6** | $167.1 |

Base case ($150.6) vs. today's $220.94 implies **~31.8% downside**, narrowed from 8/17's ~33.1% — the pullback closed part of the gap, but NVDA remains the most overvalued name on the book by a wide margin. Key breakable assumptions unchanged (margin durability is the upside break; China export policy, Blackwell-Rubin execution, HBM supply bottleneck, and custom-silicon competition remain the downside breaks; the OpenAI-financing/circularity thread continues trending toward de-risking, now with a signed structure, though the CDS market hasn't yet visibly confirmed it). **Hold, no add.** Per state.md's 8/18 ~09:36 ET run, NVDA sits ~12.25% of equity / ~10.80% of pool — comfortably below the 18-20% single-name trigger; NVDA+OMCL combined ~20.90% of equity, below the 25% combined trigger (~4.10pp buffer). The 8/14 written NVDA earnings contingency plan (state.md) — which declined BW's pre-earnings de-risking-trim ask and instead adopted a structural-break-only post-print reaction rule — references this desk's model as one input; the deal signing is the opposite of the plan's "unfavorable signed term sheet" revisit trigger, so nothing here changes that decision.

---

## 2. Omnicell (OMCL) — price update, model unchanged

### What changed since 8/17
Price $36.39 (8/18, ~09:36 ET, Robinhood-verified) vs. $36.99 (8/17 read), a further pullback on no identified fresh company catalyst — though note this is actually the *first green session in over a week* per state.md (+1.00% intraday vs. Monday's close), so the year-over-year comparison here is Monday-close-to-Monday-close drift, not a fresh Tuesday decline. **Data-quality note**: this cycle's WebSearch pull again returned the familiar stray **$46.89** figure — the same known-bad source this desk and GS have independently flagged and discarded for three-plus weeks running (now over twenty consecutive cycles). This memo uses the live Robinhood-verified $36.39 per rule 4, not the WebSearch figure. No fresh analyst PT actions or company news found this cycle beyond the already-known Piper Sandler/KeyBanc/Wells Fargo cuts. Next print confirmed **11/4** (Q3), unchanged.

### Fair value and verdict (model unchanged, gap recomputed vs. today's price)
Base case fair value **$53.89** (WACC 9%, g 3% — sensitivity table unchanged since 7/30) vs. today's $36.39 implies **~48.1% upside**, widened from 8/17's ~45.7% — a pure price-drift effect, not a fresh data point on either side.

### Verdict: **UNDERVALUED — still the widest discount on the book**
This desk's job is valuation, not sizing. GS again has OMCL at #1 this cycle with nothing structural changed. The standing sizing gate (a fresh post-transcript BW risk sign-off) remains the only thing left between this book and its widest DCF discount.

### Key assumptions that could break this model (unchanged from 8/3)
- **Upside break**: the softer Q3/bookings guide proves conservative rather than a genuine slowdown — would push fair value back toward $56-60+.
- **Downside break**: the bookings-range widening at the low end proves to be the first sign of a genuine demand slowdown as the platform-refresh cycle plays out — would require trimming FY27+ growth further.

---

## 3. Vanguard Total Stock Market ETF (VTI) — unchanged, brief refresh only
No change to the standing "not applicable" treatment. No company-specific catalyst identified this cycle; the broad pullback (-0.51%) is consistent with the long-end rate move and renewed Hormuz escalation pressuring growth-sensitive equities generally, per state.md's 8/18 run notes. This desk has no fair-value view on VTI and defers entirely to BR/BW on sizing and drift-band status.

## 4. Vanguard Total International Stock ETF (VXUS) — unchanged, brief refresh only
No change to the standing "not applicable" treatment. Down -0.78%, consistent with the same broad rate/geopolitical pressure noted above, not a fresh catalyst. No DCF-based case to add or trim.

---

## 5. Energy Select Sector SPDR (XLE) — oil-adjusted update, gap narrows on oil/equity divergence

### What changed since 8/17
WTI spiked toward **~$84-85/bbl** on a fresh overnight Strait of Hormuz vessel strike (CNN, per state.md's 8/18 run notes) — a meaningfully larger move than 8/17's ~$81.5 input (roughly +3-4%). Brent traded ~$91. **Data-quality flag**: one WebSearch pull this run returned WTI at $80.93 (down 2.8%), directly contradicting the Hormuz-specific sourcing (WTI up toward $85, extending Monday's +2.6% gain) and state.md's own live run-note read — treated as stale/mismatched-date noise per rule 4 and discarded, consistent with this desk's standing practice of flagging exactly this kind of source inconsistency. Trump stated the Strait is "open" and under US control even as Iran's Foreign Ministry reiterated it won't fully reopen until the US lifts its naval blockade — the June ceasefire MoU remains lapsed with no resolution, consistent with GS's and BW's reads. XOM firmed modestly to **$161.46** (+0.85% vs Friday's $160.10) and CVX to **$201.99** (+~1.0% vs Friday's $200.00) — both majors moved up, but by roughly a quarter of oil's percentage move, the same headline-vs-commodity divergence this desk and BW/GS have flagged unreconciled on several prior cycles.

### Oil-adjusted fair value update (mechanical)
Using 8/17's oil-adjusted fair values as the roll-forward base (XOM ~$109.88, CVX ~$203.25, built off a WTI input of ~$81.5) and applying the same ~1.2x earnings-sensitivity multiplier to today's WTI move (~$81.5 → ~$84.5 midpoint, +~3.7%, i.e. a further ~+4.4% fair-value adjustment):

| | XOM | CVX |
|---|---|---|
| 8/17 fair value (oil-adjusted) | $109.88 | $203.25 |
| Further oil adjustment (+~4.4%, from +3.7% WTI move × 1.2x sensitivity) | +$4.83 | +$8.94 |
| **8/18 fair value (mechanical roll)** | **~$114.71** | **~$212.19** |
| Current price (8/18, WebSearch) | $161.46 | $201.99 |
| **Implied gap** | **-28.9% (overvalued)** | **+5.1% (modestly undervalued)** |

Blended composite gap (weighted ~59.6% XOM / ~40.4% CVX, per the standing ~35% AUM look-through split): **weighted gap ≈ -15.2%**, narrowed from 8/17's **-18.0%** — the mechanical roll-forward finds the majors' equity prices lagging behind oil's sharper move on today's fresh escalation headline, so the composite fair value rose faster than XOM/CVX's actual share prices. Applied to XLE's live Robinhood-verified price ($63.405): implied fair value roughly **$53.5-54.0/sh**.

**This is not a bullish signal.** The narrowing reflects a mechanical input (oil spiking faster than the equities, itself driven by a single overnight headline in an already-volatile, unresolved geopolitical situation) rather than any improvement in XOM/CVX's underlying cash-flow durability. A reversal of today's oil spike (a plausible outcome given the standing "headline-driven, not settlement-confirmed" character of this move) would mechanically re-widen the gap back toward 8/17's levels or beyond.

### Verdict: **OVERVALUED — gap narrows on a noisy input, not a fundamental improvement**
**No trim (rule 1 — no structural break, XLE is a small half-size position), no add** — the position remains overvalued on this desk's math even after the narrowing, and the mechanism behind the narrowing (a single-headline oil spike outrunning equity repricing) is exactly the kind of noisy, fast-reverting input this desk would not want to chase into a buy decision.

### Key assumptions that could break this model
- **Upside break**: an actual *signed* Hormuz reopening deal that sustainably lifts oil back toward or above GS's $80 Q4'26 house forecast would reverse the recent adjustments in the other direction — the fair-value roll-forward is symmetric. Today's WTI level (~$84-85) is now further from that $80 house forecast than 8/17's ~$81.5, so on this desk's own framing the "resolved thesis" price is receding, not approaching, even as the mechanical composite gap narrows — a genuine tension in the model worth flagging explicitly.
- **Downside break**: this desk again repeats its standing flag that the roll-forward mechanic itself accumulates drift and noise over many cycles (today's divergence is the clearest example yet) and may warrant a full ground-up rebuild (fresh XOM/CVX 5-year builds off a stabilized oil assumption) rather than an indefinite series of mechanical adjustments — escalating this flag given today's data specifically illustrates the risk.

---

## Cross-check with GS screener (analysts/gs-stock-screener.md, 2026-08-18 midday report)
GS again has OMCL at #1, independently flagging and discarding the same stray $46.89 WebSearch mis-pull this desk also avoided. GS's rule-3 OXY veto stands, reinforced (not weakened) by today's escalation — Trump's Hormuz "territory" map claim and the fresh overnight vessel strike. GS's read on the broad tape (Nasdaq -1.02%, S&P -0.44%, tech leading the selloff on long-end rate pressure and renewed Hormuz escalation) matches this desk's read on VTI/VXUS/NVDA's pullbacks and XLE's outperformance. GS also flags Frontline (FRO)'s new $270M VLCC sale + $0.80/share special dividend, alongside a same-day Evercore downgrade to "In Line" on 2026-28 tanker-oversupply risk — noted for the record only, outside this desk's coverage mandate (not a holding, still rule-6 unvetted per GS's own framing).

## Explicit read on trader's current positions (all five: NVDA, OMCL, VTI, VXUS, XLE)
**NVDA**: hold, no add — DCF does not support adding at $220.94 (~31.8% downside to base case), the widest overvaluation gap on the book even after today's pullback narrowed it slightly. Model itself unchanged pending the August 26 print, now 8 days out. The OpenAI/Ohio financing deal is now confirmed signed — a genuine de-risking milestone — but WACC stays unchanged until a fresher CDS print actually confirms retrace.
**OMCL**: hold, no add from this desk's chair (sizing isn't this desk's call) — DCF discount now ~48.1%, still the widest gap on the book. The BW post-transcript sign-off remains the binding constraint.
**VTI / VXUS**: hold, no valuation view — diversified core-sleeve holdings, not DCF calls. Defer to BR/BW on drift-band status.
**XLE**: hold, no trim, no add — do-not-add stance holds; gap narrowed to ~-15.2% this cycle, but mechanically (oil outrunning XOM/CVX's equity repricing on a single fresh headline), not fundamentally. Flagging this divergence explicitly as the clearest evidence yet that the mechanical roll-forward is due for a full ground-up rebuild rather than continued incremental adjustment.

---

Sources:
- [NVDA quote (Investing.com)](https://www.investing.com/equities/nvidia-corp)
- [NVDA quote (Pluang)](https://pluang.com/en/asset/usstock/NVDA/10058)
- [OMCL quote — flagged stale/inconsistent, not used (Investing.com)](https://www.investing.com/equities/omnicell)
- [XOM quote (Investing.com)](https://www.investing.com/equities/exxon-mobil)
- [CVX quote (Investing.com)](https://www.investing.com/equities/chevron)
- [WTI/Brent, Hormuz situation (Bloomberg — Latest Oil Market News and Analysis for Aug. 18)](https://www.bloomberg.com/news/articles/2026-08-17/latest-oil-market-news-and-analysis-for-aug-18)
- [Oil prices climb as Iranian demands cloud Hormuz outlook (Al Jazeera)](https://www.aljazeera.com/economy/2026/8/10/oil-prices-climb-as-iranian-demands-cloud-outlook-for-strait-of-hormuz)
- [Nvidia backing $105 billion in financing for OpenAI Ohio data center (CNBC)](https://www.cnbc.com/2026/08/17/nvidia-financing-open-ai-data-center-ohio.html)
- [OpenAI announces Ohio data center with Nvidia guarantee (Axios)](https://www.axios.com/2026/08/17/openai-nvidia-ohio-data-center-sb-energy)
- [Nvidia CDS spread record (Phemex Academy, July 2026 — most recent dated print available this run)](https://phemex.com/academy/nvidia-stock-drop-default-insurance-record)
- Internal: trading-experiment/state.md (8/18 ~09:36 ET live Robinhood run notes), analysts/gs-stock-screener.md (8/18 midday report), analysts/jpm-earnings-analyzer.md (8/18 morning report, via git history), analysts/bw-risk-assessment.md (8/17 ~14:41 ET, via git history for prior cycle), analysts/ms-dcf-valuation.md (8/17 ~10:2x ET, this desk's prior report, via git history)
