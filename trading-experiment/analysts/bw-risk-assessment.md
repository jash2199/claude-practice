# BW Risk Assessment — Risk Management Report
**Date: 2026-08-26 (~14:45 ET, Wednesday)** — PRINT DAY, T-0: NVDA/CRWD report after today's close (~4:20-4:30pm ET), roughly 2 hours away at time of writing. Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time. All weights recomputed fresh this run, not carried from BR/MS/GS/JPM. Prior BW report: 2026-08-25 ~14:41 ET (Grade C).

---

## Overall Portfolio Risk Grade: **C** (held, unchanged)

## Single biggest risk right now
**NVDA reports in roughly two hours, and this book still has zero hedging capacity for it under the equities-only mandate.** The acute vol escalation flagged yesterday has partially cooled — VIX eased to **15.46** (from 15.85, essentially flat/-0.06% today) rather than continuing to climb — but that is a mild reprieve, not a resolution: the binary event itself hasn't moved an inch closer to being hedgeable, it's simply moved from "tomorrow" to "this afternoon." NVDA itself pulled back **-1.12% to $210.67** today (vs. Tuesday's $213.05 close), breaking a two-session rally — a small, unremarkable move on its own, but worth noting because it's the first session in three where the NVDA pool-drift buffer *narrowed* rather than widened, i.e. the mechanical "buffer looks better every day" pattern this desk flagged as illusory yesterday has now actually reversed by a hair. Radical transparency: nothing about today's numbers looks worse than yesterday's, but nothing about the underlying risk — an unhedged, ~$5.23 binary-event position reporting in hours — has improved either. The book is exactly where it has been for two weeks: correctly positioned per its own written rules, and correctly exposed to an outcome nobody can control.

Compounding factors, status this run:
1. **NVDA/CRWD report today, 8/26, after the close — now T-0, hours away.** Per the standing NVDA earnings contingency plan (state.md rule 15), no pre-earnings trim, no pre-earnings add — this desk is not relitigating that call on its last live run before the event, only restating the exposure that remains open.
2. **VIX stabilized, not escalating further.** 15.46 today vs. 15.85 yesterday — the sharp one-day jump this desk flagged 8/25 did not continue into a trend; still elevated relative to the calm 14.25-15.9 range logged since 8/17, but the acute-escalation reading has cooled, not worsened.
3. **Rule 6a rate-shock trigger: unchanged since yesterday's read, no fresher pull this run.** Last verified 10yr 4.66% intraday / 30yr 5.23% intraday (8/25), both clear of the 4.75%/5.25% thresholds. Jackson Hole (Fed Chair Warsh, Friday 8/28) remains the next dated test, now 2 days past tonight's print rather than this desk's near-term focus.
4. **NVDA pool-drift buffer narrowed for the first time in three sessions — direction matters more than the number today.** NVDA now **10.43% of pool** (this desk's tracked ~10% floor), buffer **~0.43pp**, down slightly from yesterday's ~0.50-0.51pp, because NVDA's price fell today rather than rallying. Still not fired, but this is the live proof that a buffer built purely on price drift can compress just as easily as it expands — exactly the caution this desk raised yesterday about not confusing a widening number with genuine de-risking.
5. **NVDA CDS spread: now a 9th-consecutive-cycle-old data gap.** No dated print more recent than 8/18's 80.77bps found again this run. This desk is not re-running the same WebSearch that surfaced a demonstrably wrong "seven-day losing streak" narrative yesterday — flagging the gap as unresolved rather than repeating a search likely to return stale or contradictory noise on the last run before the print.
6. **OMCL's unrealized loss deepened to a fresh low.** Live $33.315 vs. avg cost $46.99 → **-29.1%**, worse than yesterday's -28.8%, on no identified structural catalyst. Still the book's largest single detractor by percentage and the position most exposed to any additional idiosyncratic bad news landing on an already-impaired basis.

---

## Risk heat map

| Risk category | Level | Notes |
|---|---|---|
| Binary-event stacking (NVDA/CRWD print, zero hedge capacity) | 🔴 High | T-0; print lands in ~2 hours, zero equities-only hedge exists for a single-stock binary print without simply reducing the position (already declined per rule 15) |
| Pre-print volatility regime | 🟡 Medium-High (cooling) | VIX 15.46, essentially flat vs. yesterday's 15.85 spike — the acute escalation stabilized rather than continuing to build into the event |
| NVDA pool-drift trigger proximity | 🟡 Medium-High (tightening again) | 10.43% actual vs. ~10% floor — ~0.43pp buffer, narrowed for the first time in three sessions as NVDA pulled back, still not fired |
| Correlation / lack of true diversification | 🔴 High | All five holdings share directional beta to the same handful of macro factors (rates, AI-sentiment, oil); no true ballast position exists in an equities-only, no-bond book |
| Look-through AI/tech concentration | 🔴 High | ~31.3% of equity exposed to AI/semis/mega-cap-tech once VTI's/VXUS's embedded weights are added to NVDA direct (detail below) — still nearly triple the headline NVDA line |
| Single-stock concentration (NVDA+OMCL) | 🟡 Medium | 19.87% of equity combined, ~5.13pp under the 25% combined trigger |
| OMCL unrealized loss | 🟠 Medium-High (fresh low) | -29.1% since cost, no identified structural catalyst, small-cap liquidity adds gap-risk on any real news |
| Interest-rate / duration sensitivity | 🟢 Low-Medium (stale but clear) | Last-verified 10yr/30yr reads (8/25) sit clear of rule 6a's thresholds; not re-pulled this run, Jackson Hole 8/28 remains the next real test |
| Data-quality risk (CDS sourcing) | 🟠 Medium-High | 9th+ consecutive cycle with no fresh NVDA CDS print; last confirmed reading (80.77bps, 8/18) is now materially stale heading into the print |
| Liquidity risk (book-wide) | 🟢 Low | Four of five holdings are mega-cap/large-ETF liquid; OMCL is the one exception (see below) |
| Geographic/currency risk | 🟡 Medium | ~30.8% of equity (VXUS) carries direct FX exposure; NVDA/XLE carry indirect global-demand exposure without direct currency translation risk |

---

## 1. Portfolio snapshot (Robinhood-verified, 2026-08-26 ~14:45 ET)

Pool ≈ equity $44.1764 + deployable cash $6.00 = **$50.1764** (base $50 + ~$0.18 accumulated profit). Reserve: a further ~$50 untouchable per Jash's 7/10 clarification, excluded from all percentages below unless marked "% of account."

| Holding | Live price | Chg vs. prior close | Value | % of equity | % of pool |
|---|---|---|---|---|---|
| NVDA | $210.67 | -1.12% | $5.23 | 11.84% | 10.43% |
| VTI | $377.97 | -0.05% | $16.37 | 37.05% | 32.62% |
| VXUS | $88.02 | -0.12% | $13.60 | 30.79% | 27.11% |
| OMCL | $33.32 | +0.29% | $3.54 | 8.03% | 7.07% |
| XLE | $62.62 | +0.89% | $5.43 | 12.30% | 10.83% |
| Cash | — | — | $6.00 | — | 11.96% |

## 2. Correlation analysis between holdings

This book has **no genuine ballast position** — every holding is a positive-beta equity exposed to the same handful of macro drivers, just with different sensitivities:
- **NVDA, VTI, VXUS** move together on broad risk sentiment and AI-multiple sentiment specifically (VTI's own look-through AI weight makes it a partial NVDA proxy, not an independent asset). Today all three are down together (-1.12%, -0.05%, -0.12%) — the first same-direction (down) session for the trio in several days, a mild but genuine confirmation of the shared-factor read.
- **OMCL** is the book's best true diversifier against the chip/AI factor (healthcare-tech, idiosyncratic drivers) — but it is currently *negatively* correlated with the book's P&L for the wrong reason (a standalone -29.1% drawdown, a fresh low today), not because it's hedging anything today.
- **XLE** is the book's best true diversifier against the rate/tech factor (oil-cycle driven) — genuinely uncorrelated on most days; today it's the lone large holding meaningfully green (+0.89%) while NVDA/VTI/VXUS all slipped, real dispersion for once.
- **Today is a useful live data point**: NVDA/VTI/VXUS all red together (the AI/broad-market factor pulling back mildly ahead of the print), OMCL/XLE both green but for unrelated reasons (a bounce off a fresh low vs. oil-cycle strength) — the book's two "diversifiers" again aren't correlated with *each other*, good for true diversification but meaning neither systematically offsets the other. **Net: 2 of 5 holdings (OMCL, XLE) provide real diversification value; the other 3 (NVDA, VTI, VXUS) are correlated expressions of the same US/AI-equity factor.**

## 3. Sector concentration risk

Face-value sector split (equity basis): AI/semis (NVDA) 11.84% direct; broad-market ETFs (VTI/VXUS) 67.84% (diversified by construction, but see look-through below); healthcare-tech (OMCL) 8.03%; energy (XLE) 12.30%.

**Look-through concentration is the number that matters (rule 8).** Using BR's own cited data point (AI-adjacent names ~36% of the Morningstar US index, the most concentrated since 1932) as a proxy for VTI's embedded AI/mega-cap-tech weight, and a materially lower ~20% estimate for VXUS's ex-US, less-tech-heavy composition:
- NVDA direct: 11.84%
- VTI embedded (~36% of its 37.05% equity weight): ~13.3%
- VXUS embedded (~20% of its 30.79% equity weight): ~6.2%
- **Total look-through AI/mega-cap-tech exposure: ~31.3% of equity** — nearly triple the headline NVDA line, and comfortably the book's single largest true factor bet, concentrated in the same session as that factor's binary risk event.

## 4. Geographic exposure and currency risk

- **US-domiciled, USD-denominated:** NVDA, OMCL, XLE, and VTI's underlying holdings — no direct FX translation risk, though NVDA and XLE both carry indirect exposure to global demand (China chip demand, global oil demand) without currency pass-through.
- **Direct FX exposure:** VXUS (30.79% of equity) holds developed and emerging-market ex-US equities — a broad basket across EUR, JPY, GBP, and EM currencies. This is a genuine diversifier against a USD-specific shock, but also means ~31% of the book's equity has a currency-translation risk layer the other four holdings don't carry.
- **No dedicated FX hedge exists or is warranted at this size** — the position is small enough (~$13.60) that hedging costs would exceed any realistic benefit; flagged for completeness, not as an action item.

## 5. Interest rate sensitivity by position

| Position | Rate sensitivity | Why |
|---|---|---|
| NVDA | High | Growth/duration name; MS's own DCF (WACC 11%) shows the fair-value gap moves materially with discount-rate assumptions |
| OMCL | High | Small-cap growth healthcare-tech; MS's DCF (WACC 9%) is similarly duration-sensitive, and thinner liquidity amplifies rate-driven multiple compression |
| VTI | Medium | Broad market with a heavy growth/tech tilt (see look-through above) — more rate-sensitive than a pure value index would be |
| VXUS | Medium-Low | More value/financials-weighted internationally than VTI; historically less duration-sensitive than US mega-cap-tech-heavy indices |
| XLE | Low / near-zero-to-negative | Value/cyclical, driven by oil price and demand expectations, not discount-rate math — this is exactly why it's the book's best rate-shock hedge |

Rate inputs were not re-pulled this run (last verified 8/25: 10yr 4.66% intraday, 30yr 5.23% intraday, both clear of rule 6a's thresholds) — with the print hours away, this desk's remaining attention today is on the binary-event exposure, not the rate track, which has been calm for over a week. Friday's Jackson Hole speech from Fed Chair Warsh remains the next real test.

## 6. Recession stress test — estimated drawdown

Rough beta-adjusted drawdown estimates under a genuine recession/multiple-compression scenario (not a base case — a stress test):

| Position | Estimated drawdown | Basis |
|---|---|---|
| NVDA | -40% to -50% | High-beta AI/semis name already trading at a wide premium to MS's DCF fair value before any recession discount, and before tonight's own binary print is even known |
| OMCL | -35% to -45% | Small-cap growth healthcare-tech; thin liquidity amplifies drawdowns; already -29.1% from cost with no recession priced in yet |
| VTI | -25% to -35% | Broad US market, historical bear-market range, modestly worse than average given its elevated tech/AI look-through weight |
| VXUS | -25% to -35% | Similar broad-market range; partial offset possible if a US-specific shock drives capital rotation abroad, partial worsening from FX drag if the shock is global |
| XLE | -30% to -40% | Energy demand destruction in a genuine recession is severe historically, though a supply-shock-driven recession (e.g., a Hormuz escalation) could see XLE outperform the book even as the broader market falls — scenario-dependent, not a clean hedge in every recession type |

**Weighted portfolio estimate: roughly -30% to -35% on the $44.18 equity book (~-$13 to -$15) in a genuine recession scenario**, before the ~$6 deployable cash and untouched ~$50 reserve are considered. The reserve structurally caps the experiment's total downside regardless of any single stress scenario — worth restating plainly since it's easy to lose sight of amid position-level percentages. Note this framework does not capture tonight's idiosyncratic earnings-gap risk, which is a distinct, faster-acting exposure covered separately in §9.

## 7. Liquidity risk rating by holding

| Holding | Liquidity rating | Notes |
|---|---|---|
| VTI | Very high (Low risk) | One of the largest, most liquid ETFs in existence |
| VXUS | Very high (Low risk) | Large, liquid international ETF |
| XLE | High (Low risk) | Large, liquid sector SPDR |
| NVDA | High (Low risk) | Mega-cap, extremely high daily volume — though tonight's post-print after-hours and tomorrow's opening session will see materially wider effective spreads, a real if temporary liquidity-cost consideration |
| OMCL | Medium (Medium risk) | Small/mid-cap healthcare-tech — wider spreads, more gap risk on news/earnings than the book's other four holdings; the one name where a bad-news gap could meaningfully exceed the options-free execution price the trader would actually get |

## 8. Single stock risk and position sizing

NVDA and OMCL are this book's only two single-name idiosyncratic risks. **NVDA is well inside every standing trigger** (10.43% of pool vs. the ~10% floor this desk tracks, ~0.43pp buffer; 11.84% of equity vs. the 18-20% overweight cap; 19.87% combined with OMCL vs. the 25% cap) — sizing discipline here has held, and today's small pullback is the first live proof that the recent run of "improving" buffers was purely price-driven and can reverse just as easily. A genuinely large post-print move tonight (either direction) will move every one of these buffers materially by tomorrow's first run — this desk expects to be re-computing all of them fresh, not carrying today's numbers forward. **OMCL is small in dollar terms (~$3.54, 8.03% of equity) but carries the highest risk-per-dollar in the book**: -29.1% underwater and deepening, no structural catalyst identified, next print not until 11/4 (70 days out, outside near-term binary risk), small-cap liquidity. No sizing change recommended today — position is already half-size by original design and the OMCL earnings contingency plan's structural-break-only standard still applies with no break identified — but this desk will keep stating plainly that OMCL is the book's clearest "small position, large idiosyncratic risk" line item, now at a fresh drawdown low for the second straight session.

## 9. Tail risk scenarios with probability estimates

1. **NVDA post-print move exceeds 2x the options-implied ~5.4-5.9% move (i.e., >~11-12%), either direction.** Rough tail-probability estimate based on typical post-earnings distribution shapes for high-implied-move mega-caps: **~10-15%.** Zero hedge capacity either direction under the equities-only mandate — this is pure, unmanaged binary exposure on ~$5.23 of the book, now hours away rather than a day away.
2. **Rule 6a rate-shock trigger fires within the next 2 weeks** (two consecutive closes above 4.75%/5.25%), catalyzed by a hawkish Jackson Hole surprise from a new Fed chair trying to establish credibility. **~15-20%**, essentially unchanged from yesterday's read — Warsh's speech (8/28, 2 days after tonight's print) remains a real, dated re-test, now closer.
3. **A genuine, dated NVDA CDS re-widening toward/above the 82bps 7/27 record, confirmed by a real print rather than recycled or stale reporting.** Now a 9th-consecutive-cycle data gap with no fresh number found — **probability genuinely unknown**, and that unknowability, hours before a binary earnings event, is itself worth flagging as a distinct risk from the CDS level itself.
4. **A fresh Hormuz/Red Sea escalation** reversing the recent partial de-escalation, hitting broad risk sentiment while XLE's own directional response is ambiguous (could rally on oil-supply-shock fears or fall on broad risk-off, depending on which effect dominates). **~15-20%** over the next month, roughly unchanged from prior reads — status quo, still unsigned.
5. **An OMCL-specific negative catalyst** (contract loss, guidance cut, insider-sale pattern turning discretionary) before the 11/4 print. **~5-10%**, low probability but the position is now -29.1% underwater at a fresh drawdown low, so any real catalyst would land on an already-impaired cost basis.

## 10. Hedging strategies — top 3 risks (equities-only toolbox, no options)

1. **NVDA/CRWD earnings binary risk (tonight AH, T-0).** No direct equities-only hedge exists for a single-stock binary print without simply reducing the position — already considered and explicitly declined under rule 15's cost-benefit (small absolute size, JPM's WAIT call, BR's underweight flag). The only remaining equities-only lever is holding the ~$6 cash buffer intact through the print rather than deploying it into anything else today, which the book is already doing by default (rule 1 — no fresh catalyst for a new buy, and rule 2 would independently veto any new entry hours before a binary event).
2. **Look-through AI/tech concentration (~31.3% of equity).** The only equities-only hedge is continued, deliberate diversification into genuinely uncorrelated satellites rather than adding to VTI or NVDA at current levels — XLE and OMCL already serve this role; GEHC (healthcare, price-gated, pending) would extend it further if it ever fires. No new action recommended today, but this is the standing rationale for not adding to the core sleeve while it already sits over its BR targets (VTI +2.62pp, VXUS +2.11pp).
3. **Rate/duration sensitivity.** XLE is the book's natural, already-held rate hedge (low/negative duration sensitivity per §5) — no incremental action needed while rate data remains calm; this desk would flag XLE's role explicitly if rule 6a's trigger were to fire post-Jackson-Hole, rather than treating XLE purely as an energy/oil-cycle satellite.

## 11. Rebalancing suggestions

**No rebalancing recommended today** — rule 1 (no fresh catalyst) applies, and trading hours before a binary-event print is exactly the kind of reactive, pressure-driven decision the book's own contingency-plan discipline (rule 15) exists to avoid. For the record, current vs. BR's own pool targets: VTI 32.62% (target 30%, +2.62pp, inside band), VXUS 27.11% (target 25%, +2.11pp, inside band), NVDA 10.43% (target 15%, under formal review, deferred to the first post-print run per BR's own 8/27 timeline), OMCL 7.07% (target 10%, -2.93pp under), XLE 10.83% (target 10%, +0.83pp, on target), cash 11.96% (10% floor, +1.96pp buffer). Nothing here crosses a hard trigger. This desk's next report — the first run after tonight's print — will be the real test of whether every buffer and trigger computed today holds up once NVDA's/CRWD's actual results are known, and will recompute everything fresh rather than carry today's pre-print numbers forward.

---

*BW Risk Assessment — radical transparency, no softened warnings. Filed 2026-08-26 ~14:45 ET.*
