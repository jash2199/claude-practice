# BW Risk Assessment — Risk Management Report
**Date: 2026-10-28 (Wednesday), ~10:43 ET.** Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time. Three fresh WebSearches this run (FOMC decision result, OMCL earnings-date confirmation, 10-year Treasury/Brent crude) reproduced the same chronic dateline wall every desk has now logged for 49+ consecutive runs for the rate/oil inputs — but the FOMC query this time correctly returns **nothing dated today because the decision genuinely hasn't happened yet** (2:00pm ET, ~3h15m from this report), not a visibility failure like yesterday's mistaken read. OMCL's 10/29 earnings date got a modest confirmation boost: two more sources (Finviz, ScanX) independently cite the company's own 10/29-before-open announcement, against Earnings Whispers' lone holdout for 10/30.

---

## Overall Portfolio Risk Grade: **C-** (upgraded from yesterday's D)

One of the three live-cluster legs just resolved cleanly: GEHC's Q3 print (confirmed this morning via multiple dated, converging sources, and independently rebuilt by MS) was a genuine beat-and-raise with FY26 guidance raised on every metric — the GEHC structural-break contingency plan's own test (a guidance cut, a backlog/book-to-bill reversal, or a credibility discontinuity) found nothing, and BR's 6%-pool earnings-window trigger reverts to the standard 5pp band now that the print has cleared without firing. That is a real, not cosmetic, de-risking — one genuine unknown became a resolved non-event. The upgrade stops at C-, not higher, because **two of the three cluster legs are still live**: the FOMC decision is genuinely ~3 hours out (not yet knowable, no amount of searching will change that before 2pm ET), and OMCL prints tomorrow carrying this book's largest unrealized loss and widest options-implied move. GEHC itself is also now the most extended position on the book intraday (+7.37% and climbing, a fresh post-entry high) — a one-day move strong enough to earn its own entry in Section 7 below even with no action attached.

## Single biggest risk right now

**The FOMC decision (today, 2:00pm ET, ~3h15m out) and OMCL's print (tomorrow, 10/29, before open) are both still ahead of this book, back-to-back, with zero equities-only hedge against either.** GEHC clearing today removes one leg, not the cluster. OMCL alone carries a sourced **±14.33% (~$5.08) implied move** against a position already sitting at **-20.4% unrealized**, the largest loss on the book — a bad print risks a fresh multi-year low on top of an already-impaired position, and a good print doesn't change that this desk has no way to protect the downside case beforehand. The FOMC outcome, whatever it is, lands first and sets the rate backdrop OMCL's reaction tomorrow will be read against. Two genuine binary events in 24 hours, one book, no options, no shorts, no hedge — exactly the scenario this desk has been flagging for a week, now down to its final 24 hours.

---

## Portfolio Snapshot (live, 2026-10-28 ~10:43 ET)

| Holding | Qty | Avg Cost | Live Price | Day Chg | Mkt Value | % Equity | % Pool | Unrealized P&L |
|---|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $201.40 | $217.99 | +0.02% | $5.41 | 12.07% | 10.62% | +8.24% |
| VTI | 0.036690 | $370.40 | $378.32 | +0.11% | $13.88 | 30.94% | 27.25% | +2.14% |
| VXUS | 0.154525 | $84.13 | $83.34 | +0.05% | $12.88 | 28.72% | 25.28% | -0.94% |
| OMCL | 0.106405 | $46.99 | $37.41 | +1.77% | $3.98 | 8.87% | 7.81% | **-20.39%** (largest loss) |
| XLE | 0.086775 | $57.62 | $68.275 | +0.10% | $5.92 | 13.20% | 11.62% | **+18.49%** (largest gain) |
| GEHC | 0.036393 | $68.69 | **$76.35** | **+7.37%** (today's by-far biggest mover) | $2.78 | 6.19% | 5.45% | +11.15% |
| Cash (total / deployable) | — | — | — | — | $56.10 / $6.10 | — | 11.97% (deployable) | n/a |

Total account value **$100.954** (equity $44.854 + cash $56.10). Trading pool (= total − $50 reserve) **≈$50.954**, accumulated profit **≈+$0.954 (+1.91%)** — up sharply from yesterday's +$0.63/+1.26%, almost entirely GEHC's post-print pop. NVDA+OMCL combined: **20.94% of equity** (25% trigger, ~4.06pp buffer — clean). NVDA single-name: **12.07% of equity**, **10.62% of pool** vs. BR's 10% target (+0.62pp, inside the band, rule 20's no-new-cash instruction stands). OMCL DCA gate (rule 18): needs **≈+$1.55** more profit to hit the $2.50 threshold — pool must rise to ~$52.50, a further **+3.03%** — narrowed meaningfully from yesterday's ~$1.58-1.87 range on GEHC's continued pop, still not fired. GEHC pool weight **5.45%** vs. its (now-expiring) 6% earnings-window cap — **0.55pp buffer**, the narrowest it has ever been, purely because the position itself just ran, not because of any new risk-desk concern; reverts to the standard 5pp drift band per BR's own design now that the print has cleared clean.

---

## Heat Map — By Holding

| Holding | Pool Wt | Concentration Risk | Valuation/Multiple Risk | Rate Sensitivity | Liquidity Risk | Binary Event Risk (next 3-24h) | **Overall** |
|---|---|---|---|---|---|---|---|
| NVDA | 10.62% | 🟡 Medium | 🔴 High (MS: -12.25% gap, widening) | 🔴 High | 🟢 Very Low | 🟢 Low (no print, next ~11/18) | 🟡 **Medium-High** |
| VTI | 27.25% | 🟢 Low (diversified) | 🟡 Medium | 🟡 Medium | 🟢 Very Low | 🟡 Medium (FOMC outcome pending) | 🟡 **Medium** |
| VXUS | 25.28% | 🟢 Low | 🟢 Low-Medium | 🟡 Medium (FX) | 🟢 Low | 🟡 Medium (FOMC/USD) | 🟡 **Medium** |
| OMCL | 7.81% | 🟡 Medium (DCA-gate magnet) | 🟢 Low (MS: +32.49% cheap) / 🔴 High (thesis execution) | 🔴 High | 🟡 Medium (smaller-cap) | 🔴 **Critical** (print tomorrow before open; ±14.33% implied move) | 🔴 **High** |
| XLE | 11.62% | 🟡 Medium (100% single-sector) | 🟡 Medium (MS gap -7.10%) | 🟢 Low-Medium | 🟢 Low | 🟢 Low (no print; flat overnight) | 🟡 **Medium** |
| GEHC | 5.45% | 🟢 Low (still under cap, barely) | 🟡 Medium (MS: -6.0% gap, now a close call not a clean undervaluation) | 🟡 Medium | 🟢 Low | 🟢 **Resolved today** (print cleared clean; extended move itself is the live risk now, not the event) | 🟡 **Medium** |
| Cash | 11.97% (deployable) | ⚪ None | ⚪ n/a | 🟢 Benefits | ⚪ None | 🟡 Low (fuels DCA gate mechanically) | 🟢 **Low** |

## Heat Map — By Risk Category (book-wide)

| Risk Category | Level | Driver |
|---|---|---|
| Correlation / factor concentration | 🔴 High | Standing structural issue, unchanged in kind: six holdings still trade as roughly two factors (AI/growth-risk-on vs. everything else), not six independent bets |
| Sector concentration | 🟡 Medium-High | Look-through Tech/semis ≈ **23.0% of pool** once VTI/VXUS's embedded tech weighting is counted (not just NVDA's 10.62% headline) — essentially flat vs. yesterday |
| Geographic / currency | 🟢 Low-Medium | ~75% USD-direct, 25% in VXUS's multi-currency basket — contained and intentional |
| Interest-rate sensitivity | 🔴 High | The book is net long "the Fed doesn't shock the system" — the decision is genuinely still pending, 3 hours out; this is a known, correctly-timed unknown today, not a sourcing failure |
| Recession / macro drawdown | 🔴 High | See stress test — estimated 25-32% pool drawdown in a classic recession scenario, unchanged |
| Liquidity | 🟢 Low | All six names are liquid large/mid-caps or major ETFs; OMCL remains the one relatively thinner name, still immaterial at this position size |
| Single-stock / sizing discipline | 🟡 Medium-Low | No hard-cap breach, but GEHC's intraday move has pushed it to the narrowest buffer it has ever run against its own earnings-window cap — a sizing fact worth naming even though the cap itself is expiring today |
| Tail / event risk (next 3-24 hours) | 🔴 **Critical** | FOMC decision (~3h out) → OMCL print (~22h out, before tomorrow's open) — two live, unhedgeable unknowns stacked back-to-back, down from three yesterday |
| Research visibility | 🟢 **Resolved this run** | Yesterday's flag (not knowing whether the FOMC had already decided) was itself a correction-worthy error, per BR's and GS's independent fixes — today this desk correctly treats the decision as genuinely pending, not unconfirmed-but-already-happened; no process gap to carry forward on this specific point |

---

## 1. Correlation Analysis Between Holdings

Today is a mild relief from the standing pattern rather than a repeat of it: NVDA/VTI/VXUS are all marginally green (+0.02% to +0.11%, essentially flat), OMCL is up modestly (+1.77%, a pre-print firming with no sourced catalyst), XLE is flat (+0.10%), and GEHC is the one real outlier (+7.37%, entirely its own post-earnings story). This is a day where the usual two-factor pattern (AI/growth-risk-on block vs. everything-else block) simply didn't have much to say — nothing in today's tape argues the underlying correlation structure has changed, only that no shared catalyst fired hard enough today to expose it either way. **Cash (11.97% of pool, deployable) remains the only position with genuinely zero correlation to the rest of the book**, and remains untouched by design through the FOMC/OMCL window.

## 2. Sector Concentration

Direct, face-value sector exposure:
- **Technology/Semiconductors (NVDA):** 10.62% of pool
- **Healthcare (OMCL software + GEHC medtech):** 13.26% of pool combined
- **Energy (XLE):** 11.62% of pool
- **Diversified/all-sector (VTI + VXUS):** 52.53% of pool
- **Cash:** 11.97% of pool (deployable)

Look-through math (VTI ~30-32% Technology, VXUS ~13-14% Technology): NVDA (10.62%) + VTI's embedded tech (27.25% × ~32% ≈ 8.72%) + VXUS's embedded tech (25.28% × ~14% ≈ 3.54%) ≈ **22.88% of pool in Technology/semis alone** — flat versus yesterday (22.98%), still roughly double the headline NVDA number. Unchanged conclusion: this is the real concentration risk in this book, and BR's 10/19 core-tilt policy (next core dollar to VXUS, not pro-rata) remains the correct lever, still live and governing but not something either desk needs to re-litigate today.

## 3. Geographic Exposure and Currency Risk

~75% US-domestic direct exposure (NVDA, OMCL, XLE, GEHC, VTI); VXUS at 25.28% of pool is the sole, by-design international/currency sleeve. GEHC's China/tariff/global-supply-chain exposure remains embedded despite its US listing — directly relevant to today's confirmed print, where management reaffirmed tariff-cost guidance alongside the raise. A sustained USD move either way off this afternoon's Fed decision would transmit to the book specifically through VXUS; today's pre-decision VXUS reading (+0.05%) is too flat to read anything into either direction.

## 4. Interest Rate Sensitivity (per position)

| Position | Sensitivity | Why |
|---|---|---|
| NVDA | **High** | Long-duration growth multiple; MS's DCF gap (-12.25%, widening) is a discount-rate-sensitive number by construction |
| OMCL | **High** | Same long-duration-cash-flow profile, compounded by weak current FCF conversion and tomorrow's print |
| VTI | Medium | Blended index duration; moves with the aggregate market's rate sensitivity |
| VXUS | Medium | Adds a second channel — USD strength from a hawkish-leaning Fed outcome pressures VXUS's USD-translated return |
| GEHC | Medium | Moderate-duration medtech; MS's fresh rebuild (WACC 8.0%, post-print) narrowed the gap to -6.0% — closer to fair value, so a rate move now has more room to flip the verdict either way than it did yesterday |
| XLE | Low-Medium | Value/cyclical, shorter-duration cash flows; direct rate sensitivity low, indirect via growth/oil-demand channel |
| Cash | **Inverse (benefit)** | Higher rates = more yield on the $56.10 cash balance |

The book remains net long "the Fed doesn't shock the system," concentrated in NVDA and OMCL's long-duration cash-flow profiles. Today's genuine answer: this desk does not know the outcome yet, and it is correctly too early to know it — the right discipline is to wait for the 2:00pm ET statement, not to infer it from a thin pre-decision tape the way yesterday's report mistakenly tried to.

## 5. Recession Stress Test

Rough, standard macro-stress assumptions by name (directional, off historical sector drawdowns, not a formal model) — unchanged from prior runs, re-applied to today's live weights:

**Demand-driven recession (classic scenario — broad slowdown, oil demand falls with everything else):**
NVDA -50%, VTI -30%, VXUS -35%, OMCL -40%, XLE -40%, GEHC -25%.
Weighted pool impact ≈ **-31.2pp → estimated pool drawdown of ~31-32%**, i.e. the ~$50.95 pool would fall to roughly **$35.1**. In dollar terms on this account's actual size, that's a ~$15.9 loss — small in absolute terms; the process lesson is what matters at any scale.

**Stagflation/supply-shock recession (oil stays elevated even as broader demand weakens — the scenario XLE is nominally held against):**
Same assumptions except XLE +15% instead of -40%.
Weighted pool impact ≈ **-24.7pp → estimated drawdown of ~25%**. XLE's hedge, *if it behaves as designed*, still cushions roughly 6-7pp versus the demand-driven case — unchanged framing; today's flat XLE tape (+0.10%) is simply uninformative either way, not a new data point for or against the hedge thesis.

## 6. Liquidity Risk Rating (per holding)

| Holding | Rating | Why |
|---|---|---|
| NVDA | Very Low | One of the most liquid single stocks on earth |
| VTI | Very Low | Among the largest, most liquid ETFs in existence |
| VXUS | Low | Large, liquid international ETF |
| XLE | Low | Large sector ETF, high daily volume |
| GEHC | Low | Large-cap, adequate daily volume — today's +7.37% move on real news, not a liquidity gap |
| OMCL | **Medium** | Smaller mid/small-cap name, thinner average volume, wider spreads especially around tomorrow's print — the one genuinely less-liquid name in the book |
| Cash | None | Fully liquid |

At this book's actual dollar sizes ($2.78-$13.88 per position), liquidity risk remains close to immaterial in practice. Unchanged from prior runs.

## 7. Single Stock Risk and Position Sizing Recommendations

- **GEHC (5.45% of pool, +7.37% today):** This is now the position to watch for a different reason than yesterday. The print itself cleared clean (beat-and-raise, guidance up on every metric, no structural break), so there is no trim case on fundamentals. But the price reaction is now large enough (+7.37%, a fresh post-entry high, MS's gap narrowing from -10.53% to -6.0%) that GEHC is the single most rule-2-extended position in the book today — not a reason to trim (no structural break = no sell signal under its own contingency plan), but a clear reason there is **no case to add here either**, beyond the existing overweight-vs.-target and no-new-cash constraints already in force. Recommend the team stop treating GEHC's earnings-window cap as a live constraint once BR formally confirms the reversion to the standard 5pp band (per BR's own 10/26 design) at its next report — carrying an expired trigger forward as if still live is exactly the kind of stale-framing error this desk flagged in itself yesterday.
- **OMCL (7.81% of pool, -20.39% unrealized):** The book's one demonstrated sizing mistake (bought on a clock, not a setup) prints tomorrow before open, with a sourced **±14.33% (~$5.08)** implied move against a ~$3.98 position — a swing on the order of a fifth to a quarter of its current market value in either direction. Recommendation unchanged and now final before the event: do not add before the print. The date dispute (10/29 vs. Earnings Whispers' lone 10/30) has narrowed further this run (two more independent sources — Finviz, ScanX — both citing the company's own 10/29 announcement) but is still not a primary-source closure; team convention (10/29 governs) stands, and either way the no-trade-before-print instruction is identical regardless of which date is right.
- **NVDA (10.62% of pool / 12.07% of equity):** Comfortably inside its 18-20% single-name and 25% combined-with-OMCL triggers. No sizing change warranted.
- **XLE (11.62% of pool):** No single-name risk (24-holding ETF), flat today (+0.10%) after yesterday's -2.00% drop — two sessions now with no clean price/catalyst co-occurrence in either direction, extending the longest-running unconfirmed-hedge streak on the book (now closing in on three weeks). Still no case to add or trim.
- **VTI / VXUS:** Both sit close to their pool targets (VTI +1.25pp over, VXUS -1.72pp under — neither near the 5pp drift trigger). No sizing issue.

## 8. Tail Risk Scenarios (with rough probability estimates)

| Scenario | Rough probability | Impact if it happens |
|---|---|---|
| FOMC outcome turns out hawkish (hike or hawkish-leaning hold vs. the ~84-87% consensus-hold base case carried from prior reads, not re-sourceable before 2pm ET) | ~13-16% | Risk-off shock to NVDA/OMCL's long-duration multiples, landing the night before OMCL's own print — the single worst-timed sequencing this book could draw |
| OMCL "beat but soft guide, sell off anyway" repeat (10/29, date dispute narrowing but not fully closed) | ~30-35% | Base rate from OMCL's last print (beat both lines, guided softer, stock gapped -13%); now with a sourced ±14.33% options-implied move to size the tail against — a ~20%+ single-session swing on this position is well within the market's own pricing |
| OMCL DCA gate fires inside the current window | ~15-20% | Requires a further +3.03% pool rally in ~1-2 trading days from current levels — closer than yesterday given GEHC's pop, still not the base case; governance response already pre-decided (defer execution past the print) |
| GEHC's rally today proves partly overdone/mean-reverts tomorrow on no new news | ~20-25% | Would not itself be a structural break (price action alone isn't a trigger per the contingency plan); flagged here only because a position that ran +7.37% has more room to give some back than one that didn't |
| Renewed Hormuz/oil escalation reaching a dated, sourced catalyst (still hasn't, for 3+ weeks) | ~10% | Would likely help XLE and hurt everything else — today's flat tape is uninformative either way |
| OMCL's print date turns out to actually be 10/30, not 10/29 | ~10-15% (narrowed from prior reads given today's two additional 10/29-confirming sources) | Low financial impact (the no-trade-before-print rule applies identically either date), but would mean today's "1 day out" framing across every desk's report was off by a full session — a process embarrassment worth naming if it happens, not a market risk |

## 9. Hedging Strategies — Top 3 Risks (equities-only toolbox, no options available)

1. **The FOMC decision + OMCL print, now the final two legs of the live cluster.** The cheapest, most effective hedge remains **not deploying the ~$6.10 deployable cash through this window** — unchanged standing policy, now down to its last ~24 hours of relevance. This desk explicitly recommends the team not use GEHC's clean print as cover to loosen that discipline before OMCL's own resolution.
2. **NVDA+OMCL / look-through AI-growth factor concentration (~22.88% of pool).** BR's 10/19 core-tilt policy remains the only equities-only lever that reduces this exposure without touching the satellite names directly, and remains the standing, adopted policy — no new action needed from this desk, just naming it as still the correct lever.
3. **GEHC's newly-extended position size.** Not a hedge in the traditional sense, but the practical equivalent available to this book: simply **not adding** to a position that just ran +7.37% in a single session, even though its earnings-window cap is technically expiring favorably today. The cheapest risk reduction available anywhere in this book right now is discipline, not a trade.

## 10. Rebalancing Suggestions (allocation %, pool basis)

| Sleeve | Current | BR Target | Drift | Action |
|---|---|---|---|---|
| VTI | 27.25% | 26% | +1.25pp | Hold — inside band |
| VXUS | 25.28% | 27% | -1.72pp | Hold — inside band |
| NVDA | 10.62% | 10% | +0.62pp | Hold — inside band, per rule 20 |
| XLE | 11.62% | 12% | -0.38pp | Hold — essentially on target |
| GEHC | 5.45% | 4% (soft; 6% earnings-window cap expiring today) | +1.45pp vs. base target | **Hold** — narrowest-ever buffer to its own (expiring) cap, but no structural case to trim; recommend BR formally confirm the reversion to the standard 5pp band next report |
| OMCL | 7.81% | 10% (DCA-gate funded) | -2.19pp | No action — underweight is by design, gated behind the DCA mechanism, 1 day from its resolving event |
| Cash | 11.97% (deployable) | 11% | +0.97pp | Hold flat through the FOMC decision and tomorrow's OMCL print, by design |

**No position breaches the 5pp drift trigger. No rebalancing trade is warranted today.** The one change in framing from yesterday: the cluster is down to its final two legs (FOMC this afternoon, OMCL tomorrow morning), and the only genuinely new sizing fact is GEHC's own extended move — not a reason to act, but a reason not to let a clean print be mistaken for a green light to add.

---

*No trade recommended off this report — research and risk-governance only, per mandate. This desk does not place trades or touch Robinhood directly (read-only access used for live verification above).*
