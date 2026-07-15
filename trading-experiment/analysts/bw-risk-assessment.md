# BW Risk Assessment — Bridgewater-Style Risk Report
**Date: 2026-07-15 (~14:41 ET)**

*Persona: Bridgewater risk desk, radical transparency. Ground truth pulled live via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`, account 424593861) this run.*

---

## Overall Portfolio Risk Grade: **D+** (down from C- this morning — not because anything new broke, but because this morning's own headline number was too low: corrected VTI sector data puts blended Technology look-through at ~62%, not ~59%, and the deployable cash that was "voluntarily idle" this morning is now voluntarily idle for its **eighth-plus straight day** with no blocker to blame)

## Biggest risk right now
**This desk under-stated the book's own concentration this morning, and it needs correcting in public rather than quietly fixed next cycle.** The 10:41 ET report used a 36.95% Technology-sector weight for VTI; a fresh pull of Vanguard's own factsheet data (as of 5/31/26) puts VTI's Technology weight at **42.30%**, and NVDA specifically at **6.70%** of the fund — both higher than this morning's inputs. Re-running the look-through math on the current $15.214 deployed sleeve (NVDA $5.225 direct + VTI $9.989, of which $4.225 is embedded Technology and $0.669 is embedded NVDA): **combined Technology-sector look-through is now ~$9.45, or 62.1% of deployed capital** (up from the 58.6% reported this morning), and **combined NVDA look-through is ~$5.89, or 38.7%** (essentially unchanged). Separately, and just as important: the ~$35.00 of deployable trading capital has now sat in cash through an eighth-plus consecutive check-in with the operational blocker fully resolved — the highest-conviction cross-analyst idea this book has ever produced (OMCL: GS #1 for an eleventh-plus cycle, MS's first-ever agreeing DCF) remains correctly un-triggered on its own falsifiable macro test, but that correctness doesn't change the fact that this account is still, in substance, a two-name tech-beta bet with 70% of its working capital doing nothing.

---

## Heat Map Summary

| Risk Category | Level | Notes |
|---|---|---|
| Sector concentration (look-through) | 🔴 Critical | ~62.1% of deployed capital is Technology-sector exposure using corrected VTI weights (42.30%, not this morning's 36.95%) — worse than previously disclosed, not better |
| Single-stock look-through concentration | 🟠 High | Combined direct + VTI-embedded NVDA exposure ≈38.7% of deployed capital, essentially unchanged from this morning |
| Correlation risk | 🟠 High | NVDA and VTI remain mechanically linked (NVDA is VTI's #1 holding); no diversification benefit in a tech-led selloff |
| Execution/operational risk | 🟢 Low | Blocker stays cleared; no new trade attempts logged since the 09:36 ET VTI fill, so no fresh evidence either way today |
| Geopolitical/macro tail risk | 🟠 High (modest improvement) | Hormuz conflict still fully live — US ran a 7-hour strike operation on Iranian coastal/military assets today — but Trump dropped the 20%-cargo-fee blockade toll, and Brent has eased slightly off its ~$85+ peak to ~$84.60. No de-escalation trigger has formally fired. |
| Interest rate sensitivity | 🟡 Moderate (modest improvement) | Cooling CPI (3.5% YoY, first monthly decline since 2020) and soft PPI have pushed the market to ~84.5% odds the Fed holds 3.50-3.75% at the July 28-29 FOMC — lower near-term hawkish-surprise risk than prior reports assumed, but both holdings remain long-duration, valuation-rich growth exposure structurally exposed to any reversal |
| Recession/drawdown risk | 🟠 High | Est. 28-55% peak-to-trough drawdown on the deployed sleeve depending on severity (see Sec. 6); **correction this run: the 10Y/2Y curve is NOT currently inverted** — it's a narrow but positive +0.36-0.41% spread, contradicting a low-confidence source this desk flagged (with caveat) in an earlier cycle |
| Liquidity risk (market) | 🟢 Very Low | Both NVDA and VTI remain among the most liquid securities traded in the US; spreads ~1bp or tighter |
| Liquidity risk (account-level) | 🟢 Low | One clean executed trade on record (7/15 09:36 ET); no new orders attempted this run to add further evidence |
| Geographic/currency risk | 🔴 Critical | 100% USD, ~99%+ US-domiciled equities across both holdings — zero international diversification, unchanged and unaddressed for a full week of reports |
| Idle cash / opportunity cost | 🟠 High (upgraded from Moderate) | ~69.7% of the ~$50.21 trading pool (~$35.00) still sits in cash — an eighth-plus straight check-in with no blocker excuse; the highest-conviction diversifier idea in this book's history (OMCL) remains correctly gated by an unfired trigger, but that's a statement about entry discipline, not about why $35 continues to earn nothing while the book stays effectively single-theme |
| Position sizing discipline | 🟢 Low | Absolute dollar risk trivial (~$15.21 of $100.21); no single position breaches BR's 20% face-value soft cap |

---

## 1. Ground-truth portfolio snapshot (live, this run)

- **Total account value**: $100.2146 (`get_portfolio`: cash $85.00 + equity $15.2146)
- **Positions** (`get_equity_positions` + live `get_equity_quotes`):
  - NVDA: 0.024826 sh, avg cost $201.40, live $210.455 (bid/ask $210.45/$210.47) → **$5.2251, +4.50% unrealized**
  - VTI: 0.026826 sh, avg cost $372.77, live $372.38 (bid/ask $372.38/$372.39) → **$9.9891, -0.10% unrealized**
- **Trading-book accounting** (per ground rules: $50 base + profits, $50 reserve untouchable): trading pool ≈$50.21, deployed $15.21 (NVDA $5.23 + VTI $9.99), deployable cash ≈$35.00, reserve $50.00 untouchable (embedded in the $85.00 cash balance)
- **No new orders since the 09:36 ET VTI fill** — this is a quiet check-in from an execution standpoint, which is exactly why the concentration math (not fresh trade activity) is the focus this cycle.

## 2. Correlation analysis between holdings
Unchanged conclusion, reconfirmed with better data: NVDA and VTI are not two independent bets. NVDA is VTI's single largest holding at 6.70% of the fund (Vanguard factsheet, 5/31/26), ahead of AAPL and MSFT. A tech-led drawdown moves both positions the same direction simultaneously — VTI will fall less than NVDA in percentage terms (its other 93.3% isn't NVDA, and 57.7% isn't Technology at all), but "falls less" is not "diversifies." This book still has exactly one source of first-order risk — the AI/semiconductor trade — expressed through two tickers instead of one.

## 3. Sector concentration risk
- **Look-through Technology-sector exposure**: NVDA ($5.225, 100% semis/AI-compute) + VTI's Technology slice ($9.989 × 42.30% ≈ $4.225) = **~$9.45, or 62.1% of the $15.214 deployed sleeve.**
- **Data correction, stated plainly**: this morning's 10:41 ET report used a 36.95% VTI Technology weight; today's direct pull from Vanguard's own fund page shows 42.30% (as of 5/31/26). This is a ~5.4pp upward revision that makes the book's true concentration worse than this desk itself reported eight hours ago. Flagging this the same way this desk expects GS to flag its own price errors — a wrong number doesn't get to sit uncorrected just because it was already published.
- **As % of total account**: ~9.4%. As % of the ~$50.21 trading pool: ~18.8%.
- **VTI's own broader sector mix** (context for the non-tech 57.7%): Financial Services, Communication Services, Consumer Cyclical, Industrials, Healthcare, and smaller weights in Consumer Defensive, Energy, Real Estate, Utilities, and Basic Materials — genuine breadth this book didn't have before 7/15, but subordinate to the headline number above.
- **Eighth-plus consecutive BW cycle flagging Technology/AI-compute concentration as the dominant single risk in this book.** The trend line has gone 100% → "58.6% blended" (this morning, understated) → 62.1% (corrected, this run). That is not the trajectory a "core sleeve just opened" narrative should produce.

## 4. Geographic exposure and currency risk
- **Direct FX**: none — both holdings are USD-denominated.
- **Geographic concentration**: VTI is ~99%+ US-domiciled equities; NVDA is a US-domiciled company. Combined, this book still has effectively zero non-US equity exposure. A "core sleeve" in the conventional IPS sense normally carries an ex-US leg; VTI alone does not provide one. This has now been flagged for a full week with no plan on the table anywhere in this book's history to address it — of every risk category in this report, this is the one that has seen zero movement, positive or negative, since inception.
- **Indirect / supply-chain geography**: NVDA's fabrication remains concentrated at TSMC in Taiwan. Unchanged, unhedged, unpriced by anything in this book.
- **Middle East/Gulf exposure, still live**: fresh WebSearch this run confirms the US ran a roughly seven-hour strike operation against Iranian coastal and military assets today, aimed at degrading Iran's ability to disrupt Hormuz shipping, and Trump has reportedly threatened further strikes if talks don't resume. The one incrementally positive data point: Trump dropped the previously-floated 20%-of-cargo-value blockade toll, and Brent has eased modestly off its intraweek peak (~$84.60 vs. >$85 earlier this week). None of state.md's three falsifiable OMCL de-escalation triggers (ceasefire holding a full session / Brent <~$75 / Friday 7/17 time-box) has fired. The account still holds zero exposure that would benefit from this shock resolving, only exposure that sits through it.

## 5. Interest rate sensitivity
Genuine improvement to note here, in the interest of not only ever delivering bad news: June CPI fell 0.4% month-over-month (first monthly decline since 2020), bringing annual inflation to 3.5% vs. 3.8% expected, and PPI also came in soft. Markets are now pricing ~84.5% odds the Fed holds 3.50-3.75% at the July 28-29 FOMC meeting — a meaningfully lower near-term hawkish-surprise risk than this book's rate-path commentary has carried in prior cycles (where BR's report flagged a wide Fed-vs-house-view split). The 10-year Treasury sits at ~4.62%, up slightly on the day despite the cooler data, alongside a 2-year at ~4.21% — a positive, if narrow, +0.36-0.41pp spread (see Sec. 6 correction). Both holdings remain structurally rate-sensitive regardless of this week's improvement: **NVDA**'s DCF-implied fair value (MS: $150.6 base case at 11% WACC/3% terminal growth vs. ~$210.46 spot) swings roughly 2x across MS's own WACC sensitivity range ($235 at 9% WACC down to $112-120 at 13%). **VTI**, per MS's own coverage, sits inside a market trading 22-24x forward earnings against a ~17-18x historical average — a market-wide valuation stretch, not just a tech-sector one. A calmer near-term Fed outlook reduces the probability of the shock, not the magnitude if it happens.

## 6. Recession stress test
Applying the same 35-50%-bad-year framework this book has used since BR's original IPS, updated to today's dollar figures:
- **Base recession scenario** (multiple compression, AI-capex digestion pause, no fresh geopolitical shock): NVDA -35% to -45% → position falls to ~$2.87-$3.40 (a $1.83-$2.36 loss); VTI, being 57.7% non-tech, likely falls less at the index level (est. -25% to -35%) → position falls to ~$6.49-$7.49 (a $2.50-$3.50 loss). **Combined deployed-sleeve loss: ~$4.33-$5.86, i.e., a ~28%-39% drawdown on the $15.214 deployed sleeve.**
- **Severe/tail scenario** (recession + a Taiwan Strait disruption or a Gulf energy/inflation shock that forces the Fed to hold or hike into a slowdown): 50%+ on NVDA plausible (down to ~$2.61), 35-45% on VTI (2008's total-market drawdown was ~55% peak-to-trough; 2020's COVID crash was ~34% but far faster) → **combined deployed-sleeve loss could approach 45-55%, or roughly $6.85-$8.37 of the current $15.214.**
- **Correction to a prior claim**: an earlier report cited, with an explicit low-confidence caveat, a yield-curve "inversion depth exceeding the threshold that preceded the last three corrections." A direct check this run shows **the curve is not currently inverted** — the 10Y/2Y spread is a narrow but positive +0.36 to +0.41 percentage points (10Y ~4.62% vs. 2Y ~4.21%), consistent with a return to a normal, if flat, curve shape after swinging positive/negative through H1 2026. This desk is correcting its own earlier caveat rather than letting an unverified claim linger unaddressed — the recession-probability signal from the curve specifically is currently neutral-to-mildly-reassuring, not the red flag it was floated as.
- **On the total account**: $85.00 (84.8% of the account) is cash — $50 a hard untouchable reserve, ~$35 currently idle deployable capital. Even the severe scenario above costs at most ~7-8% of total account value. This remains the same structural point every prior report has made: **the account's downside resilience comes from being mostly uninvested, not from the risk profile of what is invested** — and that idle-cash cushion is a voluntary choice at this point (Sec. Idle cash line), which cuts both ways: it protects the account today, and it's also capital not doing the diversification job it's earmarked for.

## 7. Liquidity risk rating (per holding)
| Holding | Market liquidity | Account-level liquidity | Notes |
|---|---|---|---|
| NVDA | 🟢 Very Low risk | 🟢 Low risk | Deep, liquid market; ~$0.02 bid/ask spread on a ~$210 stock (<1bp) |
| VTI | 🟢 Very Low risk | 🟢 Low risk | One of the most liquid US ETFs; ~$0.01 bid/ask spread on a ~$372 fund (<1bp) |
| Cash ($85.00) | 🟢 No risk | 🟢 Low risk | Fully liquid and confirmed deployable since 7/14 evening |

Nothing to add this cycle — this remains the cleanest section of the report by a wide margin.

## 8. Single stock risk and position sizing recommendations
- **Face-value sizing**: NVDA is 34.35% of deployed capital / 10.41% of the trading pool; VTI is 65.65% of deployed capital / 19.90% of the trading pool. Neither breaches BR's 20% single-name soft cap at face value (VTI is a fund, not a single name, so the cap doesn't strictly apply to it).
- **Look-through sizing** (the number that should actually govern the next decision): combined NVDA exposure is ~38.7% of deployed capital — essentially unchanged from this morning despite the sector-weight correction, because NVDA's embedded VTI weight (6.70%) moved less than the broader Technology weight did. **Recommendation, unchanged in spirit from every prior cycle: the next dollar deployed should go to something that reduces, not adds to, Technology-sector or NVDA look-through exposure.** OMCL remains the best-evidenced candidate on the table (per GS's eleventh-plus-cycle #1 rank and MS's first-ever agreeing DCF), correctly gated behind its own falsifiable trigger — this desk is not second-guessing that discipline. What this desk is flagging is the growing gap between "the right trade is identified and waiting" and "the right trade actually gets sized" — eight-plus days now on the same unexecuted idea, with the operational excuse gone since 7/14 evening.
- **No stop-loss is in place on either position**, consistent with the standing "no mandated stop-loss, use judgment" rule. Flagging again, plainly: neither position has a defined exit level if the AI trade reverses sharply. Trivial in dollar terms today; worth fixing as a habit before the book scales, not after.

## 9. Tail risk scenarios with probability estimates
| Scenario | Rough probability (next 30 days) | Estimated impact on deployed sleeve |
|---|---|---|
| Hormuz conflict escalates further (renewed blockade enforcement, oil >$100, broad equity risk-off) | ~15-20% | -30% to -50% on NVDA via multiple compression; VTI down less but not spared given its 42.3% tech weight |
| Hormuz conflict de-escalates within 1-2 weeks (a genuine falsifiable-trigger event) | ~30-35% | Modest relief rally across both positions; NVDA likely outperforms on the recovery given higher beta to the AI-trade narrative; this is also the scenario most likely to finally fire an OMCL trigger |
| AI-capex digestion / hyperscaler spending pause (demand-side, independent of geopolitics) | ~10-15% over 3-6 months | -30%+ on NVDA and disproportionately on VTI's 42.3%-weighted tech sleeve — the scenario where "diversification via VTI" helps least, since the shock is sector-wide |
| Taiwan Strait incident (fab disruption) | <5% (low-probability, high-severity) | Potentially -50%+ on NVDA, durable; VTI also falls hard given its own tech concentration — genuinely uninsurable with the current equities-only toolbox and current book composition |
| Broad recession / credit event, no specific tech or geopolitical trigger | ~10-15% over 6-12 months (yield curve currently positive, not a near-term red flag per Sec. 6 correction) | Base-to-severe stress test applies (Sec. 6): ~28-55% combined deployed-sleeve drawdown depending on severity |
| Status quo grind (no clean resolution, no fresh escalation, no recession, Fed holds 7/28-29) | ~35-40% | Continued sideways-to-mixed drift; the most probable single outcome, and the one under which this report's concentration critique matters least near-term but most on a longer compounding horizon |

## 10. Hedging strategies (equities-only toolbox — top 3 risks)
No options available on this account. All three hedges are about **what to buy next**, not what to sell — no short or inverse-ETF access is confirmed, so risk reduction has to come from diversifying new capital, not offsetting existing positions.
1. **Sector/look-through concentration (62.1% blended Technology, 38.7% blended NVDA)** → the next deployable dollars should deliberately avoid anything tech/semiconductor-adjacent, including additional core-ETF buys, until the blended tech weight comes down materially. OMCL remains the cleanest evidenced candidate; a sector-capped or equal-weight fund (e.g., an equal-weight S&P 500 product) would also reduce the mega-cap-tech skew a cap-weighted VTI structurally can't avoid.
2. **Geographic concentration (99%+ US, zero currency diversification)** → still the one risk category with zero movement in either direction across a full week of reports. An ex-US or global total-market fund (e.g., VXUS) is the direct lever; this remains unaddressed by anything currently in the book or in BR's stated plan.
3. **Rate/valuation-duration risk (both positions long-duration, richly-valued growth exposure)** → within an equities-only toolbox, a value-tilted allocation (e.g., VTV or similar) is the practical hedge for any future core-sleeve additions, rather than compounding further into cap-weighted growth/tech exposure. This week's cooler inflation data modestly reduces near-term urgency here, but doesn't change the structural recommendation.

## 11. Rebalancing suggestions with allocation percentages
Endorsing BR's IPS target (55% core / 35% satellite / 10% cash) as the correct compass, restating the caveat this desk added this morning: **"core" should not be scored as satisfied by VTI alone once look-through sector/geography is accounted for.** Current trading-pool allocation: Core (VTI) ~19.90%, Satellite (NVDA) ~10.41%, Cash ~69.7% — essentially unchanged from this morning's read, still far from the 55/35/10 target, and the cash figure remains voluntary. Concrete suggestion, unchanged: of the next ~$8-10 deployed, direct it to a genuine diversifier (OMCL if/when a trigger fires, or VXUS for geographic breadth) rather than a second core-ETF purchase — another VTI/SCHG/QQQM buy right now would move the "core %" toward target on paper while pushing this report's look-through tech/NVDA numbers higher, exactly the pattern that produced this morning's understated concentration figure in the first place.

---

## Cross-analyst notes
- **GS (7/15 midday)**: OMCL still #1 for an eleventh-plus consecutive cycle; new caution flag on PTCT ("fully priced") and a self-flagged CRWD chase-risk upgrade (8→9), explicitly routed to this desk — agreed, CRWD at ~188x trailing non-GAAP P/E after a two-session +22% run is not a name this desk would endorse sizing into regardless of how clean its correlation profile is.
- **MS's DCF (7/15)**: NVDA still ~29% overvalued, gap widened further; OMCL's margin of safety has compressed from ~25% to ~21% upside as price ran toward GS's entry-zone ceiling — a sizing-discipline note for whenever a trigger fires, not a verdict change. MS's VTI section still doesn't engage with sector/geographic look-through, which remains this report's lane to fill.
- **JPM (7/15)**: OMCL now inside the 2-week earnings brief (reports 7/30) — explicit recommendation to execute before the print if a trigger fires, rather than drift into an accidental earnings bet. This desk agrees, and adds: whatever is bought should still clear the look-through concentration math above before sizing.
- **BR's IPS (7/14 evening, still current)**: this desk's corrected 62.1% blended-tech figure sharpens BR's own "0% core → core opened" framing further than this morning's report did — the gap between BR's allocation-percentage view (19.9% core, on-paper progress) and this desk's look-through view (62.1% single-sector exposure) is now wider, not narrower, and BR's next report should engage with the corrected number directly.

---

Sources:
- [Oil prices today: Brent, WTI, Hormuz blockade (CNBC)](https://www.cnbc.com/2026/07/15/oil-prices-today-brent-wti-hormuz-blockade.html)
- [Oil prices hit 1-month high as US-Iran attacks dim Strait of Hormuz outlook (Al Jazeera)](https://www.aljazeera.com/economy/2026/7/14/oil-hits-1-month-high-as-us-iran-fighting-clouds-strait-of-hormuz-outlook)
- [Stock market today: Dow, S&P 500, Nasdaq rise as Fed rate-hike bets ease, chip stocks rally (Yahoo Finance)](https://finance.yahoo.com/markets/live/stock-market-today-tuesday-july-14-dow-sp-500-nasdaq-070833816.html)
- [Stock Market Today (July 15, 2026) (TheStreet)](https://www.thestreet.com/stock-market-today/stock-market-today-dow-jones-sp-500-nasdaq-updates-july-15-2026)
- [US 10 Year Treasury Note Yield (Trading Economics)](https://tradingeconomics.com/united-states/government-bond-yield)
- [10-2 Year Treasury Yield Spread (ycharts)](https://ycharts.com/indicators/10_2_year_treasury_yield_spread)
- [Treasury Yields Snapshot: July 10, 2026 (Advisor Perspectives / dshort)](https://www.advisorperspectives.com/dshort/updates/2026/07/10/treasury-yields-snapshot-july-10-2026)
- [Vanguard Total Stock Market ETF (VTI) profile — sector weights, top holdings (Vanguard)](https://investor.vanguard.com/investment-products/etfs/profile/vti)
- [VTI Holdings List (StockAnalysis.com)](https://stockanalysis.com/etf/vti/holdings/)
