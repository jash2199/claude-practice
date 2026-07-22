# BW Risk Assessment — Latest Report
**Date: 2026-07-22 (Wednesday, ~14:45 ET, second read of the day — first update since this morning's 10:41 ET report)**

*Persona: risk analyst trained on Bridgewater/Ray Dalio radical-transparency principles for the "Claude Robinhood Trader" — $50 base + accumulated profits inside a ~$100 account. Ground truth this run: live `get_portfolio` + `get_equity_positions` (account 424593861) and live `get_equity_quotes` at ~14:40 ET, cross-checked against state.md and today's teammate reports (GS ~16:45 ET post-close wrap, MS ~14:00 ET, JPM ~09:15 ET — BR's last report is still 7/21, one-plus day stale, no fresh cycle today).*

---

## Overall portfolio risk grade: **C-** (held flat vs. 10:41 ET — not an improvement, see below)
## Single biggest risk right now: **The Hormuz shock just moved from "market pricing a crisis" to "a confirmed U.S. policy action anchoring one" — Trump has reinstated the blockade of Iranian ports and imposed a 20% toll on all cargo transiting the strait — while OMCL, though it bounced off this morning's $40.89 low to $41.215, still has only ~3% cushion above its own $40 mandatory-revisit line with 8 days to its binary print.**

Two things moved in opposite directions since this morning's report, netting out to no real change in the grade. **Improvement**: OMCL clawed back from $40.89 (10:41 ET, 2.2% above the $40 line) to $41.215 now — the contingency plan's trigger did not fire, and per GS's post-close read the stock never traded at or below $40 all session. **Deterioration**: this desk's fresh WebSearch this cycle found something none of today's other four reports has yet — Trump has **reinstated the U.S. blockade of Iranian ports near the Strait of Hormuz and imposed a 20% toll on all cargo transiting the passageway**. This is materially different from what this morning's report was pricing (an oil-price spike driven by strikes and Houthi threats). A market-priced risk premium can fade the moment strikes pause; a standing blockade-plus-toll is an administrative fact that persists until someone actively reverses it. Brent is holding at ~$94-95.47/bbl (confirmed again this afternoon, not retreating), and this new policy detail is the more durable explanation for why. The grade stays at C- rather than moving to C (an improvement) because the underlying risk regime got structurally worse even as the day's most acute single-name flashpoint (OMCL) bought itself some room.

---

## Heat map summary

| Risk factor | Level | Trend vs. last read (10:41 ET) | Note |
|---|---|---|---|
| Geopolitical / Hormuz-oil shock | 🔴 High | ⬆ Worsening (structurally) | **New this cycle**: blockade + 20% cargo toll formally reinstated — a durable policy fact, not just a price spike; Brent holding ~$94-95.47 |
| Interest-rate event risk (FOMC 7/28-29) | 🔴 High | ➡ Flat, elevated | CME FedWatch ~46.5% hike odds, Kalshi ~36% (up from <20% Sunday) — both roughly unchanged from this morning; one conflicting search result claiming 16.6% hike/83.4% hold looks like a stale snapshot, see §4 |
| OMCL binary earnings event (7/30) | 🔴 High | ⬇ Slightly improving | Bounced off this morning's $40.89 low to $41.215 (~3% above the $40 line); still 8 days to a genuinely two-sided print |
| Sector/tech look-through concentration | 🟠 Medium-High | ➡ Slightly up (~39%) | NVDA's rally today (+3.07%) mechanically nudges blended tech weight up, not a new position |
| Single-position concentration (VTI) | 🟠 Medium-High | ➡ Flat | Still ~50.3% of invested equity, unchanged since no core capital has moved since 7/21 |
| NVDA price-appreciation drift | 🟡 Medium, rising | ⬆ New flag this cycle | Up to 14.88% of equity / 10.68% of pool purely on a 3%+ rally — see §7, a pre-committed rule is worth setting now |
| Recession/drawdown tail | 🟠 Medium-High | ➡ Slightly worse | A durable policy-driven oil shock plus a still-coin-flip-adjacent Fed decision is a more classic recession setup than sentiment-driven volatility |
| Liquidity risk | 🟢 Low | ➡ Flat | All four names/funds highly liquid at this position size |
| Cash drag / deployment discipline | 🟡 Medium | ➡ Flat | Cash still ~28.2% of pool vs. 10% target |
| Currency/FX (via VXUS) | 🟡 Medium | ➡ Flat, mechanism now more live | Unhedged; a durable trade-friction toll raises the odds this channel eventually shows up in VXUS, not just NVDA/OMCL |
| Hedging capacity (equities-only) | 🔴 High (structural) | ⬆ Worse | No options tool; OXY-as-hedge still stuck unvetted, now 10+ days overdue while the commodity shock it would hedge just got more durable |

---

## 1. Correlation analysis between holdings

Today's moves: NVDA +3.07% ($213.64 vs. $207.29 prior close), VTI -0.04% ($369.285 vs. $369.45), VXUS +0.02% ($84.47 vs. $84.45), OMCL -1.47% ($41.215 vs. $41.83, but up from this morning's $40.89 intraday low). The standout is NVDA's decoupling *from its own usual correlation partners* — GS's post-close read has the broader tape down (Dow -0.1%, S&P -0.3%, Nasdaq -0.6%) on a day NVDA rallied 3%+ on company-specific news ($700M US plant, ~$60B server-order commentary, Rubin-design chatter). This is a live example of why the standing NVDA↔VTI correlation estimate (+0.7-0.8) is a base rate, not a guarantee — idiosyncratic company catalysts can and do override the shared-beta relationship on any given day. OMCL remains the structural outlier as always: uncorrelated with the other three on a rolling basis, but today's bounce off the morning low was itself uncorrelated with anything — no structural catalyst found, consistent with every prior cycle's search.

Estimated pairwise correlations (qualitative, unchanged): NVDA↔VTI high (+0.7-0.8) on average, though today is a reminder this can decouple on stock-specific days; NVDA↔VXUS moderate (+0.4-0.5, via semis); VTI↔VXUS moderate-high (+0.5-0.6); OMCL↔(NVDA/VTI/VXUS) low to slightly negative.

## 2. Sector concentration risk

Using invested-equity weights (equity_value ~$35.65; NVDA 14.88%, VTI 50.27%, VXUS 22.55%, OMCL 12.30%):

- **Technology (blended look-through): ~39%**, up marginally from ~38.7% purely because NVDA's price appreciated — no new capital moved into tech. NVDA (100% tech) + VTI's ~42% tech sleeve + VXUS's semiconductor-supply-chain names (TSMC/Samsung/SK Hynix) all still stack into the same factor.
- **Healthcare (OMCL): ~12.3%** direct, concentrated in a single name still 8 days from a genuinely two-sided print.
- **Energy: still effectively zero direct exposure.** This is the sharpest miss in the book right now given today's finding — a confirmed government policy action (the blockade/toll) is now actively repricing the single commodity most responsible for the book's current macro risk, and this book has no position, direct or hedged, that benefits from or offsets that move in either direction.

Unchanged verdict, now sharper: this is a two-sector book (tech + healthcare) with zero exposure to the sector (energy) whose policy backdrop just became more durable, not less.

## 3. Geographic exposure and currency risk factors

- **US-domiciled/listed: NVDA, VTI, OMCL** — the large majority of the book.
- **International ex-US: VXUS (~22.55% of equity)** — the only geographic diversifier, unhedged.
- **Currency risk — the mechanism this desk has warned about for two weeks is now anchored to something durable, not just a spike.** A 20% toll on Hormuz cargo is a persistent trade-friction cost that raises global input prices and typically supports a risk-off dollar bid — exactly the setup where VXUS's local-market losses and FX-translation losses compound simultaneously. VXUS hasn't shown it yet (+0.02% today), but the underlying policy driver is now more likely to persist for weeks, not days, which matters for how long this channel stays live.
- No direct commodity or emerging-market-currency exposure beyond VXUS's index construction.

## 4. Interest rate sensitivity per position

| Position | Sensitivity | Why |
|---|---|---|
| NVDA | High | Long-duration growth cash flows; MS's DCF gap (~27.1% "overvalued," essentially flat today despite the rally, since MS's read was from 09:36 ET before the rally) is itself a rate-sensitivity readout |
| OMCL | Moderate-high | Growth-tech-like duration profile, partially offset by net cash (~$71M) |
| VTI | Moderate | Tracks broad-market average duration, tilted slightly higher by its ~42% tech weight |
| VXUS | Moderate, plus FX channel | Direct equity-duration exposure moderate; secondary exposure via USD strength if US rates move |

**Data-quality flag worth naming plainly**: this cycle's WebSearch pull returned genuinely conflicting FOMC odds. CME FedWatch and Kalshi both show hike odds still meaningfully elevated — **CME ~46.5%, Kalshi ~36% (up from under 20% as recently as Sunday and under 10% earlier this month)** — consistent with, and not walked back from, this morning's read. But a separate search result claimed "83.4% probability of a hold (16.6% hike) as of July 21," which reads like a stale cached snapshot rather than a fresh figure — it doesn't square with Brent holding near its highs or with two independent live-odds sources agreeing on a much higher hike probability. Treating the 46.5%/36% figures as the operative ones, per the same "don't trust an internally-inconsistent search result" discipline this book has applied to OMCL pricing for weeks. **Bottom line: a near-coin-flip-adjacent Fed decision landing one day before OMCL's own binary print remains live and essentially unchanged in severity since this morning — this has not de-escalated.**

## 5. Recession stress test — estimated drawdown

Per-position severe-recession drawdown estimates (peak-to-trough, unchanged basis, but the *trigger* environment is now more durable than a pure sentiment spike would be):

| Position | Estimated drawdown | Basis |
|---|---|---|
| NVDA | -50% to -65% | Extreme cyclicality (semis + AI-capex reliance) compounded by an ~27% valuation stretch that widened again on today's rally |
| OMCL | -35% to -50% | Hospital capex is cyclical/delayable in a downturn; small-cap liquidity premium widens in stress |
| VTI | -30% to -40% | Broad-market historical bear-market range, pushed toward the high end by the fund's tech tilt |
| VXUS | -25% to -35%, wider tail | An oil-shock-driven global slowdown plus USD strength is a scenario where VXUS's local-currency and FX legs both go the wrong way at once — more plausible now that the shock has a policy anchor |

**Blended equity-sleeve estimate: ~35-40% drawdown, unchanged in magnitude, still elevated-probability-weighted.** Applied to the full trading pool (equity $35.65 + deployable cash $14.00, ~71.8%/28.2% split), pool-level estimate remains **~25-29% drawdown** — the cash cushion still dilutes the tail. Repeating last cycle's behavioral flag: a durable, policy-anchored shock is exactly the kind of environment where dry powder tends to get deployed on the first leg down rather than held for an actual bottom.

## 6. Liquidity risk rating

| Position | Rating | Note |
|---|---|---|
| VTI | 🟢 Very Low | Deepest, most liquid US equity ETF in existence |
| VXUS | 🟢 Very Low | Highly liquid broad international ETF |
| NVDA | 🟢 Low | Mega-cap, extremely deep order book |
| OMCL | 🟡 Low-Moderate | Smaller-cap, thinner average daily volume — still the book's least liquid holding; some of this morning's gap risk eased as price moved back to ~3% above the $40 line, but it remains the position most likely to gap on a surprise print |

No liquidity risk is currently binding at this account size.

## 7. Single stock risk and position sizing recommendations

**VTI concentration finding carries forward unchanged**: still **~50.3% of invested equity / ~36.1% of the trading pool**, more than 11 points over its own 25% sub-target. No new capital has moved since 7/21, so this is drift-by-inaction, not a fresh decision — but it's been over a day now with BR's "next dollar → VXUS" instruction untested by an actual dollar.

**New this cycle — NVDA's face-value weight is drifting upward purely on price appreciation, and this book should name that risk before it becomes a problem rather than after.** NVDA moved from 14.55%/10.4% (equity/pool) at 10:41 ET to 14.88%/10.68% now, entirely on today's 3%+ rally — no purchase involved. It's still comfortably under BR's tightened 15% satellite soft cap, but the mechanism matters: **a name can organically breach a concentration cap through pure price action, with the DCF gap simultaneously widening (MS has NVDA ~27.1% overvalued and rising), and nobody ever makes an active decision about it.** This is the exact blind spot the OMCL contingency plan was built to avoid for a different position. Recommendation: **set a pre-committed rule now, the same way this book did for OMCL** — e.g., if NVDA's equity weight crosses ~18-20% (a level it could reach on a couple more days like today without a single trade), that triggers a mandatory review of trimming the position, regardless of how good the AI-capex thesis still looks in the moment. Writing this now, while NVDA is still comfortably under any cap, is exactly the "no same-minute decisions" discipline this book has already proven works.

**OMCL (12.30% of equity / 8.83% of pool)** remains below its own 10-12% satellite sub-target, purely on price decline, not a sizing decision — no add recommended before 7/30, consistent with every desk.

## 8. Tail risk scenarios with probability estimates

1. **OMCL 7/30 miss + guidance cut**: -18% to -25% single-day move on the position. Probability **~20-25%**, unchanged.
2. **Hawkish FOMC surprise (7/28-29)**: -3% to -8% broad pullback, hitting NVDA/OMCL hardest as long-duration names, landing one day before OMCL's own print. Probability **~36-46%** per CME/Kalshi — essentially flat vs. this morning, still far above a normal tail-risk weighting, and now backed by a more durable underlying driver (the reinstated toll/blockade) than a pure sentiment spike would be.
3. **Hormuz/Iran escalation to a full shipping closure or direct Gulf-state disruption**: reframed again this cycle — the blockade-plus-toll is no longer "risk of escalation," it's a materialized one. Probability of **further** escalation (a direct Gulf-state hit, an actual shipping closure beyond the toll) in the next 30 days: **~15-20%**, roughly flat to slightly up, since the policy trend line keeps moving in the same direction rather than stabilizing. 18 US service members have now been killed since the war's start per today's search — a grim, concrete marker that this is not de-escalating.
4. **AI-capex valuation air pocket**: -15% to -30% on NVDA, -5% to -10% drag on VTI. Probability **~10-15%**, unchanged — today's NVDA rally was driven by real capex-supportive news (plant investment, order commentary), a mild countervailing data point against an *imminent* air pocket, but it does nothing to close the ~27% DCF valuation gap, which if anything widened.

## 9. Hedging strategies — top 3 risks, equities-only toolbox (no options)

1. **The FOMC/OMCL compounding 48-hour window (7/29-7/30), now anchored by a durable policy shock rather than pure sentiment.** Same recommendation as this morning, reinforced: no fresh capital into NVDA or OMCL through the window, and the "no same-minute decisions" rule (state.md) should explicitly cover a FOMC surprise too, not just the OMCL print.
2. **Tech/AI concentration (blended ~39%, now including NVDA's organic upward drift)**: future core dollars still go to VXUS per BR's 7/21 policy. **New**: also set the NVDA pre-committed review-trigger described in §7 — this is the closest thing to a hedge this book can build against a concentration risk that grows without any trade being placed.
3. **Hormuz/geopolitical shock, now with a formal toll/blockade behind it rather than just strikes and rhetoric.** OXY remains the one candidate that would function as a genuine equities-only commodity hedge, and MS's DCF for it is now **10+ consecutive days overdue**. The cost of not having this built keeps compounding — a durable 20% cargo toll is a more persistent argument for wanting an energy hedge on the board than a temporary spike would have been.

## 10. Rebalancing suggestions with allocation percentages

Current vs. target (of the ~$49.65 trading pool):

| Sleeve/ticker | Target | Current | Gap |
|---|---|---|---|
| Core total | 55% ($27.31) | 52.3% ($25.96) | -$1.35 (essentially closed, unchanged) |
| — VTI | 25% ($12.41) | 36.1% ($17.92) | **+$5.51 over, unchanged** |
| — VXUS | 15% ($7.45) | 16.2% ($8.04) | +$0.59 over (immaterial) |
| — 3rd core fund (SCHG/QQQM) | 15% ($7.45) | 0% ($0) | -$7.45 (still correctly unopened) |
| Satellite total | 35% ($17.38) | 19.5% ($9.69) | -$7.69 |
| — NVDA | ~10-12% (~$5.46) | 10.68% ($5.30) | essentially on target, drifting up on price alone (see §7) |
| — OMCL | ~10-12% (~$5.46) | 8.83% ($4.39) | below its own sub-target, on price decline, not a sizing call |
| — 3rd satellite (TBD) | ~10% ($4.97) | 0% ($0) | -$4.97, no candidate cleared |
| Cash | 10% ($4.97) | 28.2% ($14.00) | +$9.03 over, unchanged |

**Recommendation, unchanged from 10:41 ET, now on firmer footing**: no forced trade to unwind VTI's overshoot — not worth the discipline cost at this scale. No trim on OMCL despite sitting below its own sub-target — that's rule 1 territory (price drift isn't a miss). **Hold the $14 deployable cash in reserve through 7/30 rather than deploying to VXUS now** — today's finding (a durable, policy-anchored Hormuz shock, not a fading spike) is a stronger reason than this morning's to keep full optionality through the FOMC/OMCL compounding window rather than close a core-sleeve gap a few days early.

---

## Cross-check with other analysts

- **GS (7/22, ~16:45 ET post-close)**: confirms OMCL never traded at or below $40 all session, closing near $41.07 — corroborates this desk's own live read ($41.215) that the morning's near-miss did not fire the contingency plan. GS also flags SOXX's worst month since 2008 (-18.6% in July) as the sector backdrop for chip names — worth noting NVDA rallied 3%+ today *against* that backdrop on company-specific news, reinforcing this desk's rule-2 caution (a rally already explained by news isn't a reason to chase, and it's exactly the kind of idiosyncratic move that can reverse once the news is fully priced in).
- **JPM (7/22, ~09:15 ET)**: flagged the OMCL pricing discrepancy ($46.89 search-sourced vs. $41.915 trader-verified) as the cycle's key action item — this desk's live read resolves it further: price has moved from that $41.915 close through a $40.89 morning low back up to $41.215, all consistent with the trader-verified figure being correct throughout and the search-sourced $46.89 being another stale artifact, now flagged for a seventh-plus consecutive cycle.
- **MS (7/22, ~14:00 ET)**: NVDA DCF gap ~27.1% overvalued, OMCL discount ~34.0% undervalued, both essentially flat vs. yesterday — but MS's read predates today's NVDA rally (their price was $206.50 from the ~09:36 ET check-in vs. $213.64 now), so the actual overvaluation gap as of this afternoon is almost certainly wider than MS's own table shows. Flagging for MS: worth a same-day refresh given the ~3.5% move since your quote was taken.
- **BR (7/21, now more than a day stale)**: no fresh cycle today to cross-check against. This desk's live VTI/VXUS/cash figures are consistent with BR's 7/21 policy framework (VTI overweight, VXUS the next-dollar target) — nothing has changed on the ground to require BR revisiting its stance, but the deployment-timing amendment this desk proposed (hold cash through 7/30) is a live disagreement with BR's standing "next dollar → VXUS" instruction that BR hasn't yet had a chance to respond to.
- **For MS specifically**: renewing the OXY DCF escalation, now 10+ days overdue, with a sharper basis this cycle — the Hormuz shock this desk is hedging against just became a confirmed policy action (blockade + 20% toll) rather than a market-priced spike, which raises the value of having a working equities-only commodity hedge on the board, not just the underlying valuation exercise.
- **For the trader specifically (new finding, not yet in any other report today)**: the reinstated Hormuz blockade and 20% cargo toll is fresh information as of this cycle — recommend flagging it explicitly in the next weekly summary to Jash, since it changes the *character* of the macro risk this book has been tracking (from "will the market keep pricing in a crisis" to "a specific administrative action is now setting the floor under oil and the ceiling under a rate hold").

---

Sources:
- [Current price of oil as of July 22, 2026 (Fortune)](https://fortune.com/article/price-of-oil-07-22-2026/)
- [Brent Crude Oil Futures Price Today (Investing.com)](https://www.investing.com/commodities/brent-oil)
- [A July rate hike from the Fed? The odds are rising (CNBC)](https://www.cnbc.com/2026/07/13/-a-july-rate-hike-from-the-fed-the-odds-are-rising.html)
- [Fed Decision in July? Trading Odds & Predictions 2026 (Polymarket)](https://polymarket.com/event/fed-decision-in-july-181)
- [Fed Rate Probability 2026 | FOMC Meeting Odds & Interest Rate Forecast (centralbank.watch)](https://centralbank.watch/federal-reserve/)
- [Anticipating July Fed Meeting: All Set for a Rate Hike (Investing.com)](https://investing.com/analysis/anticipating-july-fed-meeting-all-set-for-a-rate-hike-200640297)
- [Iran's Houthi Allies May Blockade a Vital Global Chokepoint (Bloomberg)](https://www.bloomberg.com/opinion/articles/2026-07-22/iran-s-houthi-allies-may-blockade-a-vital-global-chokepoint)
- [Iran-Backed Houthis Now Ready to Attack Ships, Naval Group Says (Bloomberg)](https://www.bloomberg.com/news/articles/2026-07-22/iran-backed-houthis-now-ready-attack-ships-naval-group)
- [Iran War Updates: Trump threatens to bomb a bridge or power plant for every ship attacked in Strait of Hormuz (CBS News)](https://www.cbsnews.com/live-updates/iran-war-us-trump-strait-hormuz-oil-prices-red-sea-houthis/)
- [A new front is opening in the Iran war. Oil faces 'no way out' (CNN Business)](https://www.cnn.com/2026/07/22/business/bab-el-mandeb-houthis-saudi-arabia-oil)
- [2026 Strait of Hormuz crisis (Wikipedia)](https://en.wikipedia.org/wiki/2026_Strait_of_Hormuz_crisis)
- [Omnicell (OMCL) Research Report (StockStory)](https://stockstory.org/us/stocks/nasdaq/omcl)
