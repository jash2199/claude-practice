# BW Risk Assessment — Risk Management Report
**Date: 2026-09-23 (Wednesday), ~14:41 ET (verified via `TZ=America/New_York date`).** Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time. Second BW report today (first was 10:41 ET).

---

## Overall Portfolio Risk Grade: **D-** (held flat vs. 10:41 ET this morning)

## Single biggest risk right now
**Same structural risk as this morning, one data point better, not resolved.** This book's only real Hormuz hedge (XLE) is still pricing in most of the optimistic branch of a genuinely binary setup — Trump's UN framing ("a deal, or I annihilate the Islamic Republic," any real deal likely only after the midterms) against real but unresolved US-Iran engagement. XLE gave back some of this morning's rally (from $62.705 at 10:41 to $62.36 now), which mechanically widened MS's DCF cushion back out to +0.71% undervalued from this morning's razor-thin +0.15% — a modest improvement, not a fix. Fresh WebSearch this run confirms nothing has actually changed on the ground since 10:41: Iran's Pezeshkian told the UN today Iran wants good relations but "cannot let some have free access" to the Strait if it's used "to impose aggression," and Iran's military again called Trump's threats "a sign of strategic desperation" while warning of "more crushing" strikes — rhetoric consistent with, not escalatory beyond, what was already logged this morning. The underlying tail risk (Scenario C below) is unchanged; only its price cushion moved slightly in the book's favor.

---

## Portfolio snapshot (live, 2026-09-23 ~14:41 ET)

`get_portfolio`: total_value **$100.1201** (cash $56.03 + equity $44.0901). Pool ≈ **$50.1201, a +$0.1201 (+0.24%) accumulated profit** — down from 10:41's +0.42% and from 9/22's 15:40 ET high of +1.19%, as the broad afternoon pullback (all four risk-on names red) outweighed XLE's own partial reversal. Deployable cash $6.03 (~12.03% of pool), ~1.03pp above BR's 11% reserve floor.

| Position | Qty | Last Price | Value | % Equity | % Pool | Unrealized | Day chg (vs 9/22 close) |
|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $225.345 | $5.5944 | 12.69% | 11.16% | +11.89% | **-1.54%** |
| VTI | 0.036690 | $378.4101 | $13.8839 | 31.49% | 27.70% | +2.16% | -0.75% |
| VXUS | 0.154525 | $85.985 | $13.2868 | 30.14% | 26.51% | +2.21% | **-1.72%** |
| OMCL | 0.106405 | $32.990 | $3.5103 | 7.96% | 7.00% | **-29.79%** | -0.54% |
| XLE | 0.086775 | $62.360 | $5.4113 | 12.28% | 10.80% | +8.23% | **+0.94%** |
| GEHC | 0.036393 | $66.015 | $2.4025 | 5.45% | 4.79% | -3.89% | -0.38% |
| Cash (deployable) | — | — | $6.03 | — | 12.03% | — | — |

NVDA+OMCL combined **~20.65% of equity** — 25% concentration trigger clean, ~4.35pp buffer. NVDA alone **~12.69% equity / 11.16% pool** (18-20% trigger clean, ~1.16pp over BR's 10% pool target). **OMCL DCA gate (rule 18): pool needs ~$2.38 more accumulated profit to fire** — widened further from 10:41's ~$2.29 as today's afternoon pullback ate into pool profit.

---

## Correlation analysis between holdings

Structurally unchanged, same pattern as every recent report deepening slightly this afternoon:
- **NVDA + VTI + VXUS + GEHC remain one correlated risk-on bloc** (~79.77% of equity). All four red today, worse than at 10:41 (NVDA -1.54% vs -1.23%, VXUS -1.72% vs -1.48% — still the day's worst mover, VTI -0.75% vs -0.59%, GEHC -0.38% vs -0.37%) — the broad afternoon pullback GS flagged in its 12:4x ET report (S&P/Dow/Nasdaq all red on rising yields + oil) deepening, not a new idiosyncratic break on any one name.
- **XLE is still the lone green position** but has given back roughly a third of its earlier gain (+0.94% now vs +1.50% at 10:41) as oil eased off its morning highs — doing its hedge job today, but with less conviction than this morning, and still with a multi-week gap underneath before any actual Iran deal per Trump's own timeline.
- **OMCL remains the one true idiosyncratic outlier** (-29.79%, still its 7/30 guide-down thesis), red again today (-0.54%) in line with the broad risk-on bloc, not fresh OMCL-specific news.
- **GEHC** pulled back a touch further (-0.38%, live $66.015) but is still trading above BR's $65 line. MS's mandatory post-close-and-hold DCF rebuild (10:12 ET) reaffirmed fair value at $70.8 (+7.0% undervalued) — unchanged since this morning, no reason to revisit.

## Sector concentration risk

| Sector/factor (look-through) | Approx. weight (% of equity) | Note |
|---|---|---|
| Tech / AI / semis (NVDA direct + est. tech slice of VTI/VXUS) | **~28.1% of equity** | Flagged for an 11th consecutive report; unchanged this run |
| Energy (XLE) | ~12.3% | Sole hedge sleeve; cushion widened slightly this afternoon (see below) |
| Healthcare (GEHC + OMCL) | ~13.4% | Split between a sentiment-supported, MS-reaffirmed-undervalued name (GEHC) and a deep-drawdown name (OMCL) |
| Broad market / diversified (residual VTI/VXUS, ex-tech-slice) | ~46.1% | Largest bucket; still USD/global-equity beta, not independent of the tech factor |

No structural change since this morning. Standing flag stands: the look-through tech concentration lives mostly inside VTI/VXUS, not the headline NVDA%.

## Geographic exposure and currency risk

~69.9% of equity (VTI+NVDA+OMCL+GEHC) is USD/US-domiciled; ~30.1% (VXUS) is unhedged ex-US, direct FX exposure — unchanged. VXUS was again today's single worst mover (-1.72%), consistent with dollar strength on a still-elevated 10yr (~4.96%, WebSearch-confirmed this run, essentially flat vs. this morning) rather than a VXUS-specific break. Same two-sided framing as this morning stands: a genuinely successful Iran outcome could eventually firm non-USD currencies against the dollar, but that hasn't happened yet and the rate backdrop independently supports the dollar regardless.

## Interest rate sensitivity per position

- **NVDA**: high — long-duration growth multiple; MS's DCF gap ~-9.8% overvalued, unchanged since this morning.
- **VTI**: high — mega-cap-tech-heavy index, same duration exposure as NVDA in aggregate.
- **VXUS**: moderate — lower average multiple than US, plus FX/rate-differential sensitivity; today's worst mover again.
- **OMCL**: high — small-cap, no earnings cushion at this drawdown level, disproportionately hurt by a higher cost of capital.
- **XLE**: low-moderate — driven primarily by oil price, not discount rate; DCF crossover widened back out slightly this afternoon (see below).
- **GEHC**: moderate — established cash-flow generator, less rate-sensitive than growth names; MS's WACC held at 8.5%.

**Live rate context, unresolved for a fifth week running:** fresh WebSearch this run again confirms the 10yr at **~4.96%** (TradingEconomics), essentially unchanged from this morning and from 9/21-22 — still below the 5% threshold, comfortably above rule 6a's 4.75% pause (fired 9/2, still in effect). No settled close above 5% held a full week has been confirmed. Standing process critique repeated: a risk desk operating for over a month without a clean primary-source read on the single number gating every core-add decision is itself a process risk.

**XLE recompute, this run:** MS's 9/23 10:1x ET composite fair value remains $62.8/sh (WACC 10.5%, Brent $76, unchanged inputs) vs. this run's live price $62.36 → gap = **+0.71% undervalued**, up from this morning's +0.15% as XLE gave back part of its own rally. Directionally better for the book's hedge cushion, but still the thinnest reading on file outside today's own two prints — this remains a fragile, easily-reversed cushion, not a resolved concern.

## Recession stress test — estimated drawdown

Unchanged methodology (equity-value shocks, no rebalancing assumed), re-run on today's 14:41 ET live weights:

- **Scenario A — garden-variety recession (broad equities -25%, energy -15%, healthcare/OMCL -10%):** NVDA/VTI/VXUS/GEHC segment (~79.77% of equity, ~$35.17) down ~25% ≈ -$8.79; XLE (~12.28%, ~$5.41) down ~15% ≈ -$0.81; OMCL (~7.96%, ~$3.51) down ~10% from an already-depressed base ≈ -$0.35. **Total equity drawdown ≈ -$9.95 (-22.6% of equity, ~-19.9% of the $50.12 pool).**
- **Scenario B — supply-shock stagflation (oil spike, broad equities -15%, energy +20%):** NVDA/VTI/VXUS/GEHC down ~15% ≈ -$5.28; XLE up ~20% ≈ +$1.08; OMCL flat-to-down ~5% ≈ -$0.18. **Net equity impact ≈ -$4.37 (-9.9% of equity, ~-8.7% of pool)** — still the one scenario this book is actually structured to survive well.
- **Scenario C — Hormuz escalation → correlation-to-1 broad panic (XLE's hedge property inverts):** uniform -20% shock across all six positions. **Total equity drawdown ≈ -$8.82 (-20.0% of equity, ~-17.6% of pool).** This remains the scenario this book's all-equity, no-options structure was not designed to survive — XLE's modestly-improved cushion (+0.71%) helps at the margin but does not change this scenario's outcome, since the shock itself would take the hedge down too.

Account-level (including the untouchable ~$50 reserve): all figures above roughly halve, since flat reserve cash dilutes any trading-pool loss across the full ~$100 account.

## Liquidity risk rating

| Position | Liquidity rating | Note |
|---|---|---|
| VTI, VXUS | 🟢 Very high | Deep, liquid ETFs, no concern at this position size |
| NVDA | 🟢 Very high | Mega-cap, no concern |
| XLE | 🟢 High | Liquid sector ETF |
| GEHC | 🟡 Moderate | Large-cap but lower average daily volume than the above; no structural change |
| OMCL | 🟡 Moderate | Small-cap, thin volume flagged repeatedly — not a forced-exit concern at this position size, but a real slippage risk if ever sized up materially, which is precisely the DCA gate's near-term risk (see below) |

No change since this morning. All positions remain sub-$14; liquidity is not a binding constraint for a book this size.

## Single stock risk and position sizing recommendations

- **NVDA+OMCL combined concentration (20.65%) and NVDA alone (12.69%/11.16%) both remain clean** against their respective triggers — no forced review this run.
- **OMCL's -29.79% unrealized loss remains this book's largest standing single-name risk**, held without a mechanical stop-loss by design. **The DCA gate widened further to ~$2.38 away** (from ~$2.29 at 10:41 ET) as the afternoon pullback ate further into pool profit — another reminder this gate moves in both directions on ordinary market noise. Repeating explicitly: **a mechanical pool-profit threshold clearing is not a thesis re-affirmation.** This desk wants a fresh, dedicated read (MS confirms the DCF discount still holds, no guide-down repeat risk into the ~10/29 print, no new structural break) *at the run the gate fires*, not a reflexive first tranche the moment the number crosses $2.50.
- **GEHC sizing risk (carried forward):** MS's mandatory post-close DCF rebuild remains clean (+7.0% undervalued). GEHC is already at/above BR's 4% target pool weight (4.79%) with no overweight case made by any desk.
- **No position sizing changes recommended this run.**

## Tail risk scenarios with probability estimates

1. **Hormuz war re-escalates to a fresh, larger direct-strike event** (a new US strike wave, an attempt to fully seal the strait, or Trump's own "annihilate" branch being chosen): oil spikes sharply, correlated multi-day equity selloff (Scenario C). Estimated probability over the next 30 days: **~15-18%, unchanged** — today's UN remarks from both sides are more of the same rhetoric already priced into this estimate this morning, not a fresh escalation.
2. **10yr settles decisively above 5% and holds for a full week**, extending rule 6a and compressing multiples across the book's highest-duration names (NVDA, VTI, OMCL). Estimated probability: **~25-30%, unchanged** — today's ~4.96% print keeps this live but static.
3. **OMCL-specific structural thesis break** ahead of the ~10/29 print, compounded by the DCA gate's proximity. Estimated probability of a break: **~10%, unchanged.**
4. **Generalized correlation-to-1 liquidity panic** (any trigger, not just Hormuz) taking down all six holdings including XLE simultaneously. Estimated probability of a >10% week-over-week equity drawdown from this cause: **~20%, unchanged** — still the scenario this all-equity, no-options, thin-cash-reserve book is least equipped to survive.
5. **"Buy the rumor" reversal: today's talks or a near-term diplomatic setback disappoints relative to what's now priced in.** Estimated probability of a disappointment-driven reversal within the week: **~33-38%, nudged down slightly from this morning's 35-40%** — XLE's own partial afternoon reversal (giving back a third of its gain) is itself a small piece of evidence that the market isn't fully committing to the optimistic branch, marginally reducing (not eliminating) the risk of a sharper snap-back later.
6. **GEHC gives back some or all of its post-Needham/close-above-$65 gain** if the market re-rates the stock toward MS's reaffirmed $70.8 base case rather than Needham's $93 target. Estimated probability of a >5% pullback within a week: **~30-35%, unchanged.**

## Hedging strategies to reduce the top 3 risks (equities-only toolbox)

1. **Against the Hormuz-escalation/hedge-cushion risk (biggest risk):** unchanged in kind — there is no clean equities-only hedge for a genuine panic; XLE only reliably works in the "clean" stagflation scenario (B), not scenario C. Its valuation cushion improved slightly this afternoon (+0.71% vs +0.15%) but remains thin and easily reversible on the next tick. **Cash remains the only real lever**, and at ~12.03% of pool sits about 1pp above BR's 11% floor — a real buffer, but not a large one, especially with the OMCL DCA gate still a live near-term draw on it.
2. **Against tech/AI look-through concentration (~28.1%):** no new position-level action recommended. Reiterating the standing point: when the OMCL DCA gate opens (~$2.38 away), that capital is earmarked for OMCL by design (rule 18), not a free deployment decision — any *separate* future deployment should still lean away from NVDA/VTI/VXUS.
3. **Against the GEHC sentiment-vs-fundamentals gap:** the cleanest equities-only response remains not letting a sell-side price target (Needham $93) substitute for this book's own cross-vetting bar — already validated this week when MS's mandatory refresh came back reaffirming, not inflating, its own $70.8 call.

## Rebalancing suggestions with allocation percentages

Current live weights vs. BR's 9/17-revised targets (all % of pool): NVDA 11.16% (target 10%, +1.16pp), VTI 27.70% (target 28%, -0.30pp), VXUS 26.51% (target 25%, +1.51pp), XLE 10.80% (target 12%, -1.20pp), OMCL 7.00% (target 10%, -3.00pp), GEHC 4.79% (target 4%, +0.79pp), Cash 12.03% (target 11%, +1.03pp).

- **No rebalancing trade recommended this run** — nothing breaches BR's 5pp mechanical drift trigger; OMCL's -3.00pp gap is the largest, and it is appropriately gated by rule 18 (DCA), not a discretionary rebalance signal.
- **XLE top-up trigger:** funding remains subordinated to the OMCL DCA gate per BR's standing sequencing. This desk agrees with that sequencing; XLE's valuation cushion improved marginally this afternoon but is still too thin to make a compelling case for reopening the sequencing question even if it were on the table.
- **No rebalancing action recommended on GEHC or OMCL** beyond the existing mechanisms already governing both.

---

## Heat map summary

| Risk factor | Level | Trend vs. 10:41 ET this morning |
|---|---|---|
| Hormuz/Iran binary tail risk (real talks vs. explicit "annihilate" threat) | 🔴 High | → unchanged — today's UN remarks from both sides restate, don't escalate, the standing picture |
| XLE hedge cushion (valuation gap vs. Hormuz protection needed) | 🔴 High | ↓ slightly better — gap widened from +0.15% (10:41 ET) to +0.71% (this run) as XLE gave back part of its rally, still thin |
| "Buy the rumor" reversal risk | 🟡 Moderate | → roughly unchanged, nudged down slightly (33-38% vs 35-40%) |
| Look-through tech/AI concentration | 🔴 High | → unchanged (11th+ report) |
| OMCL single-position drawdown + DCA gate | 🟡 Moderate | ↓ slightly worse — gate widened to ~$2.38 from ~$2.29 on the afternoon pullback |
| GEHC sentiment-vs-fundamentals gap | 🟡 Moderate | → unchanged — MS's mandatory refresh reaffirmed fair value, no new information |
| Interest rate / duration risk | 🟡 Moderate | → unchanged, data gap persists into a fifth week |
| Headline concentration triggers (NVDA%, NVDA+OMCL%) | 🟢 Low | → clean, unchanged |
| Liquidity | 🟢 Low | → unchanged |

---

Sources:
- [US 10 Year Treasury Note Yield - TradingEconomics](https://tradingeconomics.com/united-states/government-bond-yield)
- [US10Y: U.S. 10 Year Treasury - CNBC](https://www.cnbc.com/quotes/US10Y)
- [Iran says Trump's threats a sign of "strategic desperation," floats conditions for Hormuz reopening - CNBC](https://www.cnbc.com/2026/09/23/us-iran-war-trump-hormuz.html)
- [Iran live updates: Iranian president pushes back at Trump during UN speech - ABC News](https://abcnews.com/International/live-updates/iran-live-updates-irgc-ready-counteroffensive-us-attacks/?id=136611503)
- [2026 Strait of Hormuz campaign - Wikipedia](https://en.wikipedia.org/wiki/2026_Strait_of_Hormuz_campaign)
- Internal: trading-experiment/state.md (9/23 ~14:36 ET run, freshest live snapshot pre-report), analysts/ms-dcf-valuation.md (9/23 ~10:12 ET), analysts/gs-stock-screener.md (9/23 ~12:4x ET), analysts/jpm-earnings-analyzer.md (9/23 ~09:19 ET), analysts/br-portfolio-builder.md (9/22 ~16:11 ET, still freshest as of this run)
