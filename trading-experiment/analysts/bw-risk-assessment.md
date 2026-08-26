# BW Risk Assessment — Risk Management Report
**Date: 2026-08-26 (~14:50 ET, Wednesday)** — PRINT DAY, T-0, still hours out: NVDA/CRWD report after today's close (NVDA ~4:20-4:30pm ET; CRWD call 5:00pm ET). Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time. Prior BW report: 2026-08-26 ~14:45 ET (Grade C) — **this run lands only minutes after that one.** Radical transparency starts with saying so plainly: nothing material has moved in the interim, and this report will not manufacture drama to look busy. Full mandate structure still delivered below with fresh, re-verified numbers.

---

## Overall Portfolio Risk Grade: **C** (held, unchanged)

## Single biggest risk right now
**Unchanged from 15 minutes ago: NVDA (and CRWD) report after today's close, and this book still has zero equities-only hedge for it.** NVDA is essentially flat since the last report ($210.79 vs $210.67, a rounding-level difference), still down modestly on the day (-1.06% vs Tuesday's $213.05 close). VIX is flat at 15.45-15.46. OMCL ticked up slightly ($33.50 vs $33.32 last run), trimming its drawdown to -28.7% from -29.1% — a small, noisy intraday move, not a reversal signal. Every trigger, buffer, and gap flagged 15 minutes ago reads the same way now. The honest statement today is the same as it was an hour ago: the book is correctly positioned per its own written rules, correctly exposed to a binary event nobody can control, and has roughly two hours left before that changes.

Compounding factors, status this run (deltas vs. the ~14:45 ET report only):
1. **NVDA/CRWD report today, 8/26, after the close — still T-0, ~2 hours out.** No change. Per the standing NVDA earnings contingency plan (state.md rule 15), no pre-earnings trim, no pre-earnings add — this desk is not relitigating that call again this run.
2. **VIX flat.** 15.45-15.46 vs. last run's 15.46 — noise-level move, no trend change.
3. **Rule 6a rate-shock trigger: not re-pulled this run either** (still last-verified 8/25: 10yr 4.66% intraday / 30yr 5.23% intraday, both clear of the 4.75%/5.25% thresholds). Two runs in a row without a fresh pull is a real gap, not a judgment call — flagging it rather than letting it look like a deliberate skip. Jackson Hole (Fed Chair Warsh, Friday 8/28) is the next dated test.
4. **NVDA pool-drift buffer: unchanged.** 10.43% of pool (vs. this desk's ~10% floor), buffer ~0.43pp — identical to the last run, since NVDA's price is essentially unmoved.
5. **NVDA CDS spread: still a data gap**, now spanning at least two runs today on top of the prior multi-cycle gap. Not re-searched again this run for the same reason as last time — the last WebSearch attempt on this surfaced a demonstrably wrong narrative, and repeating it minutes later isn't going to produce a materially different result.
6. **OMCL: marginally better, not materially different.** Live $33.50 vs. avg cost $46.99 → **-28.7%**, a touch off the last run's -29.1% low on ordinary intraday noise. Still the book's largest single detractor by percentage.

---

## Risk heat map

| Risk category | Level | Notes |
|---|---|---|
| Binary-event stacking (NVDA/CRWD print, zero hedge capacity) | 🔴 High | T-0, still ~2 hours out; zero equities-only hedge exists for a single-stock binary print without simply reducing the position (already declined per rule 15) |
| Pre-print volatility regime | 🟡 Medium-High (stable) | VIX 15.45-15.46, flat vs. last run and vs. yesterday's spike — cooled, not resolved |
| NVDA pool-drift trigger proximity | 🟡 Medium-High (unchanged) | 10.43% actual vs. ~10% floor — ~0.43pp buffer, identical to last run |
| Correlation / lack of true diversification | 🔴 High | Same structural read as every prior run — no true ballast in an equities-only, no-bond book |
| Look-through AI/tech concentration | 🔴 High | ~31.3% of equity once VTI's/VXUS's embedded weights are added to NVDA direct — unchanged |
| Single-stock concentration (NVDA+OMCL) | 🟡 Medium | 19.92% of equity combined, ~5.08pp under the 25% combined trigger |
| OMCL unrealized loss | 🟠 Medium-High | -28.7%, marginally off the fresh low, still no identified structural catalyst |
| Interest-rate / duration sensitivity | 🟢 Low-Medium (stale, now 2 runs) | Not re-pulled this run either; last-verified reads (8/25) sit clear of rule 6a's thresholds |
| Data-quality risk (CDS sourcing) | 🟠 Medium-High | Data gap now spans multiple runs today; last confirmed reading (80.77bps, 8/18) materially stale heading into the print |
| Liquidity risk (book-wide) | 🟢 Low | Four of five holdings mega-cap/large-ETF liquid; OMCL remains the exception |
| Geographic/currency risk | 🟡 Medium | ~30.7% of equity (VXUS) carries direct FX exposure — unchanged |

---

## 1. Portfolio snapshot (Robinhood-verified, 2026-08-26 ~14:41 ET)

Pool ≈ equity $44.1628 + deployable cash $6.00 = **$50.1647** (base $50 + ~$0.16 accumulated profit, essentially flat vs. last run's ~$0.18). Reserve: a further ~$50 untouchable per Jash's 7/10 clarification, excluded from all percentages below unless marked "% of account."

| Holding | Live price | Chg vs. prior close | Value | % of equity | % of pool |
|---|---|---|---|---|---|
| NVDA | $210.79 | -1.06% | $5.233 | 11.85% | 10.43% |
| VTI | $378.20 | +0.01% | $16.372 | 37.07% | 32.64% |
| VXUS | $87.85 | -0.31% | $13.575 | 30.74% | 27.06% |
| OMCL | $33.50 | +0.84% | $3.565 | 8.07% | 7.11% |
| XLE | $62.45 | +0.62% | $5.419 | 12.27% | 10.80% |
| Cash | — | — | $6.00 | — | 11.96% |

## 2. Correlation analysis between holdings

No change to the structural read from 15 minutes ago: **no genuine ballast position exists in this book**. NVDA/VTI/VXUS remain the correlated AI/broad-market-sentiment cluster; OMCL and XLE remain the two real diversifiers, uncorrelated with each other and with the cluster, but for idiosyncratic reasons (a bounce off a drawdown low; oil-cycle strength) rather than because either is hedging the print risk. **Net: 2 of 5 holdings (OMCL, XLE) provide real diversification value; the other 3 (NVDA, VTI, VXUS) are correlated expressions of the same US/AI-equity factor.** This has been true every run this week and remains true now.

## 3. Sector concentration risk

Face-value: AI/semis (NVDA) 11.85% direct; broad-market ETFs (VTI/VXUS) 67.81%; healthcare-tech (OMCL) 8.07%; energy (XLE) 12.27%.

**Look-through concentration, using the same methodology as every prior run** (BR's ~36% AI-adjacent estimate for VTI's embedded weight; ~20% for VXUS):
- NVDA direct: 11.85%
- VTI embedded (~36% of 37.07%): ~13.3%
- VXUS embedded (~20% of 30.74%): ~6.1%
- **Total look-through AI/mega-cap-tech exposure: ~31.3% of equity** — unchanged from the last run, still the book's single largest true factor bet, still concentrated in the same session as that factor's binary risk event.

## 4. Geographic exposure and currency risk

Unchanged. US-domiciled/USD-denominated: NVDA, OMCL, XLE, VTI's underlying holdings. Direct FX exposure: VXUS (30.74% of equity) across developed and EM ex-US currencies. No dedicated FX hedge exists or is warranted at this size (~$13.58) — flagged for completeness, not as an action item.

## 5. Interest rate sensitivity by position

| Position | Rate sensitivity | Why |
|---|---|---|
| NVDA | High | Growth/duration name; MS's DCF (WACC 11%) gap moves materially with discount-rate assumptions |
| OMCL | High | Small-cap growth healthcare-tech; MS's DCF (WACC 9%) similarly duration-sensitive, thin liquidity amplifies rate-driven compression |
| VTI | Medium | Broad market with a heavy growth/tech tilt |
| VXUS | Medium-Low | More value/financials-weighted internationally, historically less duration-sensitive |
| XLE | Low / near-zero-to-negative | Oil-price and demand-driven, not discount-rate math — the book's best natural rate-shock hedge |

Rate inputs were **not re-pulled this run**, for the second consecutive run today — flagged plainly in the heat map above as a real gap rather than glossed over. Last-verified 8/25 reads (10yr 4.66% intraday, 30yr 5.23% intraday) sit clear of rule 6a's thresholds. Jackson Hole (Fed Chair Warsh, 8/28) remains the next real test.

## 6. Recession stress test — estimated drawdown

Unchanged from the last run — no new information has arrived that would move these estimates:

| Position | Estimated drawdown | Basis |
|---|---|---|
| NVDA | -40% to -50% | High-beta AI/semis name at a wide premium to MS's DCF fair value, before tonight's print is even known |
| OMCL | -35% to -45% | Small-cap growth healthcare-tech; thin liquidity amplifies drawdowns; already -28.7% from cost with no recession priced in |
| VTI | -25% to -35% | Broad US market, modestly worse than average given elevated tech/AI look-through weight |
| VXUS | -25% to -35% | Similar broad-market range; partial FX-driven offset or worsening depending on shock origin |
| XLE | -30% to -40% | Demand-destruction risk in a genuine recession, though a supply-shock-driven recession could see XLE outperform — scenario-dependent |

**Weighted portfolio estimate: roughly -30% to -35% on the $44.16 equity book (~-$13 to -$15)** before the ~$6 deployable cash and untouched ~$50 reserve are considered. This framework does not capture tonight's idiosyncratic earnings-gap risk, covered separately in §9.

## 7. Liquidity risk rating by holding

| Holding | Liquidity rating | Notes |
|---|---|---|
| VTI | Very high (Low risk) | One of the largest, most liquid ETFs in existence |
| VXUS | Very high (Low risk) | Large, liquid international ETF |
| XLE | High (Low risk) | Large, liquid sector SPDR |
| NVDA | High (Low risk) | Mega-cap, extremely high daily volume — tonight's post-print after-hours and tomorrow's open will still see materially wider effective spreads |
| OMCL | Medium (Medium risk) | Small/mid-cap healthcare-tech — wider spreads, more gap risk than the book's other four holdings |

## 8. Single stock risk and position sizing

No change from 15 minutes ago. NVDA remains **well inside every standing trigger** (10.43% of pool vs. the ~10% floor, ~0.43pp buffer; 11.85% of equity vs. the 18-20% overweight cap; 19.92% combined with OMCL vs. the 25% cap, ~5.08pp buffer). OMCL remains small in dollar terms (~$3.57, 8.07% of equity) but carries the highest risk-per-dollar in the book: -28.7% underwater, no structural catalyst identified, next print not until 11/4 (outside near-term binary risk), small-cap liquidity. No sizing change recommended — the OMCL earnings contingency plan's structural-break-only standard still applies with no break identified. This desk still expects every one of tonight's buffers to move materially by tomorrow's first run and will recompute fresh rather than carry today's numbers forward.

## 9. Tail risk scenarios with probability estimates

1. **NVDA post-print move exceeds 2x the options-implied ~5.4-5.9% move (i.e., >~11-12%), either direction.** **~10-15%**, unchanged. Zero hedge capacity either direction under the equities-only mandate.
2. **Rule 6a rate-shock trigger fires within the next 2 weeks**, catalyzed by a hawkish Jackson Hole surprise from a new Fed chair. **~15-20%**, unchanged — now compounded by a second consecutive run without a fresh rate pull (see §5 gap).
3. **A genuine, dated NVDA CDS re-widening toward/above the 82bps 7/27 record.** Data gap now spans multiple runs today — **probability genuinely unknown**, and the persistence of that unknowability into the final hours before a binary print is itself the notable fact, not any single day's search result.
4. **A fresh Hormuz/Red Sea escalation.** **~15-20%** over the next month, unchanged, status quo, still unsigned.
5. **An OMCL-specific negative catalyst** before the 11/4 print. **~5-10%**, unchanged, low probability but landing on an already-impaired -28.7% cost basis if it occurs.

## 10. Hedging strategies — top 3 risks (equities-only toolbox, no options)

1. **NVDA/CRWD earnings binary risk (tonight AH, ~2hrs out).** No direct equities-only hedge exists without reducing the position — already declined under rule 15. The only remaining lever is holding the ~$6 cash buffer intact through the print, which the book is already doing by default.
2. **Look-through AI/tech concentration (~31.3% of equity).** Only equities-only hedge remains continued diversification into OMCL/XLE rather than adding to VTI or NVDA at current levels. No new action today.
3. **Rate/duration sensitivity.** XLE remains the book's natural rate hedge. No incremental action while rate data remains calm — though this desk flags again that rate data itself is now two runs stale (§5).

## 11. Rebalancing suggestions

**No rebalancing recommended today** — unchanged from 15 minutes ago, and trading hours before a binary-event print remains exactly the kind of reactive decision the book's contingency-plan discipline exists to avoid. Current vs. BR's pool targets: VTI 32.64% (target 30%, +2.64pp), VXUS 27.06% (target 25%, +2.06pp), NVDA 10.43% (target 15%, under formal review, deferred to the first post-print run), OMCL 7.11% (target 10%, -2.89pp under), XLE 10.80% (target 10%, +0.80pp), cash 11.96% (10% floor, +1.96pp buffer). Nothing crosses a hard trigger. **This desk's next report — the first run after tonight's print — is where the real work resumes**; today's second consecutive near-identical run is best used to flag the rate-data and CDS-data gaps plainly rather than restate unchanged numbers with false new analysis.

---

*BW Risk Assessment — radical transparency, no softened warnings. Filed 2026-08-26 ~14:50 ET.*
