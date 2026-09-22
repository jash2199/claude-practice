# BW Risk Assessment — Risk Management Report
**Date: 2026-09-22 (Tuesday), ~10:42 ET (verified via `TZ=America/New_York date`).** Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time. First BW report since 9/21 ~14:41 ET (D-) — ~20 hours and four trader checkpoints have passed; this run's job is to check whether anything genuinely changed, not restate yesterday's case.

---

## Overall Portfolio Risk Grade: **D-** (held flat vs. 9/21 ~14:41 ET)

## Single biggest risk right now
**This book's only hedge keeps getting cheaper against a risk that hasn't actually improved.** MS's DCF flipped XLE to "undervalued" for the first time on record this morning (+2.1%), purely because oil has fallen for a fourth straight session on Trump-Xi-summit optimism (Thursday) and Hormuz-diplomacy hope. But the hardest data point this desk has — IMF PortWatch's 8-vs-~85 pre-crisis daily Hormuz tanker transits (a ~90.6% physical flow collapse) — is now 9 days stale (dated 9/13) and **no fresher reading has surfaced to confirm the disruption has actually eased.** A fresh WebSearch this run found Iran's foreign ministry describing Oman-mediated negotiations as reaching a "final stage" — but that line traces to reporting that predates this week and cannot be pinned to a fresh date (rule 4 dateline discipline: flagged, not treated as new confirmation). So the situation is: oil is pricing a resolution that isn't confirmed, XLE is falling on that unconfirmed pricing, and the one instrument this book holds specifically to protect against a Hormuz-driven equity selloff is now *cheaper* than it was a week ago with no verified improvement in the underlying risk it exists to hedge. If Thursday's summit or the Hormuz diplomacy disappoints, this book re-enters a correlation-to-1 scenario (below) with its hedge having spent the run-up getting weaker, not stronger.

---

## Portfolio snapshot (live, 2026-09-22 ~10:42 ET)

`get_portfolio`: total_value **$100.4500** (cash $56.01 + equity $44.4400). Pool ≈ **$50.4500, a +$0.4500 (+0.90%) accumulated profit** — essentially flat vs. this morning's 09:37 ET read (+0.90%), up from Monday's +0.74% close. Deployable cash $6.01 (~11.91% of pool), ~0.91pp above BR's 11% reserve floor.

| Position | Qty | Last Price | Value | % Equity | % Pool | Unrealized | Day chg (vs 9/21 close) |
|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $228.035 | $5.6612 | 12.74% | 11.22% | +13.23% | +0.29% |
| VTI | 0.036690 | $381.195 | $13.9881 | 31.48% | 27.73% | +2.91% | +0.02% |
| VXUS | 0.154525 | $87.1723 | $13.4703 | 30.32% | 26.70% | +3.62% | +0.03% |
| OMCL | 0.106405 | $32.840 | $3.4943 | 7.87% | 6.93% | **-30.11%** | +1.26% |
| XLE | 0.086775 | $62.270 | $5.4035 | 12.16% | 10.71% | +8.07% | **-0.30%** |
| GEHC | 0.036393 | $66.560 | $2.4225 | 5.45% | 4.80% | -3.10% | +2.70% |
| Cash (deployable) | — | — | $6.01 | — | 11.91% | — | — |

NVDA+OMCL combined **~20.61% of equity** — 25% concentration trigger clean, ~4.39pp buffer. NVDA alone **~12.74% equity / 11.22% pool** (18-20% trigger clean, ~1.22pp over BR's 10% pool target — narrow, unchanged). OMCL DCA gate (rule 18): pool now needs only **~$2.05** more accumulated profit to fire — the closest reading this desk has logged, worth flagging loudly given the sizing caution below.

---

## Correlation analysis between holdings

Unchanged structurally from every prior report:
- **NVDA + VTI + VXUS + GEHC remain one correlated risk-on bloc** (~79.99% of equity). Today all four are flat-to-slightly-up, with GEHC the standout (+2.70%) on Needham's fresh initiation — a name-specific catalyst layered on top of the same broad tape the other three are tracking.
- **XLE is again the lone red position** (-0.30%), still doing its job as an uncorrelated diversifier in an ordinary session — but see the biggest-risk section above for why that same independence is a liability, not a strength, if the diplomacy narrative this desk cannot verify turns out to be wrong.
- **OMCL remains the one true idiosyncratic outlier** (-30.11%, moving on its own 7/30 guide-down thesis) — the position keeping this book's realized correlation from being even higher.
- **New this run:** GEHC's Needham-driven +2.70% move is a genuine third idiosyncratic input (alongside OMCL's own thesis and XLE's oil-linkage) — worth noting since it's the first time in weeks a name other than OMCL has moved meaningfully on its own story rather than the broad tape.

## Sector concentration risk

| Sector/factor (look-through) | Approx. weight (% of equity) | Note |
|---|---|---|
| Tech / AI / semis (NVDA direct + est. tech slice of VTI/VXUS) | **~28.2% of equity** | Flagged for an 8th consecutive report; essentially unchanged this run |
| Energy (XLE) | ~12.2% | Sole hedge sleeve; decoupling risk described above |
| Healthcare (GEHC + OMCL) | ~13.3% | Split between a Needham-hyped name (GEHC) and a deep-drawdown name (OMCL) — both now moving on sentiment more than fundamentals |
| Broad market / diversified (residual VTI/VXUS, ex-tech-slice) | ~46.3% | Largest bucket; still USD/global-equity beta, not independent of the tech factor given index construction |

No structural change since 9/21. This desk's standing flag stands: BR's 10% NVDA pool-target cut addressed the headline number, not this look-through concentration, which lives mostly inside VTI/VXUS and cannot be trimmed by touching NVDA alone.

## Geographic exposure and currency risk

~69.7% of equity (VTI+NVDA+OMCL+GEHC) is USD/US-domiciled; ~30.3% (VXUS) is unhedged ex-US, direct FX exposure to a non-USD basket. No material change since 9/21. The two-sided framing from the last report still holds: a genuinely successful Thursday Trump-Xi summit would be a China/global-growth-positive surprise that could firm non-USD currencies against the dollar (helping VXUS's FX leg), but a disappointing outcome cuts the other way — and per the rate-shock pause below, a still-elevated 10yr keeps independently supporting the dollar regardless of the summit's outcome.

## Interest rate sensitivity per position

- **NVDA**: high — long-duration growth multiple; MS's DCF gap now -9.9% overvalued (widest yet, price-driven).
- **VTI**: high — mega-cap-tech-heavy index, same duration exposure as NVDA in aggregate.
- **VXUS**: moderate — lower average multiple than US, plus FX/rate-differential sensitivity.
- **OMCL**: high — small-cap, no earnings cushion at this drawdown level, disproportionately hurt by a higher cost of capital.
- **XLE**: low-moderate — driven primarily by oil price, not discount rate; MS's composite DCF just flipped to +2.1% undervalued, the first crossover on record (see biggest-risk section for why this desk treats that as fragile, not comforting).
- **GEHC**: moderate — established cash-flow generator, less rate-sensitive than growth names, but today's move is sentiment- (Needham PT), not rate-, driven.

**Live rate context, unresolved for a fourth week running:** fresh WebSearch this run again found the 10yr at **~4.96-4.97% as of 9/21's settled close** — still below 5%, still comfortably above rule 6a's 4.75% pause threshold (fired 9/2, still in effect). No settled close above 5% has ever been confirmed and held a full week from this environment's data access. This desk repeats its standing process critique: a risk desk operating for a month without a clean primary-source read on the single number gating every core-add decision is itself a process risk, not just a data nuisance — the pause's *status* isn't in doubt, but the team's ability to know precisely when it would lift is.

## Recession stress test — estimated drawdown

Unchanged methodology (equity-value shocks, no rebalancing assumed), re-run on today's 10:42 ET live weights:

- **Scenario A — garden-variety recession (broad equities -25%, energy -15%, healthcare -10%):** NVDA/VTI/VXUS/GEHC segment (~79.99% of equity, ~$35.55) down ~25% ≈ -$8.89; XLE (~12.16%, ~$5.40) down ~15% ≈ -$0.81; OMCL (~7.87%, ~$3.49) down ~10% from an already-depressed base ≈ -$0.35. **Total equity drawdown ≈ -$10.05 (-22.6% of equity, ~-19.9% of the $50.45 pool).**
- **Scenario B — supply-shock stagflation (oil spike, broad equities -15%, energy +20%):** NVDA/VTI/VXUS/GEHC down ~15% ≈ -$5.33; XLE up ~20% ≈ +$1.08; OMCL flat-to-down ~5% ≈ -$0.17. **Net equity impact ≈ -$4.43 (-10.0% of equity, ~-8.8% of pool)** — still works on paper, and remains the one scenario this book is actually structured to survive well.
- **Scenario C — Hormuz escalation → correlation-to-1 broad panic (XLE's hedge property inverts):** uniform -20% shock across all six positions. **Total equity drawdown ≈ -$8.89 (-20.0% of equity, ~-17.6% of pool).** This remains the scenario this book's all-equity, no-options structure was not designed to survive — and per the biggest-risk section, it is the scenario XLE is currently least prepared for, having spent this week getting cheaper rather than pricing in more protection.

Account-level (including the untouchable ~$50 reserve): all figures above roughly halve, since flat reserve cash dilutes any trading-pool loss across the full ~$100 account.

## Liquidity risk rating

| Position | Liquidity rating | Note |
|---|---|---|
| VTI, VXUS | 🟢 Very high | Deep, liquid ETFs, no concern at this position size |
| NVDA | 🟢 Very high | Mega-cap, no concern |
| XLE | 🟢 High | Liquid sector ETF |
| GEHC | 🟡 Moderate | Large-cap but lower average daily volume than the above; today's Needham-driven volume spike is a temporary improvement, not a structural change |
| OMCL | 🟡 Moderate | Small-cap, thin volume flagged repeatedly — not a forced-exit concern at this position size, but a real slippage risk if ever sized up materially, which is precisely the DCA gate's near-term risk (see below) |

No change since 9/18. All positions remain sub-$14; liquidity is not a binding constraint for a book this size.

## Single stock risk and position sizing recommendations

- **NVDA+OMCL combined concentration (20.61%) and NVDA alone (12.74%/11.22%) both remain clean** against their respective triggers — no forced review this run.
- **OMCL's -30.11% unrealized loss remains this book's largest standing single-name risk**, held without a mechanical stop-loss by design, still well past this desk's own informal ~-15% reference level from months ago. The DCA gate is now only ~$2.05 away — closer than this desk has ever logged it. **Repeating explicitly, in case it gets missed at the moment the gate actually fires: a mechanical pool-profit threshold clearing is not a thesis re-affirmation.** This desk wants to see a fresh, dedicated read (MS confirms the DCF discount still holds, no guide-down repeat risk into the 10/29 print, no new structural break) *at the run the gate fires*, not a reflexive first tranche the moment the number crosses $2.50.
- **GEHC sizing risk (new this run):** Needham's $93 price target is the highest published target on this name and sits well above MS's own from-the-ground-up $71.16 DCF base case — a sell-side multiple call, not new disclosed cash-flow or margin data. GEHC is already at/above BR's 4% target pool weight (4.80%) with no overweight case made by any desk. **This desk's explicit caution: a rich, fresh price target on a name already near fair value is a reason for more scrutiny before any add, not automatic comfort** — and if GEHC closes and holds above BR's $65 line, the review that triggers should weigh Needham's target on its own evidentiary merits (what did Needham actually model?), not just cite the number.
- **No position sizing changes recommended this run.**

## Tail risk scenarios with probability estimates

1. **Hormuz war re-escalates to a fresh, larger direct-strike event** (a new US strike wave, an attempt to fully seal the strait): oil spikes sharply, correlated multi-day equity selloff (Scenario C). Estimated probability over the next 30 days: **~15-20%, unchanged.** The PortWatch flow-collapse data (8 vs. 85 daily transits) is this desk's best evidence this remains a live, not resolved, risk — even though that specific reading is now 9 days old and unrefreshed.
2. **10yr settles decisively above 5% and holds for a full week**, extending rule 6a and compressing multiples across the book's highest-duration names (NVDA, VTI, OMCL). Estimated probability: **~25-30%, unchanged** — soft estimate given the persistent data-access gap.
3. **OMCL-specific structural thesis break** ahead of the ~10/29 print, compounded by the DCA gate now genuinely close to firing. Estimated probability of a break: **~10%, unchanged**; the conditional risk (a DCA buy lands right before or into a break) is more live than ever given the gate's proximity.
4. **Generalized correlation-to-1 liquidity panic** (any trigger, not just Hormuz) taking down all six holdings including XLE simultaneously. Estimated probability of a >10% week-over-week equity drawdown from this cause: **~20%, unchanged** — still the scenario this all-equity, no-options, thin-cash-reserve book is least equipped to survive.
5. **"Buy the rumor" reversal: Thursday's Trump-Xi summit or Hormuz diplomacy disappoints relative to the week's priced-in optimism**, and oil snaps back toward or above pre-selloff levels within days. Estimated probability of a disappointment-driven reversal by end of week: **~25-30%, unchanged from 9/21** — and now more relevant given XLE's DCF has *already* crossed into "undervalued" on the assumption this doesn't happen.
6. **NEW — GEHC gives back some or all of today's Needham-driven pop** if the market re-rates the stock to MS's $71.16 base case rather than Needham's $93 target, especially if it happens right as BR's $65 line would otherwise be tempting a review. Estimated probability of a >5% pullback within a week: **~30-35%** — single-analyst-initiation pops on names with an already-live valuation debate (this book's own MS memo is +6.8% undervalued, not +40%) have a mixed track record of holding.

## Hedging strategies to reduce the top 3 risks (equities-only toolbox)

1. **Against the Hormuz-escalation/hedge-decoupling risk (biggest risk):** unchanged in kind — there is no clean equities-only hedge for a genuine panic; XLE only reliably works in the "clean" stagflation scenario (B), not scenario C, and is currently pricing the *opposite* of the scenario it exists to protect against. **Cash remains the only real lever**, and at ~11.91% of pool sits barely above BR's 11% floor — this desk repeats its standing view that this is a line to defend, not a surplus, especially with the OMCL DCA gate now genuinely close to wanting a draw from the same pool.
2. **Against tech/AI look-through concentration (~28.2%):** no new position-level action recommended. Reiterating the standing point: when the OMCL DCA gate opens (~$2.05 away), that capital is earmarked for OMCL by design (rule 18), not a free deployment decision — this desk is not asking for a redirect, just naming that any *separate* future deployment should still lean away from NVDA/VTI/VXUS.
3. **Against the new GEHC sentiment-vs-fundamentals gap:** the cleanest equities-only response, if asked to act, would be to *not* let a same-day sell-side price target substitute for this book's own cross-vetting bar (rule 6) if GEHC closes above $65 and a review gets triggered. This isn't a trade recommendation — rule 4's no-same-minute-decisions discipline already covers today — just a risk-framing point ahead of a review this desk expects within the week.

## Rebalancing suggestions with allocation percentages

Current live weights vs. BR's 9/17-revised targets (all % of pool): NVDA 11.22% (target 10%, +1.22pp), VTI 27.73% (target 28%, -0.27pp), VXUS 26.70% (target 25%, +1.70pp), XLE 10.71% (target 12%, -1.29pp), OMCL 6.93% (target 10%, -3.07pp), GEHC 4.80% (target 4%, +0.80pp), Cash 11.91% (target 11%, +0.91pp).

- **No rebalancing trade recommended this run** — nothing breaches BR's 5pp mechanical drift trigger; OMCL's -3.07pp gap is the largest, and it is appropriately gated by rule 18 (DCA), not a discretionary rebalance signal.
- **XLE top-up trigger:** per BR's 9/21 resolution, funding is explicitly subordinated to the OMCL DCA gate. This desk agrees with that sequencing and is not re-opening it — the valuation leg clearing (now +2.1% undervalued) doesn't change the priority question, and per the biggest-risk section above, this desk would be cautious about treating today's crossover as a green light even if the funding question were open.
- **No rebalancing action recommended on GEHC or OMCL** beyond the existing mechanisms already governing both.

---

## Heat map summary

| Risk factor | Level | Trend vs. 9/21 ~14:41 ET |
|---|---|---|
| Hormuz/Iran geopolitical tail risk + hedge decoupling | 🔴 High | → unchanged in substance, newly framed as a hedge-pricing problem — the flow-collapse data is now 9 days stale and unrefreshed while XLE keeps getting cheaper |
| "Buy the rumor" reversal risk (Thursday summit / Hormuz diplomacy) | 🟡 Moderate | → unchanged, more relevant now that XLE's DCF has actually crossed into undervalued on this exact bet |
| Look-through tech/AI concentration | 🔴 High | → unchanged (8th+ report) |
| OMCL single-position drawdown + approaching DCA gate | 🟡 Moderate | ↓ slightly worse — gate now only ~$2.05 away, the closest reading on file |
| GEHC sentiment-vs-fundamentals gap (Needham $93 vs. MS $71.16) | 🟡 Moderate (new) | New this run — a rich price target already outrunning this book's own DCF |
| Interest rate / duration risk | 🟡 Moderate | → unchanged, data gap persists into a fourth week |
| Headline concentration triggers (NVDA%, NVDA+OMCL%) | 🟢 Low | → clean, unchanged |
| Liquidity | 🟢 Low | → unchanged |

---

Sources:
- [US 10 Year Treasury Note Yield - TradingEconomics](https://tradingeconomics.com/united-states/government-bond-yield)
- [US10Y: U.S. 10 Year Treasury - CNBC](https://www.cnbc.com/quotes/US10Y)
- [The Strait of Hormuz: Security Developments and Impacts on Oil, Gas, and Other Commodities - Congress.gov CRS](https://www.congress.gov/crs-product/R45281)
- [2026 Strait of Hormuz campaign - Wikipedia](https://en.wikipedia.org/wiki/2026_Strait_of_Hormuz_campaign)
- [Iran grants permission for some Iraqi oil tankers to pass through Hormuz - Al Jazeera](https://www.aljazeera.com/news/2026/8/22/iran-grants-permission-for-some-iraqi-oil-tankers-to-pass-through-hormuz)
- [GEHC Initiated Coverage by Needham -- Price Target Announced at $93.00 - GuruFocus](https://www.gurufocus.com/news/9091455/gehc-initiated-coverage-by-needham-price-target-announced-at-9300)
- [GEHC Looks 23.4% Undervalued on GF Value - GuruFocus](https://www.gurufocus.com/news/9091433/gehc-looks-234-undervalued-on-gf-value)
- [Omnicell, Inc. (OMCL) Latest Stock News & Headlines - Yahoo Finance](https://finance.yahoo.com/quote/OMCL/news/)
- Internal: trading-experiment/state.md (9/22 ~10:36/09:37 ET runs, freshest live snapshots), analysts/ms-dcf-valuation.md (9/22 ~10:1x ET), analysts/gs-stock-screener.md (9/22 ~09:5x ET), analysts/jpm-earnings-analyzer.md (9/22 ~09:14 ET), analysts/br-portfolio-builder.md (9/21 ~16:11 ET, still freshest as of this run)
