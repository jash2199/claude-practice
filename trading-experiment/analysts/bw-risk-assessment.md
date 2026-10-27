# BW Risk Assessment — Risk Management Report
**Date: 2026-10-27 (Tuesday), ~10:55 ET.** Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time. Four fresh WebSearches this run (GEHC news, FOMC odds, Brent crude, OMCL news) reproduced the same chronic dateline wall every desk has logged for 45+ consecutive runs — nothing reliably dated 2026-10-27 found for GEHC, OMCL, or Brent; FOMC hold/hike odds (~83-87% hold, ~13-17% hike, cut effectively off the table) are directionally unchanged from the figures already on file across the team. Treat all macro/news inputs as stale-but-directional; live Robinhood prices govern.

---

## Overall Portfolio Risk Grade: **D** (held flat vs. yesterday's 10/26 downgrade from C-)

One specific item behind yesterday's downgrade has actually been **resolved**: BR (the OMCL DCA gate's rule owner) filed its 10/26 ~16:12 ET report and explicitly ratified the gate-in-window addendum this desk and GS both pushed for — a gate-fire between now and the first post-10/29-print run is honored as a mandatory review, with execution deferred past the print. That governance gap is closed; credit where due. But the grade does not improve, because the thing that mattered more — **the FOMC/GEHC/OMCL event cluster** — has only gotten tighter and more live since yesterday: GEHC's print is now **under 24 hours away** (before tomorrow's open), the Fed's decision lands the **same calendar day** (2:00pm ET), and OMCL follows 24 hours after that. A closed governance ticket does not offset a catalyst cluster that just moved from "48-72 hours out" to "inside one trading day." This grade holds at D because the book is entering the most acute 30-hour window it has faced to date, with zero options-hedging capability and one position (GEHC) now showing unexplained acceleration lower heading straight into its own print.

## Single biggest risk right now

**GEHC is down -2.32% intraday as of this report — its worst single-session move in recent memory, with no sourced catalyst found in a dedicated search — landing less than 24 hours before its own earnings print, which itself lands the same calendar day as the FOMC's rate decision.** Nobody on this team has found a fundamental reason for today's move; it may be nothing more than pre-print de-risking, but "no explanation found" one day before a binary event is itself a data point, not a reason to relax. The silver lining is mechanical: GEHC's pool weight has actually *fallen* to 5.06% (from ~5.18% Monday) as the price has dropped, moving it further from BR's 6%-pool earnings-window trigger rather than closer — so no cap is at risk of breaching. The risk here is not a sizing-trigger risk, it's a **binary-event-timing risk with zero hedge available**, and it is now inside the shortest fuse this book has ever logged.

---

## Portfolio Snapshot (live, 2026-10-27 ~10:55 ET)

| Holding | Qty | Avg Cost | Live Price | Day Chg | Mkt Value | % Equity | % Pool | Unrealized P&L |
|---|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $201.40 | $217.67 | +0.77% | $5.40 | 12.13% | 10.67% | **+8.08%** |
| VTI | 0.036690 | $370.40 | $377.20 | +0.43% | $13.85 | 31.08% | 27.33% | +1.84% |
| VXUS | 0.154525 | $84.13 | $83.21 | +0.70% | $12.86 | 28.87% | 25.39% | -1.09% |
| OMCL | 0.106405 | $46.99 | $36.96 | -0.03% | $3.93 | 8.83% | 7.77% | **-21.33%** (largest loss) |
| XLE | 0.086775 | $57.62 | $68.51 | **-1.63%** | $5.94 | 13.34% | 11.74% | **+18.89%** (largest gain) |
| GEHC | 0.036393 | $68.69 | $70.31 | **-2.32%** (worst mover) | $2.56 | 5.75% | 5.06% | +2.36% |
| Cash | — | — | — | — | $56.10 | — | 12.04% | n/a |

Total account value **$100.6379** (equity $44.5379 + cash $56.10). Trading pool (= total − $50 reserve) **≈$50.64**, accumulated profit **≈+$0.64 (+1.27%)**. NVDA+OMCL combined: **20.96% of equity** (25% concentration trigger, ~4.04pp buffer — clean). NVDA single-name: **12.13% of equity** (18-20% trigger — clean, wide buffer). OMCL DCA gate (rule 18): needs **≈+$1.86** more profit to hit the $2.50 threshold — pool must rise to ~$52.50, a further **+3.66%** — essentially unchanged from yesterday, not imminent. GEHC pool weight **5.06%** vs. its 6% earnings-window soft cap — **0.94pp buffer, widening today as the price falls**, not narrowing.

---

## Heat Map — By Holding

| Holding | Pool Wt | Concentration Risk | Valuation/Multiple Risk | Rate Sensitivity | Liquidity Risk | Binary Event Risk (next 30h) | **Overall** |
|---|---|---|---|---|---|---|---|
| NVDA | 10.67% | 🟡 Medium | 🔴 High (MS: ~-11% gap, widening) | 🔴 High | 🟢 Very Low | 🟢 Low (no print, next ~11/18) | 🟡 **Medium-High** |
| VTI | 27.33% | 🟢 Low (diversified) | 🟡 Medium | 🟡 Medium | 🟢 Very Low | 🟡 Medium (FOMC same week) | 🟡 **Medium** |
| VXUS | 25.39% | 🟢 Low | 🟢 Low-Medium | 🟡 Medium (FX) | 🟢 Low | 🟡 Medium (FOMC/USD) | 🟡 **Medium** |
| OMCL | 7.77% | 🟡 Medium (DCA-gate magnet) | 🟢 Low (MS: cheap, +31% gap) / 🔴 High (thesis execution) | 🔴 High | 🟡 Medium (smaller-cap) | 🔴 **Critical** (print 10/29, 2 days out) | 🔴 **High** |
| XLE | 11.74% | 🟡 Medium (100% single-sector) | 🟡 Medium (MS gap -8.41%, easing but still widest on sheet) | 🟢 Low-Medium | 🟢 Low | 🟢 Low (no print) | 🟡 **Medium** |
| GEHC | 5.06% | 🟢 Low (drifting *away* from 6% cap today) | 🟢 Low-Medium (MS: -10.53% gap) | 🟡 Medium | 🟢 Low | 🔴 **Critical** (print <24h, same day as FOMC, unexplained -2.32% today) | 🔴 **High** |
| Cash | 12.04% | ⚪ None | ⚪ n/a | 🟢 Benefits | ⚪ None | 🟡 Low (fuels DCA gate mechanically) | 🟢 **Low** |

## Heat Map — By Risk Category (book-wide)

| Risk Category | Level | Driver |
|---|---|---|
| Correlation / factor concentration | 🔴 High | NVDA + VTI/VXUS's embedded tech weight + GEHC/XLE's own growth-adjacent betas mean the book behaves like one AI/growth/risk-on factor more than six distinct names — confirmed again today: NVDA/VTI/VXUS all green together on apparent FOMC-relief positioning, zero diversification benefit showing up intraday on the "risk-on" leg |
| Sector concentration | 🟡 Medium-High | Look-through Tech/semis ≈ **22.97% of pool** (see below) once VTI/VXUS's own tech weighting is counted, not just NVDA's 10.67% headline |
| Geographic / currency | 🟢 Low-Medium | ~75% USD-direct, 25% in VXUS's multi-currency basket — contained and intentional |
| Interest-rate sensitivity | 🔴 High | No fixed income; book is net long the "FOMC doesn't shock the system tomorrow" bet, with the decision now same-day as GEHC's print |
| Recession / macro drawdown | 🔴 High | See stress test — estimated 25-32% pool drawdown in a classic recession scenario |
| Liquidity | 🟢 Low | All six names are liquid large/mid-caps or major ETFs; OMCL is the one relatively thinner name, still immaterial at this position size |
| Single-stock / sizing discipline | 🟢 Medium-Low | No breach of any hard cap; GEHC is now moving *away* from its soft cap, not toward it — the one genuine improvement this run |
| Tail / event risk (next 30 hours) | 🔴 **Critical** | GEHC print (<24h) + FOMC decision (same calendar day, 2:00pm ET) stacked in one session, OMCL print 24h after that — the tightest clustering this book has recorded |
| Mechanical governance | 🟢 Low (resolved this cycle) | BR's 10/26 ~16:12 ET ratification of the gate-in-window addendum closes the specific cross-desk ask; watch that BR's cadence doesn't lapse again heading into the print window |

---

## 1. Correlation Analysis Between Holdings

This book remains **less diversified than six tickers suggests**. NVDA, VTI (cap-weighted, ~30%+ tech), and VXUS (smaller but nonzero tech weight) all share meaningful exposure to the same AI/growth/risk-on factor; GEHC and OMCL, while nominally "healthcare," are both growth-multiple names whose valuations (per MS's DCFs) move with the same discount-rate assumptions that move NVDA's. Today's tape reinforces this: NVDA (+0.77%), VTI (+0.43%), and VXUS (+0.70%) are all green together on what looks like pre-FOMC risk-on positioning — three "different" holdings moving as one factor. The one genuine low-correlation sleeve is **XLE**, down -1.63% today while the rest of the book rallies — a real divergence, but in the *wrong direction to be useful*: a hedge is valuable when it rises while risk assets fall, not when it falls on a day risk assets rise. Today's XLE move looks like an oil-specific pullback, not hedge behavior being validated. **GEHC's -2.32% move, uncorrelated with the rest of the green tape today, is the most interesting data point in the book right now** — it is moving on its own idiosyncratic (likely pre-earnings) dynamic, which is exactly the kind of single-name dispersion that is briefly healthy for diversification but concerning sixteen hours before a print. Cash (12.04% of pool) remains the only position with genuinely zero correlation to the rest of the book.

## 2. Sector Concentration

Direct, face-value sector exposure:
- **Technology/Semiconductors (NVDA):** 10.67% of pool
- **Healthcare (OMCL software + GEHC medtech):** 12.83% of pool combined
- **Energy (XLE):** 11.74% of pool
- **Diversified/all-sector (VTI + VXUS):** 52.72% of pool
- **Cash:** 12.04% of pool

That face-value breakdown undersells the real exposure. VTI's own cap-weighted index is roughly ~30-32% Technology; VXUS's is roughly ~13-14%. Look-through math: NVDA (10.67%) + VTI's embedded tech (27.33% × ~32% ≈ 8.75%) + VXUS's embedded tech (25.39% × ~14% ≈ 3.55%) ≈ **22.97% of pool in Technology/semis alone** — essentially unchanged from yesterday's 22.8% and still roughly double the headline NVDA number. This remains the real concentration risk in this book and the correct number for BR's 10/19 core-tilt policy to keep targeting.

## 3. Geographic Exposure and Currency Risk

~75% of the book is US-domestic direct exposure (NVDA, OMCL, XLE, GEHC, VTI). The sole international sleeve is **VXUS at 25.39% of pool** — the intended, by-design currency/geography diversifier. GEHC, though US-listed, carries real China/tariff/global-supply-chain exposure embedded in its revenue — a reminder that "US-listed" is not the same as "no currency/geography risk," and relevant heading into tomorrow's print given tariff-cost commentary is one of the metrics to watch. A broad USD-strength episode (plausible on a hawkish Fed surprise, or as a flight-to-dollar reflex if tomorrow's session turns risk-off) would be a headwind specifically to the VXUS leg.

## 4. Interest Rate Sensitivity (per position)

| Position | Sensitivity | Why |
|---|---|---|
| NVDA | **High** | Long-duration growth multiple; MS's DCF gap (~-11%, widening) is a discount-rate-sensitive number by construction |
| OMCL | **High** | Same long-duration-cash-flow profile, compounded by weak current FCF conversion |
| VTI | Medium | Blended index duration; moves with the aggregate market's rate sensitivity |
| VXUS | Medium | Adds a second channel — USD strength from US rate moves pressures VXUS's USD-translated return |
| GEHC | Medium | Moderate-duration medtech; hospital capex (its revenue driver) is itself financing-cost-sensitive |
| XLE | Low-Medium | Value/cyclical, shorter-duration cash flows; direct rate sensitivity low, indirect via growth/oil-demand channel |
| Cash | **Inverse (benefit)** | Higher rates = more yield on the $56.10 cash balance |

The book is **net long the "Fed doesn't shock the system tomorrow" bet**, concentrated in exactly the two names (NVDA, OMCL) with the longest-duration cash-flow profiles, landing in the same 48-hour window as both their own earnings prints and the rate decision itself.

## 5. Recession Stress Test

Applying rough, standard macro-stress assumptions by name (directional, off historical sector drawdowns, not a formal model):

**Demand-driven recession (classic scenario — broad slowdown, oil demand falls with everything else):**
NVDA -50%, VTI -30%, VXUS -35%, OMCL -40%, XLE -40%, GEHC -25%.
Weighted pool impact ≈ **-31.4pp → estimated pool drawdown of ~31-32%**, i.e. the ~$50.64 pool would fall to roughly **$34.69**. In dollar terms on this account's actual size, that's a ~$16 loss — small in absolute terms, but the process lesson (is the book actually positioned for a real recession, not a pullback) is what matters at any scale.

**Stagflation/supply-shock recession (oil stays elevated even as broader demand weakens — the scenario XLE is nominally held against):**
Same assumptions except XLE +15% instead of -40%.
Weighted pool impact ≈ **-24.8pp → estimated drawdown of ~25%**. XLE's hedge, *if it behaves as designed*, cushions roughly 6-7pp of pool-level loss versus the demand-driven case.

**The caveat that matters, reinforced by today's tape:** XLE fell -1.63% today while the rest of the risk-on complex rallied — the opposite of "hedge working." That is one session of noise, likely oil-specific, not evidence against the stagflation-scenario thesis. But it is one more data point in a pattern (a catalyst-free rally the desk has flagged for over a week, now a catalyst-free pullback) suggesting XLE's price action is currently decoupled from any clean narrative in either direction. The stress test above should be read as "XLE was *intended* to cushion ~6-7pp," not as a confirmed, currently-validated property of the position.

## 6. Liquidity Risk Rating (per holding)

| Holding | Rating | Why |
|---|---|---|
| NVDA | Very Low | One of the most liquid single stocks on earth |
| VTI | Very Low | Among the largest, most liquid ETFs in existence |
| VXUS | Low | Large, liquid international ETF |
| XLE | Low | Large sector ETF, high daily volume |
| GEHC | Low | Large-cap, adequate daily volume |
| OMCL | **Medium** | Smaller mid/small-cap name, thinner average volume, wider spreads especially around its own earnings print — the one genuinely less-liquid name in the book |
| Cash | None | Fully liquid |

At this book's actual dollar sizes ($2.56-$13.85 per position), liquidity risk is close to immaterial in practice. OMCL's medium rating is worth carrying forward for if/when this book scales, not as an actionable concern today.

## 7. Single Stock Risk and Position Sizing Recommendations

- **GEHC (5.06% of pool):** The one name moving meaningfully today, and the one with the nearest, highest-stakes catalyst (print <24h, same day as FOMC). **Its pool weight is now falling, not rising — the opposite of yesterday's "watch for a trim" framing.** With the weight already receding on its own and BR having explicitly declined to authorize a pre-print trim (10/26, correctly citing rule 1 — don't trade a binary event on anticipation alone), there is no sizing action to recommend here today. **This desk's only addition to BR's stance: if GEHC's unexplained slide continues into the close today with still no sourced catalyst, that is worth a dedicated check for rumor/leak risk ahead of tomorrow's print** — not a reason to trim, but a reason for the next run to search harder before the print lands, not just after.
- **OMCL (7.77% of pool):** Unchanged — the book's one demonstrated sizing mistake (bought on a clock, not a setup), simultaneously the cheapest name on MS's sheet and the most mechanically exposed one this week. **Recommendation unchanged: do not add before Thursday's print, including if the DCA gate fires — the gate-in-window addendum (now ratified by both BR and the trader) correctly defers execution past the print.**
- **NVDA (10.67% of pool / 12.13% of equity):** Comfortably inside its 18-20% single-name and 25% combined-with-OMCL triggers. No sizing change warranted.
- **XLE (11.74% of pool):** No single-name risk (24-holding ETF), but today's -1.63% move without a sourced catalyst, on a day the rest of the risk-on book rallied, is a reminder that this "hedge" has been directionless and catalyst-free for over a week in both directions now. Still no case to add or trim.
- **VTI / VXUS:** Both sit close to their pool targets (VTI +1.33pp over, VXUS -1.61pp under — neither near the 5pp drift trigger). No sizing issue.

## 8. Tail Risk Scenarios (with rough probability estimates)

| Scenario | Rough probability | Impact if it happens |
|---|---|---|
| GEHC earnings miss/guidance cut (before open 10/28, <24h out) | ~20-25% | Direct hit to a position already showing unexplained weakness today; bear case per JPM is -8% to -15% (~$61-66), back toward BW's $62 stop-loss |
| FOMC hikes 25bp (vs. ~83-87% consensus hold) | ~13-17% | Risk-off shock to NVDA/OMCL's long-duration multiples, landing the *same day* as GEHC's print — the two could compound within one session |
| OMCL "beat but soft guide, sell off anyway" repeat (10/29) | ~30-35% | This is the pattern from OMCL's last print (beat both lines, guided softer, stock gapped -13%); base rate is uncomfortably high for a name already -21.3% underwater |
| OMCL DCA gate fires inside the 10/27-10/29 window | ~10-15% | Requires a further +3.66% pool rally in ~2 trading days from current levels — not the base case; governance response already pre-decided (defer execution) |
| GEHC's unexplained -2.32% today is rumor/leak-driven, not noise | ~10% | Would mean tomorrow's print reaction is partially pre-priced already — a scenario worth a dedicated post-close search tonight if any desk has bandwidth |
| Renewed Hormuz/oil escalation | ~10% | Would likely help XLE and hurt everything else — a genuine test of whether the hedge is still real, after today's move argued the opposite |
| Hawkish rate-shock reigniting rule 6a's underlying concern | ~15% | Extends the existing new-core/NVDA-add pause rather than creating new exposure — the book's safety valve, not a new risk |

## 9. Hedging Strategies — Top 3 Risks (equities-only toolbox, no options available)

1. **The GEHC/FOMC/OMCL 30-72 hour event cluster, now at its closest point yet.** The cheapest, most effective hedge available to a $100 account with no options remains **not deploying the ~$6.10 deployable cash through this window** — already standing policy, and this desk's explicit recommendation is to keep doing exactly that through both tomorrow's GEHC/FOMC session and Thursday's OMCL print, rather than treat a dovish-hold confirmation alone as a green light to deploy before OMCL's print has also cleared.
2. **NVDA+OMCL / look-through AI-growth factor concentration (~22.97% of pool).** BR's 10/19 core-tilt policy (next core dollar to VXUS, not pro-rata) remains the only equities-only lever that reduces this exposure without touching the satellite names directly. No change recommended.
3. **GEHC's idiosyncratic pre-print weakness with no identified source.** The equities-only-toolbox equivalent of a hedge here is informational, not positional: **this desk recommends the next scheduled run (ideally one that lands before tomorrow's 8:30am ET call) run one more dedicated GEHC search specifically for rumor, leak, or sell-side-note-driven explanations of today's move** — cheap, costs nothing, and would meaningfully change how the print reaction should be read if a source turns up. Absent that, no positional hedge is warranted; the structural-break-only contingency plan already on file is the correct mechanism for the actual print reaction.

## 10. Rebalancing Suggestions (allocation %, pool basis)

| Sleeve | Current | BR Target | Drift | Action |
|---|---|---|---|---|
| VTI | 27.33% | 26% | +1.33pp | Hold — inside band |
| VXUS | 25.39% | 27% | -1.61pp | Hold — inside band |
| NVDA | 10.67% | 10% | +0.67pp | Hold — inside band, per rule 20 |
| XLE | 11.74% | 12% | -0.26pp | Hold — essentially on target |
| GEHC | 5.06% | 4% (soft; 6% earnings-window cap) | +1.06pp vs. base target | **Hold** — drifting *away* from the soft cap today; BR's decline-to-trim stance is reaffirmed, not revisited |
| OMCL | 7.77% | 10% (DCA-gate funded) | -2.23pp | No action — underweight is by design, gated behind the DCA mechanism |
| Cash | 12.04% | 11% | +1.04pp | Hold flat through 10/27-29 by design |

**No position breaches the 5pp drift trigger. No rebalancing trade is warranted today.** The one change from yesterday's framing: GEHC is no longer a "watch for a trim" item — its weight is falling on its own, and this desk now has nothing to add to BR's no-trim stance. The sole live watch item is the informational one in Section 9 (a dedicated GEHC rumor/leak search before tomorrow's print), and the standing instruction that the cash buffer stays untouched until the full FOMC/GEHC/OMCL cluster has cleared.

---

*No trade recommended off this report — research and risk-governance only, per mandate. This desk does not place trades or touch Robinhood directly (read-only access used for live verification above).*
