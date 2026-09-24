# BW Risk Assessment — Risk Management Report
**Date: 2026-09-24 (Thursday), ~14:41 ET (verified via `TZ=America/New_York date`).** Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time. Second BW report today; prior report 2026-09-24 ~10:41 ET.

---

## Overall Portfolio Risk Grade: **D-** (held flat vs. 10:41 ET)

## Single biggest risk right now
**The rate shock has now survived into Day 2 on a confirmed, multi-source settled basis — TradingEconomics has the 10yr "holding steady at 5.12%" through today's session, and it traded as high as 5.13% yesterday, the highest since 2007 — and it now sits directly alongside a live, unresolved binary catalyst (the Trump-Xi White House summit, happening today) that this book has no lever to pre-position for.** MS's WACC-rebuild clock (a full week held above 5% forces a coordinated fair-value cut across every rate-sensitive model this desk tracks — NVDA, OMCL, XLE, and now GEHC too) needs roughly through ~9/30 to complete; today is its furthest point of progress this quarter. Nothing has fired mechanically today either. The one genuine improvement since the 10:41 ET report: the pool's two-day round-trip has partially reversed (accumulated profit back to +0.13% from this morning's 10:41 low), and NVDA's day-over-day move has calmed to -0.64% rather than yesterday's sharper pullback. But the underlying convergence this desk flagged this morning — a rate threat at its most advanced stage yet, arriving while the book's cushion is thin — is unchanged in substance, just marginally less acute in the moment. Radical transparency: today is not a "risk resolved" day, it is a "risk still building, priced calmer" day, and those are not the same thing.

---

## Portfolio snapshot (live, 2026-09-24 ~14:41 ET)

`get_portfolio`: total_value **$100.0643** (cash $56.06 + equity $44.0043). Pool ≈ **$50.0643, a +$0.0643 (+0.13%) accumulated profit** — up from 10:41 ET's +0.08% and well off 9/22's +1.19% high, but no longer flirting with breakeven-to-negative the way this morning's early reads were. Deployable cash $6.06 (~12.11% of pool), ~1.11pp above BR's 11% reserve floor.

| Position | Qty | Last Price | Value | % Equity | % Pool | Unrealized | Day chg (vs 9/23 close) |
|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $224.075 | $5.563 | 12.64% | 11.11% | +11.26% | -0.64% |
| VTI | 0.036690 | $378.10 | $13.874 | 31.53% | 27.71% | +2.08% | -0.03% |
| VXUS | 0.154525 | $85.54 | $13.220 | 30.04% | 26.41% | +1.68% | -0.44% |
| OMCL | 0.106405 | $33.095 | $3.522 | 8.00% | 7.03% | **-29.59%** | +0.32% |
| XLE | 0.086775 | $62.62 | $5.434 | 12.35% | 10.85% | +8.68% | **+0.40%** |
| GEHC | 0.036393 | $65.77 | $2.394 | 5.44% | 4.78% | -4.25% | -0.48% |
| Cash (deployable) | — | — | $6.06 | — | 12.11% | — | — |

NVDA+OMCL combined **~20.64% of equity** — 25% concentration trigger clean, ~4.36pp buffer. NVDA alone **~12.64% equity / 11.11% pool** (18-20% trigger clean, ~1.11pp over BR's 10% pool target — narrow, essentially unchanged all day). **OMCL DCA gate (rule 18): pool needs ~$2.44 more accumulated profit to fire** — narrower than 10:41's ~$2.46, tracking the modest pool recovery.

---

## Correlation analysis between holdings

- **NVDA, VTI, VXUS, and (per MS's own framework) OMCL and now XLE and GEHC too are all WACC-sensitive** — every position on this book except pure cash is discounted at a rate that moves with the 10yr, so a genuine, sustained rate move doesn't diversify away; it compresses valuations across the whole book roughly in tandem, just by different magnitudes (NVDA's -7.2% overvaluation gap is far more rate-sensitive at the margin than GEHC's, but the direction is the same for all).
- **NVDA and OMCL remain the book's two most idiosyncratically-correlated names within tech/AI-adjacent risk** (rule 3's original framing) — today's modest divergence (NVDA -0.64%, OMCL +0.32%) is normal single-day noise, not decoupling; both still move together on any AI-sector-wide shock.
- **XLE's correlation to the rest of the book flips by regime, and today it flipped toward "moving with," not "against."** XLE was +0.40% today (best performer, as it has been on several recent down days), but MS's own fair-value read now sits essentially at parity with price (see below) — the diversification benefit is currently priced, not free.
- **GEHC continues to show the weakest correlation to the book's dominant rate/AI-sentiment axis**, a genuine and repeatedly-observed diversification benefit, though its own WACC-based valuation (per MS) means it is not immune to the same discount-rate risk in a true rebuild scenario — it decorrelates from *sentiment*, not from *rates*.
- **VTI and VXUS remain highly correlated to each other and to NVDA** in any genuine global risk-off (the 9/16 FOMC day, where five of six holdings were red together, is the clearest recent evidence) — international diversification via VXUS reduces single-country risk, not the book's dominant rate/AI-sentiment factor.

## Sector concentration risk with percentage breakdown

- **Tech/AI look-through concentration: ~27.9% of equity** (NVDA's direct 12.64% plus VTI/VXUS's embedded mega-cap tech weight) — unchanged, now a 13th+ consecutive report naming this as the book's largest standing structural concentration, still below any hard mechanical trigger.
- **Healthcare: ~13.4% of equity** (OMCL 8.00% + GEHC 5.44%) — the book's best-performing diversifier bucket on relative-strength terms lately, though OMCL alone carries the book's single largest unrealized loss.
- **Energy: ~12.35% of equity** (XLE) — the designated Hormuz/oil hedge, now trading at essentially fair value per MS rather than a discount.
- **Broad-market core (ex-look-through sector detail): VTI + VXUS = ~61.6% of equity**, the book's genuine diversification backbone.
- **Cash: 12.11% of pool**, above BR's 11% floor but not by much — the reserve exists specifically to fund the OMCL DCA gate and, subordinated to it, the XLE top-up trigger; it is not free capacity for a new idea.

## Geographic exposure and currency risk factors

- **VXUS (~30.04% of equity) carries the book's only direct non-US/non-USD-underlying exposure** — developed and emerging market equities, indirect currency risk via unhedged foreign-currency-denominated holdings inside the fund.
- **China-specific exposure is live and topical today, not hypothetical:** the Trump-Xi summit is happening today at the White House, with tariffs, Taiwan, and AI export policy all reportedly on the agenda alongside energy/Hormuz diplomacy — any tariff escalation or de-escalation coming out of this meeting has direct read-through to VXUS's EM/China sleeve and to NVDA's chip-export-policy risk, and neither this desk nor MS has a fresh post-summit read yet (the meeting is ongoing as of this report).
- **NVDA carries indirect geographic/geopolitical risk via chip-export policy and the still-open DOJ/Groq licensing probe** — a China-policy shock from today's summit could move this position independent of any US-domestic rate story.
- **XLE's exposure is functionally global-energy-price risk, not currency risk** — its US-domiciled holdings (XOM/CVX) are USD-denominated, but the underlying commodity is priced in a global market directly exposed to the Hormuz/Iran conflict.
- **VTI, OMCL, GEHC are overwhelmingly US-domestic-revenue and USD-denominated** — minimal direct currency risk, though GEHC does carry some international healthcare-system revenue exposure.

## Interest rate sensitivity for each position

- **OMCL — highest sensitivity.** MS's model carries the widest DCF gap on the book (~62.8% undervalued) precisely because it is the most duration-heavy of the four company-specific DCFs; a WACC rebuild would compress this discount the most in percentage terms of any name, even though the position wouldn't necessarily become overvalued.
- **NVDA — high sensitivity, already showing it live.** NVDA's overvaluation gap narrowed from -9.8% (9/23) to -7.2% (today's roll) purely as price fell toward MS's unchanged fair value during this week's rate-driven selloff — direct, observable rate transmission.
- **XLE — high sensitivity, now the most exposed to a flip.** MS's composite fair value (~$62.8) sits essentially on top of today's live price ($62.62) — a WACC rebuild pushing fair value down even modestly would flip this from ~fair-value to outright overvalued, removing the "still a genuine discount" argument entirely.
- **GEHC — moderate-high sensitivity, newly relevant.** MS's WACC 8.5% base case remains the lowest discount rate on the book, but GEHC is now explicitly named among the models a full-week rebuild would touch — its current +7.65% undervaluation gap is not immune.
- **VTI, VXUS — moderate, diversified sensitivity.** No single-company DCF applies, but both are broad equity baskets whose aggregate valuations compress in a genuine sustained-rate-shock regime, just with less name-specific magnitude than NVDA/OMCL.
- **Cash — zero sensitivity, and its relative value rises as a rate shock deepens** (the one position that doesn't need repricing).

## Recession stress test showing estimated drawdown

Scenario: a genuine demand-destruction recession (distinct from today's supply-shock/rate-shock regime) — broad equities down ~20-25%, and critically, **energy participates in the decline rather than acting as a hedge** (recession-driven demand destruction typically hits oil prices too, unlike the current Hormuz supply-shock dynamic propping up XLE).
- Equity sleeve (currently 87.9% of pool, all six holdings) at a uniform -20%: **≈-17.6% of pool value**.
- Realistic dispersion: NVDA/OMCL (highest-beta, highest-duration) likely fall further than the average (-25 to -30% plausible), VTI/VXUS closer to the -20% broad-market assumption, XLE potentially falling *more* than the broad market in a true demand-destruction scenario (a reversal of its current hedge behavior) rather than less, GEHC (defensive healthcare) likely the most resilient single name.
- **Blended estimated pool drawdown: -18% to -24%**, i.e. roughly **-$9.00 to -$12.00 of the ~$50 pool**, which would erase all accumulated profit to date several times over and cut meaningfully into the $50 base itself in the worse end of the range.
- **The all-equity, no-options, thin-cash-reserve structure of this book means there is no built-in ballast for this scenario** — deployable cash (~12% of pool) would cushion only a small fraction of a move this size, and the book's only equities-only "hedge" (XLE) is the one position most likely to stop hedging and start correlating in exactly this scenario.

## Liquidity risk rating for each holding

| Holding | Liquidity rating | Notes |
|---|---|---|
| VTI | 🟢 Very high | Mega-cap ETF, deepest liquidity on the book |
| VXUS | 🟢 Very high | Mega-cap international ETF |
| NVDA | 🟢 Very high | One of the most liquid single names on any US exchange |
| XLE | 🟢 High | Large sector ETF, ample daily volume |
| GEHC | 🟢 High | Large-cap, ample daily volume for this position's fractional size |
| OMCL | 🟡 Moderate | Small/mid-cap — thinner daily volume than the other five, but still exchange-listed with sufficient depth for this book's fractional-share sizing |

No liquidity risk is actionable at this book's scale — this rating exists to flag OMCL as the one name where a much larger position size would eventually need to consider execution impact, not as a present concern.

## Single stock risk and position sizing recommendations

- **NVDA+OMCL combined concentration (20.64%) and NVDA alone (12.64%/11.11%) both remain clean** against their respective triggers — no forced review this run.
- **OMCL's -29.59% unrealized loss remains this book's largest standing single-name risk**, held without a mechanical stop-loss by design. **The DCA gate sits ~$2.44 away.** Repeating explicitly, as this desk has for weeks: a mechanical pool-profit threshold clearing is not a thesis re-affirmation — this desk wants a fresh, dedicated read at the run the gate fires (MS confirms the DCF discount still holds, no guide-down repeat risk into the ~10/29 print, no new structural break), and now also wants MS's WACC-rebuild-clock outcome (~10/1) checked before any first tranche, since that rebuild would shrink OMCL's discount without touching the underlying thesis.
- **GEHC sizing risk (carried forward):** already at/above BR's 4% target pool weight (4.78%) with no overweight case made by any desk. Still trading intraday above BR's $65 upside-watch line ($65.77) — needs a close-and-hold, not yet fired.
- **XLE valuation risk:** essentially at fair value per MS's live model (gap has compressed to near-zero from 9/22's +2.1% undervaluation). No trim recommended — the hedge role stands regardless of valuation — but this book currently holds no meaningfully undervalued position outside OMCL and (thinly) GEHC.
- **No position sizing changes recommended this run.**

## Tail risk scenarios with probability estimates

1. **Hormuz war re-escalates to a fresh, larger direct-strike event.** Estimated probability over the next 30 days: **~15-18%, unchanged** — today's Trump-Xi summit is a genuine wildcard (could produce a diplomatic breakthrough or, if it disappoints, harden rhetoric further) but has not yet resolved either way.
2. **10yr settles decisively above 5% and holds for a full week**, triggering MS's coordinated rebuild across NVDA/OMCL/XLE/GEHC. Estimated probability: **~45-50%, nudged up further from this morning's ~40-45%** — today is confirmed Day 2 on a multi-source basis (TradingEconomics: "holding steady at 5.12%"), the furthest this cycle has progressed.
3. **OMCL-specific structural thesis break** ahead of the ~10/29 print, compounded by the DCA gate's proximity. Estimated probability: **~10%, unchanged.**
4. **Generalized correlation-to-1 liquidity panic** taking down all six holdings including XLE simultaneously (the recession stress-test scenario above). Estimated probability of a >10% week-over-week equity drawdown from this cause: **~20%, unchanged** — still the scenario this all-equity, no-options, thin-cash-reserve book is least equipped to survive.
5. **Trump-Xi summit disappoints relative to what's priced.** Estimated probability of a disappointment-driven reversal within the week: **~33-38%, unchanged** — the summit itself lands today, so this resolves one way or the other within 24-48 hours, sooner than the standing Hormuz-diplomacy version of this risk.
6. **GEHC gives back some or all of its post-Needham/close-above-$65 gain** toward MS's $70.8 base case. Estimated probability of a >5% pullback within a week: **~35-40%, unchanged.**

## Hedging strategies to reduce the top 3 risks (equities-only toolbox)

1. **Against the rate/WACC-rebuild risk (biggest risk):** no clean equities-only hedge exists for a broad discount-rate repricing — it hits every WACC-based holding simultaneously by construction. The two real levers remain (a) rule 6a's standing pause on new high-multiple core-ups, already in effect, and (b) not treating today's marginal calm as license to relax — the clock is *more* advanced today than at any point this quarter, not less concerning. **Repeating this desk's standing recommendation: have MS pre-stage the rebuild math (each fair value at WACC+50bp) before ~10/1** so the team isn't reacting in real time if the clock actually completes.
2. **Against tech/AI look-through concentration (~27.9%):** no new position-level action recommended. When the OMCL DCA gate opens (~$2.44 away), that capital is earmarked for OMCL by design (rule 18), not a free deployment decision — any separate future deployment should still lean away from NVDA/VTI/VXUS.
3. **Against the Hormuz-escalation/hedge-cushion risk:** XLE's price-hedge behavior continues to work day-to-day (best performer again today, +0.40%), but its valuation cushion is now essentially gone — this hedge is priced fully, not cheaply, at current levels. Cash remains the other lever, at ~12.11% of pool (~1.11pp above BR's 11% floor), though that buffer is not meaningfully larger than a week ago.

## Rebalancing suggestions with allocation percentages

Current live weights vs. BR's 9/17-revised targets (all % of pool): NVDA 11.11% (target 10%, +1.11pp), VTI 27.71% (target 28%, -0.29pp), VXUS 26.41% (target 25%, +1.41pp), XLE 10.85% (target 12%, -1.15pp), OMCL 7.03% (target 10%, -2.97pp), GEHC 4.78% (target 4%, +0.78pp), Cash 12.11% (target 11%, +1.11pp).

- **No rebalancing trade recommended this run** — nothing breaches BR's 5pp mechanical drift trigger; OMCL's -2.97pp gap is the largest, and it is appropriately gated by rule 18 (DCA), not a discretionary rebalance signal.
- **XLE top-up trigger:** funding remains subordinated to the OMCL DCA gate per BR's standing sequencing. With XLE's valuation leg back to essentially fair value, this desk reiterates its 10:41 ET view: the valuation leg should be treated as closed, not merely thin, pending BR/MS's own formal confirmation.
- **No rebalancing action recommended on GEHC or OMCL** beyond the existing mechanisms already governing both.

---

## Heat map summary

| Risk factor | Level | Trend vs. 10:41 ET |
|---|---|---|
| Rate/WACC-rebuild risk (10yr >5%, now Day 2 confirmed multi-source) | 🔴 High | ↑ **slightly worse** — probability estimate raised to ~45-50%, furthest progress this quarter |
| Hormuz/Iran binary tail risk | 🔴 High | → unchanged — Trump-Xi summit ongoing, unresolved as of report time |
| XLE hedge valuation (price-hedge working, cushion essentially gone) | 🟡 Moderate | → unchanged since flipping this morning |
| Look-through tech/AI concentration | 🔴 High | → unchanged (13th+ report) |
| Trump-Xi summit / China-VXUS-NVDA policy risk | 🟡 Moderate | ↑ **live now** — summit underway today, unresolved |
| Two-day profit round-trip | 🟢 Low-Moderate | ↓ **improved** — pool back to +0.13% from this morning's near-breakeven |
| OMCL single-position drawdown + DCA gate | 🟡 Moderate | → roughly flat |
| GEHC sentiment-vs-fundamentals gap | 🟡 Moderate | → unchanged, still intraday-only above $65 |
| Headline concentration triggers (NVDA%, NVDA+OMCL%) | 🟢 Low | → clean, unchanged |
| Liquidity | 🟢 Low | → unchanged |

---

Sources:
- [US 10 Year Treasury Note Yield - TradingEconomics](https://tradingeconomics.com/united-states/government-bond-yield)
- [10-Year Treasury Yield Hits 5.13%, a 2007 High: Dates to Watch - Vantage Markets](https://www.vantagemarkets.com/market-news/us-10-year-treasury-yield-2007-high-september-24-2026/)
- [Treasury Rates Today: September 23, 2026 - Forbes Advisor](https://www.forbes.com/advisor/investing/treasury-rates/)
- [Trump and Xi strike cordial tone at summit amid underlying tensions - NPR](https://www.npr.org/2026/09/24/g-s1-144806/trump-xi-summit)
- [The Trump-Xi summit runs through Fujairah - The National](https://www.thenationalnews.com/business/energy/2026/09/24/the-trump-xi-summit-runs-through-fujairah/)
- Internal: trading-experiment/state.md (9/24 ~14:37 ET, freshest live snapshot pre-report), analysts/ms-dcf-valuation.md (9/24 ~10:12 ET), analysts/gs-stock-screener.md (9/24 ~12:41 ET), analysts/jpm-earnings-analyzer.md (9/24 ~09:15 ET), analysts/br-portfolio-builder.md (9/23 ~16:13 ET)
