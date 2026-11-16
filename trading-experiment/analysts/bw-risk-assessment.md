# BW Risk Assessment — Bridgewater-Style Risk Report

**Date: 2026-11-16 (Monday), ~09:42 ET** (verified via `TZ=America/New_York date`). Persona file re-read fresh this run — no edits by Jash since the last cycle; mandate, format, stance unchanged. Portfolio figures below are a live, direct `get_portfolio`/`get_equity_positions`/`get_equity_quotes` pull this run (09:42 ET, regular session, tight spreads on all six names — not a premarket artifact), the freshest full snapshot on file, superseding BR's/GS's Friday 11/13 ~13:42-14:42 ET carry-forward figures.

## OVERALL PORTFOLIO RISK GRADE: **D**

## SINGLE BIGGEST RISK RIGHT NOW: **NVDA reports Q3 FY2027 tomorrow (Tue 11/17, after close, ~5pm ET) — T-1 — Colette Kress's first earnings call as interim CEO, with the Huang investigation still open and a House Committee briefing landing the very next day (11/18).** This is the largest position in the book (9.44% of equity), already down -19.96% unrealized and -10.45% below its own $180 contingency-plan revisit line, heading into a binary event the options market is pricing at an unusually wide ±7.9-10.6% implied move — on a company now run, for the first time ever, by someone who isn't Jensen Huang. No hedging tool in this equities-only book can touch that risk directly.

---

## Live portfolio snapshot (direct pull this run, 09:42 ET)

| Ticker | Qty | Live Price | Avg Cost | Unrealized | Equity Wt | Pool Wt |
|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $161.19 | $201.40 | **-19.96%** | 9.44% | 8.25% |
| VTI | 0.036690 | $367.735 | $370.40 | -0.72% | 31.80% | 27.80% |
| VXUS | 0.154525 | $81.695 | $84.13 | -2.89% | 29.75% | 26.02% |
| OMCL | 0.106405 | $34.6475 | $46.99 | **-26.27%** | 8.69% | 7.60% |
| XLE | 0.086775 | $64.17 | $57.62 | **+11.37%** | 13.12% | 11.48% |
| GEHC | 0.036393 | $83.86 | $68.69 | **+22.08%** | 7.20% | 6.29% |

Cash $56.10 (deployable $6.10, 12.57% of pool). Total account $98.5245. Pool (trading capital only) ≈ **$48.5245, a -$1.4755 (-2.95%) accumulated loss** — modestly worse than Friday's -2.38%, driven almost entirely by NVDA's and OMCL's continued slide over the weekend's price action feeding into today's open.

**Mechanical triggers checked this run, all current readings:**
- NVDA+OMCL combined concentration: **18.12% of equity** (25% trigger) — 6.88pp buffer, clean, and wider than last week because both names fell in dollar terms.
- NVDA $180 contingency-plan line: **-10.45%** below it ($161.19 vs $180) — breached since 11/9, status unchanged, no fresh fire; tomorrow's print is the real decision point, not today's level.
- OMCL $35.24 bear-case floor: **-1.68% below it** ($34.6475 vs $35.24) — this is now the **third consecutive trading session** trading below the line (11/12 close $34.95, 11/13 close $35.03, now 11/16 intraday deeper at $34.65), and the deepest breach yet. Five-plus structural re-reads this week found no company-specific cause. Still resolves to HOLD per the contingency plan's own design (price alone isn't the trigger), but the trend is monotonically worse, not stabilizing, and that trend itself is now the thing worth naming plainly.
- GEHC pool weight 6.29% vs. BR's 4% target: **+2.29pp**, now only **1.21pp from the 7.5% partial-trim trigger** — closer than Friday's 1.33pp reading simply because GEHC rose while the pool shrank.
- Rule 6a rate-shock pause: still in effect, ~11bp from its 4.75% reopening threshold on the reconciled ~4.86-4.87% 10yr figure.

**Dedicated fresh WebSearch this run** (Huang/Kress/investigation; OMCL; 10yr/VIX) found **nothing dated to today** beyond what JPM (08:22 ET), GS (08:55 ET) and MS (09:17 ET) already have on file — the team's chronic same-day dateline wall holds again. No new structural fact on either NVDA or OMCL exists as of this report.

---

## Heat map summary

| Risk Category | Level | Driver |
|---|---|---|
| **Single-name event risk (NVDA)** | 🔴 **CRITICAL** | Earnings T-1, untested interim CEO, unresolved board investigation, House briefing day after print |
| **Single-name structural drift (OMCL)** | 🟠 **HIGH** | 3rd consecutive session below bear-case floor, deepening, still no structural cause found |
| **Concentration — single satellite names (GEHC)** | 🟡 **MEDIUM** | +2.29pp over target, 1.21pp from trim trigger, 15th-plus consecutive reaffirm-unchanged |
| **Concentration — correlated idiosyncratic (NVDA+OMCL)** | 🟢 **LOW-MEDIUM** | 18.12% of equity, 6.88pp buffer, widened this week on price declines |
| **Sector concentration (AI/semis look-through)** | 🟠 **HIGH** | ~20-22% of equity once VTI/VXUS internal tilt is counted — this book's largest systematic bet |
| **Sector concentration (Healthcare: OMCL+GEHC)** | 🟡 **MEDIUM** | ~15.9% direct equity, both currently at the extremes of their own ranges (one down big, one up big) |
| **Geographic/currency (VXUS, unhedged)** | 🟡 **MEDIUM** | 29.75% of equity in unhedged ex-US FX exposure, no currency hedge tool available |
| **Interest rate sensitivity (book-wide)** | 🟠 **HIGH** | NVDA/OMCL/GEHC all long-duration growth names; rule 6a pause live; ~11bp from reopening |
| **Liquidity** | 🟢 **LOW** | All six names trade with tight regular-session spreads at this account's size; premarket only is thin |
| **Hedge effectiveness (XLE)** | 🟡 **MEDIUM** | Doing its job on supply-shock risk; does NOT cover a demand-driven/recession scenario (rule 9) |
| **Tail/recession risk (pool-level)** | 🟠 **HIGH** | ≈-34% equity / ≈-32% pool bad-year stress estimate, now compounding with a live binary event |
| **Dry powder / optionality** | 🟡 **MEDIUM** | Only $6.10 deployable; no hedging instrument available to lean on into tomorrow's print |

---

## 1. Correlation analysis between holdings

- **NVDA and OMCL are not meaningfully correlated on fundamentals right now, and that is diversification working, not a coincidence.** NVDA's drawdown this month is governance-driven (a CEO resignation); OMCL's is earnings/guidance-driven (a soft forward print reaction). Both are down, but for genuinely unrelated reasons — exactly the scenario the combined 25% concentration trigger exists to monitor, not because the two names move together, but because two uncorrelated idiosyncratic bets can still compound into an outsized aggregate single-stock-risk bill if both go wrong at once (which, this month, they both have).
- **VTI and VXUS are highly correlated with each other and with the broader market (~0.85-0.95 typical realized correlation for US/ex-US broad index pairs)**, and both carry internal exposure to the same AI/semis mega-caps driving NVDA's own volatility — meaning the "diversified core" sleeve is not as independent from the NVDA bet as its 61.6% combined pool weight suggests.
- **XLE is the book's one genuine negative-to-low correlation asset relative to the growth/tech cluster**, but only under a specific regime (supply-side energy shock). During a demand-driven selloff (recession, broad risk-off), XLE has historically moved *with* the market, not against it — this was already named and validated as a lesson (the 9/24-25 decoupling episode) and still holds.
- **GEHC (medtech) and OMCL (pharmacy automation) share "healthcare" as a sector label but are weak diversifiers of each other** — different sub-verticals, different demand drivers (hospital capex cycles vs. imaging/diagnostics), and their current divergence (GEHC +22% vs. OMCL -26%) this month is itself evidence they are not a correlated pair in practice.
- **Net read: the book's real correlation risk isn't any one pair, it's the shared macro beta running through five of six holdings (VTI, VXUS, NVDA, OMCL, GEHC) to growth-multiple/rate sensitivity simultaneously.** XLE alone pulls against that, and only in one scenario type.

## 2. Sector concentration risk, with percentage breakdown

| Sector (approximate, incl. look-through) | % of Equity | Note |
|---|---|---|
| AI / Semiconductors | **~20-22%** | NVDA direct (9.44%) + estimated internal VTI/VXUS mega-cap tilt — this book's single largest systematic bet, larger than any one holding |
| Healthcare (OMCL + GEHC direct, + VTI/VXUS sector weight) | **~16-20%** | OMCL 8.69% + GEHC 7.20% direct, plus typical ~12-13% market-cap sector weight embedded in the core sleeve |
| Energy | **~15-17%** | XLE 13.12% direct, plus ~4-5% typical core-sleeve energy weight |
| Broad diversified core (VTI+VXUS, ex-tilt) | **61.55%** direct | Genuinely diversified at the index level, but not independent of the above sector bets once look-through is counted |

**The real concentration story is AI/semis, not NVDA alone.** NVDA's direct 9.44% looks modest and in-band against every stated trigger, but it understates this book's actual exposure to a single theme once the core sleeve's own tilt is counted — a point this desk has made before and one that matters more, not less, with a binary AI-bellwether event 24 hours away.

## 3. Geographic exposure and currency risk factors

- **~70.25% of equity is US-domiciled** (VTI, NVDA, OMCL, XLE, GEHC).
- **29.75% (VXUS) is unhedged ex-US exposure** — developed + emerging markets, multi-currency (EUR, JPY, GBP, and EM currencies), with zero currency hedge available in this toolbox. A USD rally (plausible under a rate-shock/flight-to-quality scenario) would compress VXUS returns independent of underlying equity performance.
- No single foreign currency or country concentration has been separately quantified by this desk to date — a gap worth naming, though at VXUS's broad-basket construction it is a second-order risk relative to the US single-name exposures above.

## 4. Interest rate sensitivity, by position

| Position | Duration/sensitivity | Why |
|---|---|---|
| NVDA | **High** | Long-duration growth name; MS's own model shows a 23bp Rf move alone shifted fair value ~$3.8/sh — rate moves are a first-order valuation input, not noise |
| OMCL | **High** | Small-cap growth-multiple name; net-cash balance sheet means no refinancing risk, but the equity multiple itself is rate-sensitive |
| GEHC | **Medium-High** | ~$7.1B net debt plus a growth multiple — rate moves hit both the discount rate and (modestly) borrowing costs |
| XLE | **Low-Medium** | Value/cash-flow sector, less multiple-dependent, more commodity-price-dependent; rate shocks matter less here than oil does |
| VTI | **Medium-High** | Cap-weighted index with meaningful mega-cap-growth tilt; behaves more rate-sensitively than a naive "broad market" label implies |
| VXUS | **Medium** | More value/financials-weighted than VTI internationally, somewhat less rate-sensitive, but not immune |

**Book-wide: four of six holdings carry real rate sensitivity, and rule 6a's pause (new core/NVDA adds blocked, ~11bp from reopening on the reconciled ~4.86-4.87% 10yr figure) is the correct standing response** — this is not a static risk, it is live and close to a threshold.

## 5. Recession stress test — estimated drawdown

Carrying forward and lightly updating the standing stress estimate: **≈-34% of equity, ≈-32% of the pool (original $50 base) in a genuine broad-recession tail scenario** — essentially unchanged from last week's read in magnitude, but the *composition* of that number has shifted slightly worse this week: NVDA's governance overhang and tomorrow's binary print are not "recession risk" in the classic sense, but they layer an idiosyncratic tail directly on top of the macro one, at exactly the same position that would also be hit hardest in a generic growth-multiple compression. A recession scenario and a bad-NVDA-print scenario are not mutually exclusive, and this book currently has no instrument that would cushion either, let alone both at once.

## 6. Liquidity risk rating, by holding

| Holding | Rating | Note |
|---|---|---|
| VTI | **Very Low risk** | Mega-ETF, tight spreads, deep volume at all hours |
| VXUS | **Very Low risk** | Same |
| NVDA | **Very Low risk** | Mega-cap, tight spreads even during this month's volatility |
| XLE | **Low risk** | Large sector ETF, tight regular-session spreads |
| GEHC | **Medium risk** | Fine intraday; has shown wide bid/ask in premarket (team has repeatedly flagged this) |
| OMCL | **Medium risk** | Fine in regular session at this account's size; smaller float, has shown wider spreads under stress — worth watching if this book ever scales beyond fractional-share sizing |

At this account's current dollar sizes, liquidity is not a live constraint on any position — flagging it for scale, not for today.

## 7. Single stock risk and position sizing recommendations

- **NVDA (9.44% equity):** In-band against every stated trigger, but "in-band" undersells the risk here — this is a single name, under new and untested leadership, with an open investigation and a binary event tomorrow. **Recommendation: no pre-print action (correctly blocked by rule 6a/rule 20 anyway), but this desk explicitly flags that if tomorrow's print produces a clean beat-and-pop, that is the moment to revisit whether 9.44%/8.25% is still the right size for a name carrying this much idiosyncratic, non-fundamental risk — not an argument to add, an argument to consider trimming into strength.**
- **OMCL (8.69% equity):** Three consecutive sessions below its own bear-case floor is a worse fact pattern than the single touches the team correctly held through earlier. **Recommendation: this desk is not calling for a trim — no structural cause exists — but recommends the team explicitly tighten its own bar: if a fourth consecutive session closes below $35.24, that should itself (independent of any new fundamental fact) trigger a review of whether the $35.24 floor is still the right bear-case anchor, rather than a line the stock now simply lives below.**
- **GEHC (7.20% equity, 6.29% pool):** 1.21pp from its own stated trim trigger, reaffirmed unchanged for 15+ consecutive cross-desk reports. **This desk's radical-transparency read: the band may be calibrated correctly, but reaffirming the identical conclusion for three-plus weeks running without ever executing the trigger it describes is starting to look like a trigger that will never fire by design, which is itself a sizing decision dressed up as patience. Recommend BR either tighten the trigger or explicitly extend GEHC's target, once, rather than reaffirm a 16th time.**

## 8. Tail risk scenarios, with probability estimates

| Scenario | Rough probability | Impact |
|---|---|---|
| NVDA "beat but sell off" repeat (2 of last 4 prints) compounded by a weak Kress performance | **~30-35%** | -10% to -20% single-session move on NVDA; -1 to -2pp pool |
| NVDA clean beat-and-pop, governance overhang eases | **~25-30%** | +10-15% single-session move; partial unwind of the governance discount |
| Governance investigation surfaces a material finding or further leadership disruption | **~5-10%** | NVDA re-rates toward MS's bear case ($57.5/sh, -64% from today) — the book's single most severe plausible single-name event |
| OMCL fourth consecutive sub-$35.24 close with no structural cause (pure drift continuation) | **~40-50%** | No immediate action per policy, but raises the question in item 7 above |
| A genuine OMCL structural break surfaces (none found in 5+ re-reads to date) | **~10%** | Could test levels meaningfully below $35.24; this desk has found nothing supporting this today |
| Broad AI/semis multiple compression (independent of NVDA's own print) | **~15-20%** over coming weeks | Hits NVDA direct exposure plus the ~20-22% look-through tilt in the core sleeve simultaneously — the book's largest single systemic exposure |
| Rate shock back toward/above 5% on the 10yr | **~10-15%** | Pressures NVDA/OMCL/GEHC multiples together; extends rule 6a's pause |

## 9. Hedging strategies to reduce the top 3 risks (equities-only toolbox, no options)

1. **For NVDA event risk:** no direct hedge exists in this toolbox (no options, no inverse ETF in the approved universe). The only available lever is sizing — see item 7's recommendation to revisit size *after* the print, not before. This desk is not recommending a pre-print trim (would break the team's own validated "no same-minute decisions" discipline), but names plainly that this is a risk the book is simply carrying uninsured.
2. **For OMCL's sustained bear-floor drift:** consider pairing any future OMCL add (once the DCA gate eventually fires) with a correspondingly smaller initial size than rule 18 currently contemplates, given the floor itself has now proven less durable in practice than when it was set — a partial, structural hedge via sizing discipline rather than an instrument.
3. **For AI/semis concentration (the real top risk once look-through is counted):** the next incremental core-sleeve dollar should route toward a sector that is *not* already overweight in this book — rather than defaulting to VXUS (which still carries meaningful global mega-cap/tech exposure), consider a genuinely defensive tilt (staples, utilities, or a broader value sleeve) the next time new cash is deployed, specifically to hedge the demand-driven/recession tail that XLE does not cover.
4. **XLE remains the book's one working hedge** — for the Hormuz/supply-shock scenario specifically. No change recommended; continue to not treat it as a general-purpose hedge (rule 9).

## 10. Rebalancing suggestions with allocation percentages

- **No trade recommended by this desk today** — research/risk-advisory only, per mandate, and nothing here rises to a level that should preempt tomorrow's print.
- **If sizing is revisited post-print (per item 7):** consider tightening the NVDA+OMCL combined concentration trigger from 25% to **~20% of equity**, given this month demonstrated how quickly two ostensibly-uncorrelated single-name bets can both go idiosyncratically wrong in the same stretch — the current 18.12% reading would already be close to a tightened line, which is the point: it should bind sometimes, not just exist as a number nobody expects to see again.
- **GEHC:** recommend BR resolve the 7.5% trigger question explicitly at the next review rather than reaffirm it a 16th time — either tighten the band now that the position is 1.21pp away, or widen the stated target to match where the position has actually settled.
- **Next incremental cash dollar:** this desk recommends a defensive/non-correlated sleeve over the standing VXUS default, specifically to address the recession-tail gap named in items 5 and 9 — a policy recommendation for BR, not a trade this desk can place.

---

## Stance note (radical transparency)

The team has handled this month's NVDA governance crisis well — no same-minute reactions, a validated contingency framework, genuine process discipline. That is real and worth saying plainly. But plainly also: **this book is about to sit through the single highest-stakes binary event in its history, in its largest position, with zero instruments available to insure against it, funded by a sizing framework (9.44% equity) that was calibrated before any of this month's facts existed and has not been revisited since.** "No pre-print action" is the right call under the team's own discipline — it is not the same thing as "no risk." Grade **D** reflects that this is a correctly-managed but genuinely elevated-risk moment, not a complacent one — the grade would be worse if the team were pretending otherwise, and it isn't. OMCL's drift below its own floor for a third straight session, unresolved for a third straight week, is the second item this desk is naming without softening: the framework is working as designed, but "working as designed" and "actually fine" are not automatically the same thing when the line keeps moving the wrong way.

---

*Prepared by the BW Risk Assessment persona. Sources this run: live Robinhood pulls (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`, account 424593861, 09:42 ET); this run's WebSearch (dexerto.com, datacenterknowledge.com, abc7.com, fox10phoenix.com, aljazeera.com, thenationalherald.com, fox5dc.com, tech-insider.org — all NVDA/Huang items dated 11/8-11/9, nothing fresher found; marketbeat.com, quantisnow.com, stockevents.app on OMCL — nothing dated past 11/6; fxempire.com, multibagg.ai, cnn on rates/VIX — nothing dated past 11/10). Internal: trading-experiment/state.md (positions, contingency plans, standing rules), analysts/jpm-earnings-analyzer.md (2026-11-16 ~08:22 ET), analysts/gs-stock-screener.md (2026-11-16 ~08:55 ET), analysts/ms-dcf-valuation.md (2026-11-16 ~09:17 ET), analysts/br-portfolio-builder.md (2026-11-13 ~15:15 ET, freshest on file for that desk).
