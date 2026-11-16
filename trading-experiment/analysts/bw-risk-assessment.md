# BW Risk Assessment — Bridgewater-Style Risk Report

**Date: 2026-11-16 (Monday), ~13:42 ET** (verified via `TZ=America/New_York date`). Persona file re-read fresh this run — no edits by Jash since the last cycle; mandate, format, stance unchanged. Portfolio figures below are a live, direct `get_portfolio`/`get_equity_positions`/`get_equity_quotes` pull this run (13:42 ET, regular session, tight spreads on all six names), superseding this desk's own 09:42 ET snapshot and every other desk's carry-forward figures.

## OVERALL PORTFOLIO RISK GRADE: **D**

## SINGLE BIGGEST RISK RIGHT NOW: **NVDA reports Q3 FY2027 tomorrow (Tue 11/17, after close, ~5pm ET) — T-1 — Colette Kress's first earnings call as interim CEO, with the Huang board investigation still open and a House Committee closed-door briefing landing the very next day (11/18).** This remains the largest position in the book (9.20% of equity), now **-22.78% unrealized** and **-13.60% below its own $180 contingency-plan revisit line** (a breach running continuously since 11/9), heading into a binary event the options market is pricing at an unusually wide ±7.9-10.6% implied move — on a company run, for the first time ever, by someone other than Jensen Huang. No hedging tool in this equities-only book touches that risk directly, and the book sits through it fully exposed, by design, into the close tonight.

---

## Live portfolio snapshot (direct pull this run, 13:42 ET)

| Ticker | Qty | Live Price | Avg Cost | Unrealized | Equity Wt | Pool Wt |
|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $155.525 | $201.40 | **-22.78%** | 9.20% | 8.03% |
| VTI | 0.036690 | $363.91 | $370.40 | -1.75% | 31.81% | 27.78% |
| VXUS | 0.154525 | $81.065 | $84.13 | -3.64% | 29.84% | 26.06% |
| OMCL | 0.106405 | $34.56 | $46.99 | **-26.45%** | 8.76% | 7.65% |
| XLE | 0.086775 | $63.735 | $57.62 | **+10.61%** | 13.18% | 11.51% |
| GEHC | 0.036393 | $83.34 | $68.69 | **+21.32%** | 7.23% | 6.31% |

Cash $56.10 (deployable $6.10, 12.69% of pool). Total account $98.0791. Pool (trading capital only) ≈ **$48.0791, a -$1.9209 (-3.84%) accumulated loss** — essentially flat vs. this morning's -2.95% reading drifting worse through the session, with NVDA, VTI, VXUS, OMCL and XLE all red on the day and only GEHC green.

**Mechanical triggers checked this run, all current readings:**
- NVDA+OMCL combined concentration: **17.96% of equity** (25% trigger) — 7.04pp buffer, clean, and the widest on record — purely because both names keep falling in dollar terms, not because risk is actually lower.
- NVDA $180 contingency-plan line: **-13.60%** below it ($155.525 vs $180) — breached continuously since 11/9, essentially flat vs. this morning's -10.45% read having deepened through the day; status unchanged, no fresh fire. Tomorrow's print is the real decision point, not today's level.
- OMCL $35.24 bear-case floor: **-1.93% below it** ($34.56 vs $35.24) — this is now a **third consecutive trading session** trading below the line (11/12 close $34.95, 11/13 close $35.03, today intraday deeper still), with today's own close not yet determined (markets close ~4pm ET, ~18 minutes from this report... correction, ~2h18m). Five-plus structural re-reads this week have found no company-specific cause. Still resolves to HOLD per the contingency plan's own design — but this desk said this morning that a fourth consecutive sub-floor close should itself trigger an explicit review of whether $35.24 is still the right anchor, and no desk has yet committed to doing that review even conditionally. Naming it again, plainly: a floor that the stock has now lived below for three straight sessions without ever being revisited is not functioning as a floor.
- GEHC pool weight 6.31% vs. BR's 4% target: **+2.31pp**, now only **1.19pp from the 7.5% partial-trim trigger** — the closest live gate in the book, and reaffirmed "unchanged" by BR for 15-16 consecutive cross-desk reports without BR itself posting anything since Friday 11/13 ~15:15 ET (now ~70+ hours stale).
- Rule 6a rate-shock pause: still in effect, ~11bp from its 4.75% reopening threshold on the reconciled ~4.86-4.87% 10yr figure. Moot for any decision tonight regardless.
- OMCL DCA gate (rule 18): accumulated loss -$1.9209, **$4.42 away** from the $2.50 threshold — deeply negative, not fired, essentially the widest reading on record.

**Dedicated fresh WebSearch this run** (NVDA/Huang/Kress; OMCL; 10yr/options implied move) found **nothing dated to today** beyond what JPM (08:22 ET), GS (11:43 ET) and MS (09:17 ET) already have on file — the team's chronic same-day dateline wall holds again, for the hundred-plus-th consecutive run. No new structural fact on either NVDA or OMCL exists as of this report.

---

## Heat map summary

| Risk Category | Level | Driver |
|---|---|---|
| **Single-name event risk (NVDA)** | 🔴 **CRITICAL** | Earnings T-1 (tomorrow AMC), untested interim CEO, unresolved board investigation, House briefing day after print, position already -22.78% unrealized |
| **Single-name structural drift (OMCL)** | 🟠 **HIGH** | 3rd consecutive session below bear-case floor, deepest unrealized loss in the book (-26.45%), no structural cause found, floor's own credibility now in question |
| **Concentration — single satellite names (GEHC)** | 🟡 **MEDIUM** | +2.31pp over target, 1.19pp from trim trigger, 15-16th consecutive reaffirm-unchanged, allocation owner (BR) silent 70+ hours |
| **Concentration — correlated idiosyncratic (NVDA+OMCL)** | 🟢 **LOW-MEDIUM** | 17.96% of equity, 7.04pp buffer — widest on record, but widened only because both losing names fell further, not a risk reduction |
| **Sector concentration (AI/semis look-through)** | 🟠 **HIGH** | ~20-22% of equity once VTI/VXUS internal tilt is counted — this book's largest systematic bet, unhedged into tomorrow's print |
| **Sector concentration (Healthcare: OMCL+GEHC)** | 🟡 **MEDIUM** | ~16% direct equity, still at opposite extremes (one near-worst-ever loss, one near-best-ever gain) |
| **Geographic/currency (VXUS, unhedged)** | 🟡 **MEDIUM** | 29.84% of equity in unhedged ex-US FX exposure, no currency hedge tool available |
| **Interest rate sensitivity (book-wide)** | 🟠 **HIGH** | NVDA/OMCL/GEHC all long-duration growth names; rule 6a pause live; ~11bp from reopening |
| **Liquidity** | 🟢 **LOW** | All six names trading with tight regular-session spreads at this account's size |
| **Hedge effectiveness (XLE)** | 🟡 **MEDIUM** | Doing its job on supply-shock risk, +10.61% unrealized; does NOT cover a demand-driven/recession scenario (rule 9) |
| **Tail/recession risk (pool-level)** | 🟠 **HIGH** | ≈-34% equity / ≈-32% pool bad-year stress estimate, compounding tonight with a live binary event |
| **Dry powder / optionality** | 🟡 **MEDIUM** | Only $6.10 deployable; no hedging instrument available to lean on into tomorrow's print |

---

## 1. Correlation analysis between holdings

- **NVDA and OMCL remain fundamentally uncorrelated right now, and both being deeply red simultaneously is a coincidence of timing, not a shared driver.** NVDA's drawdown is governance-driven (a confirmed CEO resignation, an open board investigation); OMCL's is earnings/guidance-driven (a soft forward print reaction that has simply never recovered). The combined 25% concentration trigger exists precisely to catch the scenario where two genuinely unrelated idiosyncratic bets both go wrong at once — which, this month, is exactly what has happened, even with the dollar-weighted buffer "improving" as both positions shrink.
- **VTI and VXUS remain highly correlated with each other and with the broader market**, and both carry internal exposure to the same AI/semis mega-caps driving NVDA's own volatility — the "diversified core" sleeve (59.84% of equity combined) is not as independent from the NVDA bet as its size suggests, and both are red today alongside NVDA.
- **XLE remains the book's one working negative-to-low-correlation asset relative to the growth/tech cluster**, but only under a supply-side energy-shock regime — during today's broader risk-off session it is also red (-1.9% intraday), a reminder that even a validated hedge participates in a generic macro selloff rather than fully decoupling (rule 9's standing caveat).
- **GEHC and OMCL continue to diverge sharply** (GEHC +21.32% vs. OMCL -26.45%) — further evidence they are not meaningfully correlated despite sharing a "healthcare" label.
- **Net read, unchanged from this morning: the real correlation risk is the shared macro/rate-sensitivity beta running through five of six holdings simultaneously, not any single pair.** Today's broad red session (five of six names down) is that beta showing up in real time, the day before the book's highest-stakes single event.

## 2. Sector concentration risk, with percentage breakdown

| Sector (approximate, incl. look-through) | % of Equity | Note |
|---|---|---|
| AI / Semiconductors | **~20-22%** | NVDA direct (9.20%) + estimated internal VTI/VXUS mega-cap tilt — this book's single largest systematic bet |
| Healthcare (OMCL + GEHC direct, + VTI/VXUS sector weight) | **~16-20%** | OMCL 8.76% + GEHC 7.23% direct, plus typical ~12-13% market-cap sector weight embedded in the core sleeve |
| Energy | **~15-17%** | XLE 13.18% direct, plus ~4-5% typical core-sleeve energy weight |
| Broad diversified core (VTI+VXUS, ex-tilt) | **61.65%** direct | Genuinely diversified at the index level, but not independent of the sector bets above once look-through is counted |

**The real concentration story remains AI/semis, not NVDA's 9.20% headline alone** — and that exposure sits unhedged and unrevisited 16 hours before the single most consequential print in this book's history.

## 3. Geographic exposure and currency risk factors

- **~70.16% of equity is US-domiciled** (VTI, NVDA, OMCL, XLE, GEHC).
- **29.84% (VXUS) is unhedged ex-US exposure** — multi-currency, no hedge instrument available. A flight-to-quality USD rally (plausible if tomorrow's print or governance overhang worsens broad sentiment) would compress VXUS returns independent of underlying equity performance.
- No material change in country/currency mix this run; still a second-order risk relative to the book's single-name exposures.

## 4. Interest rate sensitivity, by position

| Position | Duration/sensitivity | Why |
|---|---|---|
| NVDA | **High** | Long-duration growth name; MS's own model shows a single Rf input change moving fair value materially — rate moves are first-order, not noise |
| OMCL | **High** | Small-cap growth-multiple name; net-cash balance sheet avoids refinancing risk, but the equity multiple itself is rate-sensitive |
| GEHC | **Medium-High** | ~$7.1B net debt plus a growth multiple — rate moves hit both the discount rate and (modestly) borrowing costs |
| XLE | **Low-Medium** | Value/cash-flow sector, more commodity-price-dependent than multiple-dependent |
| VTI | **Medium-High** | Cap-weighted index with meaningful mega-cap-growth tilt; more rate-sensitive than a naive "broad market" label implies |
| VXUS | **Medium** | More value/financials-weighted internationally, somewhat less rate-sensitive, but not immune |

**Book-wide: four of six holdings carry real rate sensitivity, and rule 6a's pause (~11bp from its 4.75% reopening threshold on the reconciled ~4.86-4.87% 10yr figure) remains the correct standing response** — live and close, not a dormant number.

## 5. Recession stress test — estimated drawdown

Carrying forward the standing estimate: **≈-34% of equity, ≈-32% of the pool (original $50 base) in a genuine broad-recession tail scenario** — magnitude unchanged, but worth restating plainly tonight: a recession-style multiple-compression scenario and a bad-NVDA-print scenario are not mutually exclusive, they would compound, and this book has zero instruments that would cushion either one, let alone both landing in the same week.

## 6. Liquidity risk rating, by holding

| Holding | Rating | Note |
|---|---|---|
| VTI | **Very Low risk** | Mega-ETF, tight spreads at all hours |
| VXUS | **Very Low risk** | Same |
| NVDA | **Very Low risk** | Mega-cap, tight spreads even through this month's volatility |
| XLE | **Low risk** | Large sector ETF, tight regular-session spreads |
| GEHC | **Medium risk** | Fine intraday; has shown wide premarket bid/ask repeatedly |
| OMCL | **Medium risk** | Fine in regular session at this account's size; smaller float, wider spreads under stress |

At this account's current dollar sizes, liquidity is not a live constraint on any position tonight.

## 7. Single stock risk and position sizing recommendations

- **NVDA (9.20% equity):** In-band against every stated trigger, but "in-band" continues to undersell the risk — a single name, under new and untested leadership, with an open investigation, going into a binary event tomorrow carrying an options-implied move of ±7.9-10.6%. **Recommendation, unchanged and sharpened: no pre-print action (correctly blocked by rule 6a/rule 20 regardless), but this desk again flags that if tomorrow's print produces a clean beat-and-pop, that is the moment to actually revisit whether 9.20%/8.03% is still the right size for a name carrying this much idiosyncratic, non-fundamental risk — not an argument to add, an argument to consider trimming into strength. This has now been said twice; it should not need a third.**
- **OMCL (8.76% equity):** Three consecutive sessions below its own bear-case floor, with a fourth likely tonight on current price action. **Recommendation, repeated from this morning because nothing has changed it: this desk is not calling for a trim — no structural cause exists — but a floor the position has lived below for three-plus straight sessions is a floor the team should explicitly re-examine, not one that should simply keep absorbing new "still not fired" readings indefinitely.**
- **GEHC (7.23% equity, 6.31% pool):** Now 1.19pp from its own stated trim trigger, reaffirmed unchanged for 15-16 consecutive cross-desk reports, with BR — the trigger's owner — silent for 70+ hours. **This desk's radical-transparency read, stated plainly: a trigger nobody has touched in sixteen reports while the position keeps drifting closer to it is not disciplined patience anymore, it is an unmonitored gate. Recommend BR resolve this explicitly at its next report — tighten the band, widen the target, or affirmatively re-confirm with a fresh number — rather than let a 17th reaffirmation happen by default through continued silence.**

## 8. Tail risk scenarios, with probability estimates

| Scenario | Rough probability | Impact |
|---|---|---|
| NVDA "beat but sell off" repeat (2 of last 4 prints) compounded by an uncertain first Kress call | **~30-35%** | -10% to -20% single-session move on NVDA; -1 to -2pp pool |
| NVDA clean beat-and-pop, governance overhang eases | **~25-30%** | +10-15% single-session move; partial unwind of the governance discount |
| Governance investigation surfaces a material finding or further leadership disruption | **~5-10%** | NVDA re-rates toward MS's bear case ($57.5/sh, -63% from today) — the book's single most severe plausible single-name event |
| OMCL posts a fourth consecutive sub-$35.24 close tonight with no structural cause | **~55-65%** | No immediate action per policy, but should trigger the floor-recalibration review named in item 7 |
| A genuine OMCL structural break surfaces (none found in 5+ re-reads to date) | **~10%** | Could test levels meaningfully below $35.24; nothing supports this today |
| Broad AI/semis multiple compression (independent of NVDA's own print) | **~15-20%** over coming weeks | Hits NVDA direct exposure plus the ~20-22% look-through tilt in the core sleeve simultaneously |
| Rate shock back toward/above 5% on the 10yr | **~10-15%** | Pressures NVDA/OMCL/GEHC multiples together; extends rule 6a's pause |

## 9. Hedging strategies to reduce the top 3 risks (equities-only toolbox, no options)

1. **For NVDA event risk:** no direct hedge exists in this toolbox. The only available lever is sizing — see item 7's repeated recommendation to revisit size *after* the print, not before. Not recommending a pre-print trim (would break the team's own validated "no same-minute decisions" discipline); naming plainly that this is a risk the book is carrying fully uninsured into the close tonight.
2. **For OMCL's sustained bear-floor drift:** once the DCA gate eventually fires, size the first tranche smaller than rule 18 currently contemplates, given the floor has proven less durable in practice than when it was set — a structural hedge via sizing discipline rather than an instrument.
3. **For AI/semis concentration (the real top risk once look-through is counted):** the next incremental core-sleeve dollar should route toward a genuinely defensive, non-correlated sleeve (staples, utilities, broad value) rather than defaulting to VXUS, which still carries meaningful global mega-cap/tech exposure — specifically to address the demand-driven/recession tail that XLE does not cover.
4. **XLE remains the book's one working hedge** — for the Hormuz/supply-shock scenario specifically. No change recommended; continue to not treat it as general-purpose (rule 9).

## 10. Rebalancing suggestions with allocation percentages

- **No trade recommended by this desk today** — research/risk-advisory only, per mandate, and nothing here should preempt tomorrow's print.
- **If sizing is revisited post-print (per item 7):** consider tightening the NVDA+OMCL combined concentration trigger from 25% to **~20% of equity** — the current 17.96% reading is already close to a tightened line, which is the point: a trigger should bind sometimes, not just exist as a number nobody expects to see again.
- **GEHC:** recommend BR resolve the 7.5% trigger question explicitly at its next report rather than let a 17th reaffirmation happen by silence — either tighten the band now that the position is 1.19pp away, or widen the stated target to match where it has actually settled.
- **OMCL:** recommend the team commit now, in writing, to reviewing the $35.24 floor's calibration at the first run that confirms a fourth consecutive sub-floor close — not as a trim decision, as a floor-recalibration decision, independent of any trade.
- **Next incremental cash dollar:** this desk again recommends a defensive/non-correlated sleeve over the standing VXUS default, to address the recession-tail gap named in items 5 and 9.

---

## Stance note (radical transparency)

The team continues to handle this month's NVDA governance crisis with real discipline — no same-minute reactions, a validated contingency framework holding under genuine pressure. That is still true and still worth saying. But plainly, tonight: **this book is roughly sixteen hours from the single highest-stakes binary event in its history, in its largest position, carrying a -22.78% unrealized loss on that position already, with zero instruments to insure against tomorrow's outcome, and a sizing framework that still has not been revisited since before any of this month's facts existed.** "No pre-print action" is the correct call under the team's own discipline. It is not the same thing as "no risk," and it is not the same thing as "nothing left to fix." Two structural governance gaps are sitting unresolved tonight, not because anyone disagrees with this desk, but because nobody has actually closed them: **OMCL's bear-case floor is about to see its fourth consecutive session traded below it with no commitment yet to review whether it's still the right number, and GEHC's trim trigger has now been "reaffirmed unchanged" sixteen times with its own policy owner silent for three days.** Grade **D** reflects a correctly-managed, genuinely elevated-risk night — not a complacent one, and not a disaster either — but a grade that will not improve further while plainly-named, repeatedly-flagged process gaps keep being renewed by default instead of decided.

---

*Prepared by the BW Risk Assessment persona. Sources this run: live Robinhood pulls (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`, account 424593861, 13:42 ET); this run's WebSearch (NVDA/Huang/Kress governance status, OMCL news, 10yr/options-implied-move check — nothing dated to 2026-11-16 found beyond what the other four desks already carry). Internal: trading-experiment/state.md (positions, contingency plans, standing rules), analysts/jpm-earnings-analyzer.md (2026-11-16 ~08:22 ET), analysts/gs-stock-screener.md (2026-11-16 ~11:43 ET), analysts/ms-dcf-valuation.md (2026-11-16 ~09:17 ET), analysts/br-portfolio-builder.md (2026-11-13 ~15:15 ET, now ~70+ hours stale — the one silent desk).*
