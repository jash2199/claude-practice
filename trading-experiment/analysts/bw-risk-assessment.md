# BW Risk Assessment — Latest Report
**Date: 2026-07-23 (Thursday, ~14:45 ET, second update today, first since ~10:43 ET)**

*Persona: risk analyst trained on Bridgewater/Ray Dalio radical-transparency principles for the "Claude Robinhood Trader" — $50 base + accumulated profits inside a ~$100 account. Ground truth this run: live `get_portfolio` + `get_equity_positions` (account 424593861) and live `get_equity_quotes` at ~14:42 ET, cross-checked against state.md's six run-notes entries logged today (09:37 through 14:36 ET) and today's teammate reports (JPM 09:15 ET, GS 12:45 ET, MS 10:11 ET — all same-day; BR still 7/22 ~16:12 ET, now over 24 hours stale).*

---

## Overall portfolio risk grade: **D** (downgrade from D+ at 10:43 ET)
## Single biggest risk right now: **The three risk factors this desk has been tracking separately all week — a Fed-hike repricing, a two-chokepoint oil shock, and an AI-capex valuation air pocket — all confirmed and fired at once today. The Magnificent Seven posted their worst single-day loss since April 2025 (-5.27%, -$767B), Tesla alone fell -14.1% (its worst day since June 2025) on negative free cash flow from AI-capex spending, Brent crossed $100/bbl for the first time since May, and July-meeting Fed-hike odds jumped from 10% to ~34% in a week (September now 78%) — a genuine, no-longer-ambiguous repricing, not the data artifact this desk flagged at 10:43 ET. This book's four holdings are all red together on this, with OMCL simultaneously sitting at a fresh -16.3% drawdown from cost, seven days before a compounding FOMC (7/29) → OMCL (7/30) window, and still zero equities-only hedge in place.**

I'm downgrading again, and I want to be precise about why this is a harder call than the 10:43 ET downgrade, not a repeat of it. This morning I flagged three separate, still-developing threats and the risk that the team would read "correct process, no trade" as "nothing changed." As of this afternoon, that's no longer a forward-looking concern — all three have converged and printed in the actual tape today, on the record, with named magnitudes. The FOMC-odds data-quality flag I raised this morning is resolved, and resolved unfavorably: this is a coherent, well-sourced, single-direction move (10%→34% in a week), not the noisy CME/Kalshi mismatch I described eight hours ago. Holding through the print window remains the correct call — nothing here is a fresh single-name catalyst on any of the four positions, and rules 1/2/4 of the OMCL contingency plan and the standing "no fresh catalyst, no trade" rule all still point to HOLD. But I'd be failing my own mandate if I let a clean process (six correct no-trade check-ins today) stand in for an honest read of the risk register, which got strictly worse on every axis today and better on none.

---

## Heat map summary

| Risk factor | Level | Trend vs. last read (10:43 ET) | Note |
|---|---|---|---|
| AI-capex valuation air pocket | 🔴 High | ⬆⬆ Confirmed, not a tail anymore | Mag 7 -5.27% (-$767B, worst since April 2025); Tesla -14.1% (worst since June 2025) on negative FCF from AI capex; Alphabet's raised ~$205B 2026 capex guide is the proximate trigger. NVDA/VTI both directly exposed via the same "is the spend paying off" question |
| Interest-rate event risk (FOMC 7/28-29) | 🔴 High | ⬆⬆ Resolved, unfavorably | This morning's data conflict (83% hold vs. 46% hike, two vintages disagreeing) is superseded by a coherent, better-sourced read: **~34% July hike odds, up from 10% a week ago; ~78% for September.** No longer treat this as ambiguous — treat it as elevated and rising |
| Geopolitical / oil-shock (Hormuz + Red Sea + CPC) | 🔴 High | ⬆ Confirmed through $100 | Brent confirmed **above $100/bbl intraday**, first time since May 26, on continued Saudi tanker strikes plus the Kazakhstan CPC pipeline halt — the milestone this morning's report flagged as imminent has now printed |
| OMCL binary earnings event (7/30) | 🔴 High | ⬆ Worse | $39.32, **-16.32% from the $46.99 avg cost** (was -15.5% at 10:43 ET) — a new post-entry low, 5th+ consecutive check-in below the contingency plan's $40 mandatory-re-read line, still with zero identified company-specific catalyst |
| Sector/tech look-through concentration | 🟠 Medium-High | ➡ Flat (~38-39%) | No new capital moved; today's broad decline is proportionate across the tech-exposed sleeve, not concentration-worsening in itself |
| Single-position concentration (VTI) | 🟠 Medium-High | ➡ Flat | Still ~36.1% of pool / ~50.5% of invested equity — now 4+ trading sessions past BR's "next dollar → VXUS" instruction with no time-box written |
| NVDA price-drift concentration | 🟢 Low-Medium | ➡ Flat | 14.77% of equity / 10.54% of pool — essentially unchanged from this morning's 14.75%/10.54%, comfortably below the 18-20% trigger |
| Recession/drawdown tail | 🔴 High | ⬆ Worse | Three independently-confirmed shocks (rates, oil, AI-capex) stacking in the same session, one week before a binary earnings print already at its deepest drawdown — the most classic multi-factor stress setup this book has seen |
| Liquidity risk | 🟢 Low | ➡ Flat | All four names/funds remain highly liquid at this position size |
| Cash drag / deployment discipline | 🟡 Medium | ➡ Flat | Cash still ~28.6% of pool vs. 10% target — a deliberate, cross-analyst-endorsed hold through 7/30, and today's tape is the clearest vindication yet of that patience |
| Currency/FX (via VXUS) | 🟡 Medium | ➡ Flat | Unhedged; VXUS actually fell in line with (not more than) the rest of the book today (-1.16%), so the feared risk-off-USD divergence still hasn't shown up in the data, even as the mechanism (three confirmed shocks) that would produce it strengthened |
| Hedging capacity (equities-only) | 🔴 High (structural) | ⬆ Worse — unaddressed for a full session | XLE was promoted by GS at 09:45 ET this morning specifically to close this gap; six trader check-ins and one full trading session later, it is still unsized (no MS DCF). The exact risk it would hedge (oil >$100) confirmed itself today while the fix sat on the desk |

---

## 1. Correlation analysis between holdings

Today's moves (live ~14:42 ET vs. Wednesday's official close): NVDA -1.97% ($207.89 vs. $212.06), VTI -1.36% ($363.87 vs. $368.87), VXUS -1.16% ($83.48 vs. $84.46), OMCL -3.77% ($39.32 vs. $40.86). All four down together for a full session now, not just an intraday snapshot — the broad risk-off regime flagged at 10:43 ET held and, if anything, deepened into the afternoon as the AI-capex/Fed/oil confirmations landed on top of each other.

Estimated pairwise correlations (qualitative): NVDA↔VTI high (+0.7-0.8, and today's Mag-7-led selloff is a direct read-through given VTI's ~42% tech weight); NVDA↔VXUS moderate (+0.4-0.5, semis-supply-chain channel); VTI↔VXUS moderate-high (+0.5-0.6); OMCL↔(NVDA/VTI/VXUS) normally low, effectively positive today under the shared macro shock. Worth stating plainly again: this book's diversification thesis (OMCL uncorrelated with chip/AI and oil risk; VXUS uncorrelated with US-only risk) is regime-dependent, and today is squarely the regime where it doesn't hold. A second consecutive session of all-four-red is no longer a one-day anomaly — it's two sessions running (10:43 ET report already flagged today's morning leg; this is the same day continuing, not a new one, but worth tracking whether tomorrow makes it a genuine pattern).

## 2. Sector concentration risk

Using invested-equity weights (equity_value $34.949; NVDA 14.77%, VTI 50.52%, VXUS 22.73%, OMCL 11.97%):

- **Technology (blended look-through): ~38-39%**, essentially flat — NVDA (100% tech) + VTI's ~42% tech sleeve + VXUS's semiconductor-supply-chain names (TSMC/Samsung/SK Hynix) remain one factor, and today's AI-capex-durability scare hit exactly this factor.
- **Healthcare (OMCL): ~11.97%** direct, in a single name now at its deepest drawdown since entry, 7 days from a binary print.
- **Energy: still exactly zero, direct or indirect.** This is now the sharpest miss in the book for a second straight report. Brent crossing $100 today is the live confirmation of the exact risk this book has never held, hedged, or sized a candidate for.

## 3. Geographic exposure and currency risk factors

- **US-domiciled/listed: NVDA, VTI, OMCL** — roughly 77% of equity value.
- **International ex-US: VXUS (~22.73% of equity)** — the only geographic diversifier, unhedged.
- **Currency risk**: three confirmed shocks today (oil >$100 via two chokepoints, a sharp Fed-hike repricing, and a global AI-capex-durability scare) are all classic risk-off-USD catalysts. VXUS moved in line with, not worse than, the rest of the book today (-1.16%), so the FX-translation channel still hasn't visibly diverged — but the number and strength of independent shocks feeding that mechanism went up materially today, not down.

## 4. Interest rate sensitivity per position

| Position | Sensitivity | Why |
|---|---|---|
| NVDA | High | Long-duration growth cash flows; MS's DCF gap (last read ~27-29% overvalued) is itself a rate-sensitivity readout, and today's Mag-7 rout is the market pricing exactly this risk in real time |
| OMCL | Moderate-high | Growth/mid-cap duration profile, compounding with a fresh post-entry low ahead of its own binary event |
| VTI | Moderate-high | Tracks broad-market average duration, tilted higher by its ~42% tech weight — directly exposed to today's Mag-7-led selloff |
| VXUS | Moderate, plus FX channel | Direct equity-duration exposure moderate; secondary exposure via USD strength if the Fed-hike repricing continues |

**Resolving this morning's data-quality flag, plainly**: at 10:43 ET this desk could not reconcile a ~83% hold-odds CME snapshot against a ~46% hike-odds figure carried in recent reports, and recommended treating the discrepancy as unresolved rather than picking a side. Fresh, better-sourced data this afternoon settles it, and not in the reassuring direction: **fed funds futures are pricing a ~34% chance of a July hike (up from ~10% a week ago) and ~78% for at least a quarter-point hike by September**, with the 10-year Treasury yield reported at its highest level since January 2025 on the same oil-driven inflation-fear channel. Treat the ambiguity flagged this morning as closed — the risk was real, not a stale-data artifact, and it's now the base case this book needs to plan around, not a tail scenario.

## 5. Recession stress test — estimated drawdown

Per-position severe-recession drawdown estimates (magnitudes unchanged from this morning; the trigger environment is now three-factor-confirmed rather than two-factor-and-developing):

| Position | Estimated drawdown | Basis |
|---|---|---|
| NVDA | -50% to -65% | Extreme cyclicality (semis + AI-capex reliance); today's Mag-7 rout is a live preview of the "AI spend doesn't pay off" scenario this range already assumes |
| OMCL | -35% to -50% | Hospital capex is cyclical/delayable in a downturn; already at its post-entry low with 7 days to a binary catalyst |
| VTI | -30% to -40% | Broad-market historical bear-market range, pushed toward the high end by the fund's tech tilt, which is exactly what sold off hardest today |
| VXUS | -25% to -35%, wider tail | A confirmed oil shock plus a hawkish Fed repricing is a scenario where VXUS's local-currency and FX legs both go the wrong way at once |

**Blended equity-sleeve estimate: ~35-40% drawdown, magnitude unchanged, probability weight now meaningfully higher than at 10:43 ET given three confirmed (not developing) shocks.** Applied to the full trading pool (equity $34.95 + deployable cash $14.00, ~71.4%/28.6% split), pool-level estimate remains **~25-29%** — the untouched $14 cash cushion is doing real work today and remains the single most valuable risk-reducer in the book, which is itself the strongest argument yet for not rushing it into VXUS before the FOMC/OMCL window passes.

## 6. Liquidity risk rating

| Position | Rating | Note |
|---|---|---|
| VTI | 🟢 Very Low | Deepest, most liquid US equity ETF in existence |
| VXUS | 🟢 Very Low | Highly liquid broad international ETF |
| NVDA | 🟢 Low | Mega-cap, extremely deep order book, unaffected by today's volatility |
| OMCL | 🟡 Low-Moderate | Smaller-cap, thinner average daily volume — the book's least liquid holding, and the one most likely to gap on the 7/30 print given today's fresh post-entry low |

No liquidity risk is currently binding at this account size.

## 7. Single stock risk and position sizing recommendations

**VTI concentration finding carries forward, now a full trading session further unaddressed**: still **~50.5% of invested equity / ~36.1% of the trading pool**, well over its own 25% sub-target. BR's "next dollar → VXUS" instruction (written 7/21) has now sat untested through four-plus sessions, and today is the clearest evidence yet of the cost of that overweight: VTI is this book's single largest position and its tech tilt is exactly what the market punished hardest today. I'm not asking the team to chase a trade into a selloff — I'm asking, again, for an explicit time-box on this rebalance, the same discipline that worked for OMCL, rather than letting a correct short-term deferral become an indefinite one.

**OMCL (11.97% of equity / 8.55% of pool)**: down **-16.32% from cost**, worse than any other position in the book by a wide margin, with zero identified company-specific catalyst — six separate trader check-ins today (09:37 through 14:36 ET) and this desk's own read all agree on that. Rules 1/2 of the contingency plan (decline alone isn't a sell signal; only a structural break triggers a trim) are the right call today, and I agree with holding. But I want the magnitude on the record in plain terms: this position has now given back more than its entire remaining margin of safety before a print JPM describes as having a tighter-than-usual beat bar. Rule 4 (no same-minute decisions when the print lands) is the mechanism that will matter most next week — this is the moment to reconfirm the team will actually use it rather than react in the moment to whatever the pre-market read looks like.

**NVDA (14.77% of equity / 10.54% of pool)**: unchanged and fine — the 18-20% review trigger remains comfortably distant and stable. No action, no urgency.

## 8. Tail risk scenarios with probability estimates

1. **OMCL 7/30 miss + guidance cut**: -18% to -25% single-day move, now starting from a -16.3% base rather than flat. Probability **~20-25%**, unchanged in probability but a materially worse starting point if it fires.
2. **Hawkish FOMC surprise (7/28-29)**: -3% to -8% broad pullback, hitting NVDA/OMCL hardest, landing one day before OMCL's own print. Probability **now resolved and elevated: ~34% for a July hike alone**, ~78% for September — no longer treat this as a wide, unresolved band; treat it as a real, rising base-case risk.
3. **Hormuz/Red Sea/Kazakhstan multi-chokepoint escalation**: Brent's confirmed break above $100 is itself the materialization of what was a tail scenario a week ago. Probability of **further** escalation (a third disruption, a formal OPEC+ response, a sustained print well above $100) in the next 30 days: **~20-25%**, roughly flat now that the $100 level itself has already printed rather than remaining hypothetical.
4. **AI-capex valuation air pocket**: this is the one that moved most today — **from a developing worry to a confirmed, market-wide event**: Mag 7 -5.27%/-$767B (worst since April 2025), Tesla -14.1% on negative FCF from AI capex, Nasdaq 100 on track for its worst day in a month. Direct read-through to NVDA and to VTI's ~42% tech sleeve. Probability of this extending into a multi-day, not one-day, derating: **~20-25%**, up from ~12-18% at 10:43 ET — today's magnitude (worst Mag-7 day in over a year) is large enough that "it's just one bad session" is no longer the safe base case.

## 9. Hedging strategies — top 3 risks, equities-only toolbox (no options)

1. **The confirmed oil shock, with a named candidate still sitting unsized a full session later.** GS promoted XLE to its top tier at 09:45 ET this morning specifically because this book has zero energy exposure against its now-confirmed-above-$100 single biggest live risk factor. This is the second consecutive report making this ask. My explicit ask to MS, repeated: build the XLE fair-value read (a diversified basket, not a single-name binary bet, so it clears the standing geopolitical-veto exemption the same way VTI/VXUS do) ahead of the 11+-day-overdue OXY DCF. If this is unsized again at the next report, I'd treat that as a process gap worth escalating to the trader directly, not just re-flagging quietly.
2. **The FOMC/OMCL compounding window (7/29-7/30)**: unchanged, reinforced by today's resolved rate data — no fresh capital into NVDA or OMCL through the window, and hold to OMCL contingency-plan rule 4 (no same-minute decision on the print itself) given the position's now-deeper starting drawdown.
3. **AI-capex/tech concentration (blended ~38-39%), the risk that fired hardest today**: future core dollars still go to VXUS per BR's 7/21 policy — see §7 for the time-box ask. There is no options-based hedge available under this mandate; the only real equities-only lever left is not adding to VTI/NVDA while this specific risk is actively repricing, which the book is already doing by default (no fresh catalyst, no trade). Worth being explicit that "doing nothing" here is the correct hedge given the toolbox constraint, not an absence of one.

## 10. Rebalancing suggestions with allocation percentages

Current vs. target (of the ~$48.95 trading pool):

| Sleeve/ticker | Target | Current | Gap |
|---|---|---|---|
| Core total | 55% ($26.92) | 52.30% ($25.60) | -$1.32 (essentially closed, unchanged) |
| — VTI | 25% ($12.24) | 36.07% ($17.66) | **+$5.42 over, now a full session further stale** |
| — VXUS | 15% ($7.34) | 16.23% ($7.95) | +$0.60 over (immaterial) |
| — 3rd core fund (SCHG/QQQM) | 15% ($7.34) | 0% ($0) | -$7.34 (correctly unopened) |
| Satellite total | 35% ($17.13) | 19.09% ($9.35) | -$7.79 |
| — NVDA | ~10-12% (~$5.39-5.87) | 10.54% ($5.16) | essentially on target |
| — OMCL | ~10-12% (~$5.39-5.87) | 8.55% ($4.18) | below sub-target on continued price decline, not a sizing call |
| — 3rd satellite (XLE candidate) | ~10% ($4.90) | 0% ($0) | -$4.90, still awaiting MS cross-vet, now overdue by a full session |
| Cash | 10% ($4.90) | 28.60% ($14.00) | +$9.10 over, unchanged |

**Recommendation**: no forced trade to unwind VTI's overshoot — still not worth the discipline cost mid-selloff. No trim on OMCL — rules 1/2 territory, addressed above. **Hold the $14 deployable cash through 7/30** — today's triple-confirmation (rates, oil, AI-capex) is the clearest evidence yet that this timing call was correct, not a reason to reconsider it. The unresolved item is still the same one: write an explicit time-box for the VTI→VXUS rebalance and for the XLE hedge decision, the same falsifiable-trigger discipline that worked for OMCL, rather than let two separate "wait for 7/30" deferrals become indefinite once 7/30 passes.

---

## Cross-check with other analysts

- **JPM (7/23, 09:15 ET)**: OMCL Q2 consensus cleanly sourced (EPS $0.48/rev $309.6M, top of guide) — a tighter setup than Q1, confirms no structural thesis-break catalyst. No update since; nothing to reconcile.
- **GS (7/23, 12:45 ET)**: confirmed OMCL's $40 breach independently and flagged the Kazakhstan CPC pipeline halt as a second chokepoint stacking on Hormuz/Red Sea, pushing Brent above $100 intraday for the first time since May 26 — this desk's own live read is fully consistent. XLE remains GS's #2 idea and still unsized; renewing the ask below.
- **MS (7/23, 10:11 ET)**: NVDA DCF gap last read ~27-29% overvalued; OMCL discount widened further on pure price drift (mechanical, not new information) — both agreed with here. XLE still outside this cycle's mandate (current holdings + GS's #1 only) — the same gap this desk has now flagged twice today.
- **BR (7/22, ~16:12 ET, now over 24 hours stale)**: no fresh cycle since yesterday afternoon. This desk's live VTI/VXUS/cash figures remain consistent with BR's policy framework. Renewing the ask from both today's earlier report and yesterday's: the "next dollar → VXUS" instruction needs an explicit time-box, and BR is now the only desk that hasn't posted same-day.
- **For MS specifically**: second consecutive ask — size XLE ahead of the 11+-day-overdue OXY DCF. Today's confirmed break above $100 makes this the single most actionable, and now overdue, item in this report.
- **For the trader specifically**: six correct no-trade check-ins today is good discipline, not complacency — but today is the day to write down, in plain language, that the risk regime this book is holding through (Fed, oil, AI-capex, all three now confirmed) is materially worse than the one the OMCL contingency plan was originally written against on 7/21. Worth an explicit line in tomorrow's weekly summary/distillation, not just a mention in a mid-day check-in.

---

Sources:
- [US Stock Futures Fall as Alphabet, Tesla Lead Tech Losses, Oil Nears $100 (Bloomberg)](https://www.bloomberg.com/news/articles/2026-07-23/us-stock-futures-drop-as-traders-focus-on-ai-spending-oil-jumps)
- [Tesla's Worst Day In A Year Cuts Elon Musk's Net Worth By $18 Billion (Forbes)](https://www.forbes.com/sites/tylerroush/2026/07/23/teslas-worst-day-in-a-year-cuts-elon-musks-net-worth-by-18-billion/)
- [TSLA, GOOGL Stocks Lead 'Magnificent Seven' Rout – MAGS ETF On Track For Biggest Single-Day Loss This Year (Stocktwits)](https://stocktwits.com/news-articles/markets/equity/tsla-googl-stocks-lead-mag-7-biggest-single-day-loss-this-year/cZZnvDSR7UW)
- [Tesla Inc Stock (TSLA) Moved Down by 12.68% on Jul 23: Facts Behind the Movement (TradingKey)](https://www.tradingkey.com/news/market-movers/262050242-market-movers-tsla-20260723)
- [Google, Tesla Post-Earnings Slump Sends Nasdaq Down 2% (TradingKey)](https://www.tradingkey.com/analysis/stocks/us-stocks/262050309-memory-chips-surge-google-tesla-capex-record-big-tech-selloff-sk-hynix-micron-tradingkey)
- [A July rate hike from the Fed? The odds are rising (CNBC)](https://www.cnbc.com/2026/07/13/-a-july-rate-hike-from-the-fed-the-odds-are-rising.html)
- [10-year Treasury yield rises to highest since January 2025 as surging oil rekindles inflation fear (CNBC)](https://www.cnbc.com/2026/07/23/treasury-yields-oil-prices-jobless-claims.html)
- [Stock market today: Dow, S&P 500, Nasdaq sell off as rising oil prices, bond yields, and AI capex weigh (Yahoo Finance)](https://finance.yahoo.com/markets/live/stock-market-today-thursday-july-23-dow-sp-500-nasdaq-oil-bonds-earnings-084444369.html)
- [Oil prices: WTI, Brent rise as Trump threatens more strikes on Iran (CNBC)](https://www.cnbc.com/amp/2026/07/23/oil-prices-today-wti-brent-trump-iran-hormuz.html)
- [Oil surges past $95 as U.S. downplays Iran diplomacy and 2nd key trade route is disrupted (NBC News)](https://www.nbcnews.com/business/business-news/oil-prices-brent-gas-iran-war-trump-hormuz-red-sea-houthis-rcna588671)
- [Omnicell to Report Q2 Earnings: OmniSphere in Focus (Yahoo Finance)](https://finance.yahoo.com/healthcare/articles/omnicell-report-q2-earnings-omnisphere-153100649.html)
