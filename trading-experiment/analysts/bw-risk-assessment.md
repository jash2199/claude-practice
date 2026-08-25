# BW Risk Assessment — Risk Management Report
**Date: 2026-08-25 (~10:42 ET, Tuesday)** — 1 trading day before the NVDA/CRWD 8/26 after-market print. Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time. All weights recomputed fresh this run, not carried from BR/MS/GS/JPM. Prior BW report: 2026-08-24 ~14:45 ET (Grade C).

---

## Overall Portfolio Risk Grade: **C** (held, unchanged)

## Single biggest risk right now
**NVDA reports tomorrow (8/26) after the close, and this book has zero hedging capacity for it under the equities-only mandate — full stop.** That has been true for days; what's new today is where the pool-drift math sits going into it. NVDA is $211.24 live, **+1.32% vs. yesterday's $208.48 close**, pool weight **10.44%** — the buffer to the 10% single-position drift-trigger floor actually *widened* slightly today (to ~0.44pp, from Monday's 0.34-0.38pp reading) purely because NVDA rallied. Radical transparency cuts both ways: that buffer improving on a green pre-earnings day is not evidence of safety — it is one ordinary day's price noise sitting on top of a structurally razor-thin trigger, about to face its highest-variance day of the quarter with no options tool available to manage the outcome either direction.

Compounding factors, status this run:
1. **NVDA/CRWD report Wednesday 8/26 after the close — now 1 trading day out.** Per the standing NVDA earnings contingency plan (state.md rule 15), no pre-earnings trim, no pre-earnings add — this desk is not relitigating that call, only restating the exposure it leaves open.
2. **Rule 6a rate-shock trigger: genuinely improved, confirmed.** Monday 8/24's settled closes: 10yr **4.704%** (well clear of the 4.75% line), 30yr **5.234%** (back under the 5.25% line, down from Friday 8/21's confirmed 5.273% close). The streak resets to **0-for-2** rather than advancing — the scenario BR flagged as plausible Monday afternoon did materialize. One real de-escalation data point on an otherwise binary-event-heavy week. Fed Chair Warsh's first Jackson Hole speech (Friday 8/28, 10:00 ET) is the next dated checkpoint for this trigger, not today.
3. **VIX still modestly elevated off its 2026 low** (~14.25 on 8/17) — WebSearch this run returned a stale/ambiguous "15.1 last week" read, consistent with the elevated-but-calm level BW logged Monday (~15.7-15.9). Not treated as fresh data; logged as unchanged, not improving.
4. **NVDA's 5-year CDS spread — data-quality gap now unresolved for a full week-plus, and this run's WebSearch made it worse, not better.** Fresh search returned a headline "82bps, largest single-day widening" figure — but cross-checking the sourcing, that is the **7/27 record print recycled**, not a new reading; the same article context references NVDA CDS "at 57.25bps in late July," which is internally inconsistent with an 82bps print the same month. Treating this as another stale/conflated hit, not a real update — the last dated, trustworthy figure remains 8/18's 80.77bps (below the 82bps 7/27 record). This is now the seventh-plus consecutive cycle this desk, JPM, and MS have all independently flagged the same gap. **Escalating past a flag: if no desk can source a dated CDS print by the next earnings-adjacent run, that absence itself should be treated as a risk input** (credit-market opacity into a binary event), not just a data nuisance.
5. **OMCL's unrealized loss deepened again.** Live $34.20 vs. avg cost $46.99 → **-27.2%**, worse than Monday's -26.4% read, on continued no-catalyst drift. Still the largest single detractor in the book by percentage.

---

## Risk heat map

| Risk category | Level | Notes |
|---|---|---|
| Binary-event stacking (NVDA/CRWD print, zero hedge capacity) | 🔴 High | 1 trading day out; Jackson Hole (Warsh) follows 2 days later — two dated catalysts in the same week |
| NVDA pool-drift trigger proximity | 🔴 High (marginally eased) | 10.44% actual vs. 10% floor — ~0.44pp buffer, widened slightly today on price alone, still the tightest trigger on the book |
| Correlation / lack of true diversification | 🔴 High | All five holdings share directional beta to the same handful of macro factors (rates, AI-sentiment, oil); no true ballast position exists in an equities-only, no-bond book |
| Look-through AI/tech concentration | 🔴 High | ~31% of equity exposed to AI/semis/mega-cap-tech once VTI's/VXUS's embedded weights are added to NVDA direct (detail below) — the real number is materially larger than the 11.86% NVDA line alone suggests |
| Single-stock concentration (NVDA+OMCL) | 🟡 Medium | 20.09% of equity combined, ~4.91pp under the 25% combined trigger |
| OMCL unrealized loss | 🟠 Medium-High (deepening) | -27.2% since cost, no identified structural catalyst, small-cap liquidity adds gap-risk on any real news |
| Interest-rate / duration sensitivity | 🟢 Low-Medium (improved, confirmed) | Both 10yr and 30yr settled Monday back under rule 6a's thresholds; streak reset to 0-for-2 |
| Data-quality risk (CDS sourcing) | 🟠 Medium-High | 7th+ consecutive cycle with no genuinely fresh NVDA CDS print; today's WebSearch returned an internally-inconsistent recycled figure |
| Liquidity risk (book-wide) | 🟢 Low | Four of five holdings are mega-cap/large-ETF liquid; OMCL is the one exception (see below) |
| Geographic/currency risk | 🟡 Medium | ~30.7% of equity (VXUS) carries direct FX exposure; NVDA/XLE carry indirect global-demand exposure without direct currency translation risk |

---

## 1. Portfolio snapshot (Robinhood-verified, 2026-08-25 ~10:42 ET)

Pool ≈ equity $44.2252 + deployable cash $6.00 = **$50.2252** (base $50 + ~$0.23 accumulated profit). Reserve: a further ~$50 untouchable per Jash's 7/10 clarification, excluded from all percentages below unless marked "% of account."

| Holding | Live price | Chg vs. prior close | Value | % of equity | % of pool |
|---|---|---|---|---|---|
| NVDA | $211.24 | +1.32% | $5.24 | 11.86% | 10.44% |
| VTI | $377.55 | +0.13% | $16.34 | 36.96% | 32.55% |
| VXUS | $87.84 | +0.73% | $13.57 | 30.69% | 27.03% |
| OMCL | $34.20 | -1.33% | $3.64 | 8.23% | 7.25% |
| XLE | $62.55 | -0.89% | $5.43 | 12.27% | 10.81% |
| Cash | — | — | $6.00 | — | 11.95% |

## 2. Correlation analysis between holdings

This book has **no genuine ballast position** — every holding is a positive-beta equity exposed to the same handful of macro drivers, just with different sensitivities:
- **NVDA, VTI, VXUS** move together on broad risk sentiment and AI-multiple sentiment specifically (VTI's own look-through AI weight makes it a partial NVDA proxy, not an independent asset).
- **OMCL** is the book's best true diversifier against the chip/AI factor (healthcare-tech, idiosyncratic drivers) — but it is currently *negatively* correlated with the book's P&L for the wrong reason (a standalone -27.2% drawdown), not because it's hedging anything today.
- **XLE** is the book's best true diversifier against the rate/tech factor (oil-cycle driven) — genuinely uncorrelated on most days, evidenced by it being the lone red holding on several recent green-tape days and vice versa.
- Empirically: all five holdings were red together on 8/24 (a broad risk-off day) and four of five are green together today (a broad relief bounce) — the *direction* of correlation flips with the macro regime, but the book rarely sees genuine dispersion where one holding zigs while the pool as a whole zags. **Net: 2 of 5 holdings (OMCL, XLE) provide real diversification value; the other 3 (NVDA, VTI, VXUS) are correlated expressions of the same US/AI-equity factor.**

## 3. Sector concentration risk

Face-value sector split (equity basis): AI/semis (NVDA) 11.86% direct; broad-market ETFs (VTI/VXUS) 67.65% (diversified by construction, but see look-through below); healthcare-tech (OMCL) 8.23%; energy (XLE) 12.27%.

**Look-through concentration is the number that matters (rule 8).** Using BR's own cited data point (AI-adjacent names ~36% of the Morningstar US index, the most concentrated since 1932) as a proxy for VTI's embedded AI/mega-cap-tech weight, and a materially lower ~20% estimate for VXUS's ex-US, less-tech-heavy composition:
- NVDA direct: 11.86%
- VTI embedded (~36% of its 36.96% equity weight): ~13.3%
- VXUS embedded (~20% of its 30.69% equity weight): ~6.1%
- **Total look-through AI/mega-cap-tech exposure: ~31.3% of equity** — nearly triple the headline NVDA line, and comfortably the book's single largest true factor bet, concentrated in the one 24-hour window (tomorrow's print) where that factor's binary risk is highest.

## 4. Geographic exposure and currency risk

- **US-domiciled, USD-denominated:** NVDA, OMCL, XLE, and VTI's underlying holdings — no direct FX translation risk, though NVDA and XLE both carry indirect exposure to global demand (China chip demand, global oil demand) without currency pass-through.
- **Direct FX exposure:** VXUS (30.69% of equity) holds developed and emerging-market ex-US equities — a broad basket across EUR, JPY, GBP, and EM currencies. This is a genuine diversifier against a USD-specific shock, but also means ~31% of the book's equity has a currency-translation risk layer the other four holdings don't carry.
- **No dedicated FX hedge exists or is warranted at this size** — the position is small enough (~$13.57) that hedging costs would exceed any realistic benefit; flagged for completeness, not as an action item.

## 5. Interest rate sensitivity by position

| Position | Rate sensitivity | Why |
|---|---|---|
| NVDA | High | Growth/duration name; MS's own DCF (WACC 11%) shows the fair-value gap moves materially with discount-rate assumptions |
| OMCL | High | Small-cap growth healthcare-tech; MS's DCF (WACC 9%) is similarly duration-sensitive, and thinner liquidity amplifies rate-driven multiple compression |
| VTI | Medium | Broad market with a heavy growth/tech tilt (see look-through above) — more rate-sensitive than a pure value index would be |
| VXUS | Medium-Low | More value/financials-weighted internationally than VTI; historically less duration-sensitive than US mega-cap-tech-heavy indices |
| XLE | Low / near-zero-to-negative | Value/cyclical, driven by oil price and demand expectations, not discount-rate math — this is exactly why it's the book's best rate-shock hedge |

With Monday's settled closes back under both rule 6a thresholds, book-wide rate sensitivity is the one risk factor that genuinely improved this run — but Friday's Jackson Hole speech (2 days after the print) is a real re-test, not a closed question.

## 6. Recession stress test — estimated drawdown

Rough beta-adjusted drawdown estimates under a genuine recession/multiple-compression scenario (not a base case — a stress test):

| Position | Estimated drawdown | Basis |
|---|---|---|
| NVDA | -40% to -50% | High-beta AI/semis name already trading at a ~29% premium to MS's DCF fair value before any recession discount |
| OMCL | -35% to -45% | Small-cap growth healthcare-tech; thin liquidity amplifies drawdowns; already -27.2% from cost with no recession priced in yet |
| VTI | -25% to -35% | Broad US market, historical bear-market range, modestly worse than average given its elevated tech/AI look-through weight |
| VXUS | -25% to -35% | Similar broad-market range; partial offset possible if a US-specific shock drives capital rotation abroad, partial worsening from FX drag if the shock is global |
| XLE | -30% to -40% | Energy demand destruction in a genuine recession is severe historically, though a supply-shock-driven recession (e.g., a Hormuz escalation) could see XLE outperform the book even as the broader market falls — scenario-dependent, not a clean hedge in every recession type |

**Weighted portfolio estimate: roughly -30% to -35% on the $44.23 equity book (~-$13 to -$15) in a genuine recession scenario**, before the ~$6 deployable cash and untouched ~$50 reserve are considered. The reserve structurally caps the experiment's total downside regardless of any single stress scenario — worth restating plainly since it's easy to lose sight of amid position-level percentages.

## 7. Liquidity risk rating by holding

| Holding | Liquidity rating | Notes |
|---|---|---|
| VTI | Very high (Low risk) | One of the largest, most liquid ETFs in existence |
| VXUS | Very high (Low risk) | Large, liquid international ETF |
| XLE | High (Low risk) | Large, liquid sector SPDR |
| NVDA | High (Low risk) | Mega-cap, extremely high daily volume |
| OMCL | Medium (Medium risk) | Small/mid-cap healthcare-tech — wider spreads, more gap risk on news/earnings than the book's other four holdings; the one name where a bad-news gap could meaningfully exceed the options-free execution price the trader would actually get |

## 8. Single stock risk and position sizing

NVDA and OMCL are this book's only two single-name idiosyncratic risks. **NVDA is well inside every standing trigger** (10.44% of pool vs. 10% floor with ~0.44pp buffer on the downside-drift side; 11.86% of equity vs. the 18-20% overweight cap; 20.09% combined with OMCL vs. the 25% cap) — sizing discipline here has held. **OMCL is small in dollar terms (~$3.64, 8.23% of equity) but carries the highest risk-per-dollar in the book**: -27.2% underwater, no structural catalyst identified, next print not until 11/4 (71 days out, outside near-term binary risk), small-cap liquidity. No sizing change recommended today — position is already half-size by original design and the OMCL earnings contingency plan's structural-break-only standard still applies with no break identified — but this desk will keep stating plainly that OMCL is the book's clearest "small position, large idiosyncratic risk" line item.

## 9. Tail risk scenarios with probability estimates

1. **NVDA post-print move exceeds 2x the options-implied ~5.3-5.6% move (i.e., >~11%), either direction.** Rough tail-probability estimate based on typical post-earnings distribution shapes for high-implied-move mega-caps: **~10-15%.** Zero hedge capacity either direction under the equities-only mandate — this is pure, unmanaged binary exposure on ~$5.24 of the book.
2. **Rule 6a rate-shock trigger fires within the next 2 weeks** (two consecutive closes above 4.75%/5.25%), catalyzed by a hawkish Jackson Hole surprise from a new Fed chair trying to establish credibility. **~20-25%**, down from this desk's implicit prior last week given Monday's confirmed pullback below both thresholds, but Warsh's speech (8/28) is a real, dated re-test, not a closed question.
3. **A genuine, dated NVDA CDS re-widening toward/above the 82bps 7/27 record, confirmed by a real print rather than recycled reporting.** Given the sourcing confusion this desk hit today, **probability is genuinely unknown** — and that unknowability, going into a binary earnings event, is itself worth flagging as a distinct risk from the CDS level itself.
4. **A fresh Hormuz/Red Sea escalation** reversing the recent partial de-escalation, hitting broad risk sentiment while XLE's own directional response is ambiguous (could rally on oil-supply-shock fears or fall on broad risk-off, depending on which effect dominates). **~15-20%** over the next month, roughly unchanged from prior reads — status quo, still unsigned.
5. **An OMCL-specific negative catalyst** (contract loss, guidance cut, insider-sale pattern turning discretionary) before the 11/4 print. **~5-10%**, low probability but the position is already -27.2% underwater, so any real catalyst would land on an already-impaired cost basis.

## 10. Hedging strategies — top 3 risks (equities-only toolbox, no options)

1. **NVDA/CRWD earnings binary risk (tomorrow AH).** No direct equities-only hedge exists for a single-stock binary print without simply reducing the position — already considered and explicitly declined under rule 15's cost-benefit (small absolute size, JPM's WAIT call, BR's underweight flag). The only remaining equities-only lever is holding the ~$6 cash buffer intact through the print rather than deploying it into anything else this week, which the book is already doing by default (rule 1 — no fresh catalyst for a new buy).
2. **Look-through AI/tech concentration (~31% of equity).** The only equities-only hedge is continued, deliberate diversification into genuinely uncorrelated satellites rather than adding to VTI or NVDA at current levels — XLE and OMCL already serve this role; GEHC (healthcare, price-gated, pending) would extend it further if it ever fires. No new action recommended today, but this is the standing rationale for not adding to the core sleeve while it already sits over its BR targets (VTI +2.56pp, VXUS +1.87pp).
3. **Rate/duration sensitivity.** XLE is the book's natural, already-held rate hedge (low/negative duration sensitivity per §5) — no incremental action needed while Monday's rate data improved, but this desk would flag XLE's role explicitly if rule 6a's trigger were to fire post-Jackson-Hole, rather than treating XLE purely as an energy/oil-cycle satellite.

## 11. Rebalancing suggestions

**No rebalancing recommended today** — both because rule 1 (no fresh catalyst) applies and because trading into a binary-event day ahead of a print is exactly the kind of reactive, pressure-driven decision the book's own contingency-plan discipline (rule 15) exists to avoid. For the record, current vs. BR's own pool targets: VTI 32.55% (target 30%, +2.55pp, inside band), VXUS 27.03% (target 25%, +2.03pp, inside band), NVDA 10.44% (target 15%, under formal review, deferred to 8/27), OMCL 7.25% (target 10%, -2.75pp under), XLE 10.81% (target 10%, +0.81pp, on target), cash 11.95% (10% floor, +1.95pp buffer). Nothing here crosses a hard trigger; the NVDA policy-target question stays deferred to the first post-print run per BR's own 8/27 timeline, and this desk will re-read the whole book fresh at that run rather than pre-judge it now.

---

*BW Risk Assessment — radical transparency, no softened warnings. Filed 2026-08-25 ~10:42 ET.*
