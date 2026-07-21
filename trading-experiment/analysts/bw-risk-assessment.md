# BW Risk Assessment — Bridgewater-Style Risk Report
**Date: 2026-07-21 (Tuesday, ~10:55 ET)**

*Persona: Bridgewater risk desk, radical transparency. Ground truth pulled live via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`, account 424593861) this run. First BW report since 7/20 ~14:41 ET.*

---

## Overall Portfolio Risk Grade: **D+** (downgraded from C-, 7/17 and 7/20)

**Why a downgrade, not a hold, stated plainly**: this cycle has real, genuine good news — the trader executed the VTI top-up this desk and BR have been flagging for a week, closing the core-sleeve deficit from -19.2pp to just -2.9pp and cutting the idle-cash problem from 44.3% to 28.2% of the trading pool in one trade. That is real progress on two of the book's longest-standing structural risks. **But this report cannot let good process news on secondary risks paper over a primary risk that got strictly worse.** OMCL just logged its **fourth consecutive red session** (not the third this desk reviewed Monday) — and today's drop, -2.81% live, is the **steepest single-day decline of the four**, on a day the broad market and chip sector it's meant to be uncorrelated with are both rallying again (NVDA +0.95%, VTI +0.59%, VXUS +1.26% — a second straight green session for the book's other three positions). Cumulative decline since the $46.99 entry is now **-6.47%**, up from -4.05% Monday. This is happening **9 days out** from a 7/30 print JPM has already quantified as a realistic -20%/+15% one-day event — and the trend line into that event is accelerating downward, not stabilizing. Layer on a **materially sharper Hormuz/Gulf escalation overnight** (tanker strike, a Houthi threat to embargo ~2.5M bbl/day of Saudi crude, Brent spiking toward ~$90 — the sharpest move logged since the original 7/13 shock, per GS/BR's same-day sourcing) and OMCL's own bid/ask spread widening back out to ~30bp from Monday's "improved" ~15bp, and the honest read is: the book's two most acute, event-driven risks both intensified today while its structural, slower-moving risks improved. Radical transparency means naming that trade-off rather than netting it to a flat grade.

## Biggest risk right now
**OMCL is 9 days from its most consequential catalyst to date, already four sessions into an accelerating decline with no identified catalyst and no written contingency plan.** This desk suggested on 7/20 (not a demand) that the trader pre-decide, in writing, what a genuine miss-driven drawdown would mean for the hold/trim decision before 7/30 arrives. As of this run, state.md contains no such plan. With the position now down -6.47% from entry and JPM's own framing putting a further -20% inside the realm of the ordinary for this name, "hold and watch" is starting to look like "hold and hope" without an explicit decision rule. This is not a call to sell — the position is $4.68, trivial in dollar terms, and no fresh negative company-specific catalyst has been found — but the trend itself, not just the eventual print, is now the thing this desk is flagging.

---

## Heat Map Summary

| Risk Category | Level | Notes |
|---|---|---|
| OMCL earnings tail risk (7/30, 9 days out) | 🔴 Critical, unresolved | JPM's -20%/+15% one-day range stands. No trader-written contingency plan exists yet despite this desk's 7/20 suggestion. |
| OMCL idiosyncratic downtrend (4th straight session, accelerating) | 🔴 Critical, escalated from High | -1.51% → -2.66% → -1.71% → **-2.81% today** = -6.47% cumulative vs. $46.99 entry. Steepest single-day drop of the four, on a day the rest of the book rallied — decoupling thesis still intact (rules out chip-beta), but the idiosyncratic pre-earnings weakness this desk flagged Monday has gotten worse, not stabilized. |
| Geopolitical/macro tail risk (Hormuz/Gulf) | 🔴 Critical, freshly escalated | Overnight: tanker struck transiting the Strait, Houthi forces threatened a Saudi-crude embargo (~2.5M bbl/day), Brent spiked toward ~$90 intraday — sharpest move since the 7/13 shock, per cross-desk sourcing. This desk's own WebSearch returned stale, pre-escalation data (see Data-quality row) — deferring to GS/BR's same-day, better-sourced reads. |
| Core-sleeve deficit vs. 55% target | 🟢 Low, resolved this cycle | -19.2pp (7/20) → **-2.9pp** today. The $8 VTI buy this morning closed nearly the entire gap. |
| Idle cash / opportunity cost | 🟡 Moderate, much improved | 44.34% (7/20) → **28.20%** today. Still technically above BR's 25% cash-floor trigger, but the multi-cycle-tripped flag is close to resolved for the first time in five-plus cycles. |
| Sector concentration (look-through, Technology) | 🟠 High, ticked up despite the "diversifying" trade | **~40.2%** of deployed capital, up from 39.43% on 7/20 — see Sec. 3. The VTI buy grew the sleeve, but VTI's own ~42.3% Technology weight pulled the blended number up, not down. Textbook look-through-vs-face-value trap. |
| Single-stock (VTI) face-value concentration | 🟡 Moderate, new watch item | VTI is now **36.0%** of the trading pool, the largest single position by a wide margin — +11pp over its own 25% sub-target within the core sleeve (not a breach of BR's 20% cap, which applies to satellite only, but a genuine new concentration data point worth tracking). |
| Single-stock (NVDA) look-through concentration | 🟢 Low, improved | ~17.64% of deployed capital (direct + VTI-embedded), down from 20.71% — diluted by the larger sleeve, a genuine improvement. |
| Chip-supply-chain combined exposure (NVDA + VXUS TSMC/Samsung/SK Hynix) | 🟡 Moderate, improved | ~19.46% of deployed capital, down from 23.02% — same dilution effect as NVDA above. |
| Interest rate sensitivity | 🟡 Moderate | CME FedWatch ~86.7% odds of a July 28-29 hold, unchanged. Still lands one day before OMCL's 7/30 print — two catalysts, one 48-hour window. |
| Recession/drawdown risk | 🟠 High | Base scenario ~26-37% peak-to-trough on the deployed sleeve — unchanged bands, but OMCL's accelerating trend makes the low end of its own band feel less hypothetical than a week ago. |
| Liquidity risk (OMCL) | 🟡 Low-Moderate, reversed | Spread back out to ~30bp (bid $43.81/ask $43.94) from Monday's "improved" ~15bp — a partial reversal worth watching, not yet a real concern for a $4.68 position. |
| Liquidity risk (NVDA/VTI/VXUS) | 🟢 Very Low | Spreads all ~1bp or less, unchanged. |
| Liquidity risk (account-level) | 🟢 Low | No orders pending. |
| Geographic/currency risk | 🟡 Moderate | Unchanged — VXUS ~96%+ non-US, blended book still roughly two-thirds US-domiciled. |
| Position sizing discipline | 🟡 Moderate | No satellite position breaches BR's 20% single-name cap, but VTI's 36% face-value weight is a new, un-discussed concentration point (see above). |
| Data-quality risk (OMCL & Hormuz via WebSearch) | 🟠 High, now compounding | This desk's own OMCL WebSearch reproduced the same stale $46.51/+3.54% figure every desk has flagged for three-plus weeks; separately, a fresh Hormuz search returned only pre-escalation (mid-July) results, missing overnight developments entirely. Two independent data-staleness failures in one run — treat all WebSearch-sourced prices and "latest" geopolitical reads as lagging indicators this cycle, live Robinhood quotes and cross-desk same-day sourcing are the only reliable ground truth. |
| Execution/operational risk | 🟢 Low | VTI order executed cleanly (empty order_checks), entry not chased (+0.59% on the day at time of report). |

---

## 1. Ground-truth portfolio snapshot (live, this run — ~10:55 ET)

- **Total account value**: $99.6529 (`get_portfolio`: cash $64.00 + equity $35.6529)
- **Positions** (`get_equity_positions` + live `get_equity_quotes`):
  - NVDA: 0.024826 sh, avg cost $201.40, live $205.205 (bid/ask $205.20/$205.22) → **~$5.0944, +1.89% unrealized**; up **+0.95%** vs. Monday's $203.28 close
  - VTI: 0.048530 sh, avg cost $370.90, live $368.395 (bid/ask $368.38/$368.41) → **~$17.8782, -0.68% unrealized**; up **+0.59%** vs. Monday's $366.25 close — **quantity and avg cost both jumped today: the $8.00 VTI buy executed ~10:37 ET at ~$368.60, per state.md's trade log**
  - VXUS: 0.095185 sh, avg cost $84.05, live $84.115 (bid/ask $84.11/$84.12) → **~$8.0065, +0.08% unrealized**; up **+1.26%** vs. Monday's $83.07 close
  - OMCL: 0.106405 sh, avg cost $46.99, live $43.9499 (bid/ask $43.81/$43.94) → **~$4.6765, -6.47% unrealized**; down **-2.81%** vs. Monday's $45.22 close — **fourth straight red session, steepest single-day drop of the four**
- **Trading-book accounting** (per ground rules: $50 base + profits, $50 reserve untouchable): trading pool ≈$49.6529, deployed $35.6556 (**71.8%** of pool, up sharply from 55.66% on 7/20), deployable cash ≈$14.00 (**28.2%** of pool, down from 44.34%), reserve $50.00 untouchable (embedded in the $64.00 cash balance)
- **Three of four positions are green today (NVDA +0.95%, VTI +0.59%, VXUS +1.26% — a second straight rally day for the book's core/AI-adjacent exposure); OMCL is again the lone outlier, down -2.81% on its worst single day of the current slide.**

## 2. Correlation analysis between holdings
- **NVDA ↔ VTI**: unchanged structural read — NVDA remains VTI's #1 individual holding (~6.70% of the fund, carried-forward estimate).
- **NVDA ↔ VXUS**: unchanged — indirect chip-sector beta via TSMC/Samsung/SK Hynix, all participating in today's continued rally.
- **VTI ↔ VXUS**: both up today (+0.59%/+1.26%) — consistent, correlated risk-on moves, as expected from two broad-market baskets on a relief-rally day.
- **NVDA/VTI/VXUS ↔ OMCL**: **the divergence this desk flagged Monday has strengthened, not resolved.** Today is OMCL's second straight session moving in the *opposite* direction from a rallying chip/broad-market tape (Monday: OMCL -1.71% vs. SOX +2.3%; today: OMCL -2.81% vs. a second green day for NVDA/VTI/VXUS). Two consecutive opposite-direction sessions is stronger evidence against "OMCL secretly correlated to chips" than one — the decoupling-from-market-risk thesis this position was built on remains intact. **But the idiosyncratic, pre-earnings weakness this decoupling has revealed is now a four-session pattern with no identified cause**, which is the more urgent risk than correlation ever was (see Biggest Risk, above).

## 3. Sector concentration risk
- **Look-through Technology-sector exposure**: NVDA ($5.0944, 100%) + VTI's Technology slice ($17.8782 × 42.30% ≈ $7.5625) + VXUS's Technology slice ($8.0065 × 21.04% ≈ $1.6846) = **~$14.34, or ~40.2% of the $35.66 deployed sleeve** — up from 39.43% on 7/20. (Underlying VTI/VXUS sector weights carried forward, not refreshed, this cycle.)
- **This is the sharpest lesson of today's trade**: a $8 VTI buy, undertaken specifically to close a core-allocation deficit, mechanically *increased* blended Technology concentration because VTI itself runs ~42% Technology — hotter than the sleeve's own blended average. State.md's own strategic rule 8 ("look-through concentration, not face-value allocation, is the real risk metric") predicted exactly this outcome; today's numbers confirm it in practice, not just in theory. **This isn't a reason to regret the trade** — closing a 19pp core deficit and cutting idle cash by 16pp were both higher-priority structural fixes — but it is a reason not to describe today's buy as a "diversification win" without the caveat.
- **As % of total account**: ~14.4%. As % of the trading pool: ~28.9% — both up from 7/20's ~10.93%/~21.95%, again reflecting the larger deployed sleeve.

## 4. Geographic exposure and currency risk
- VXUS remains ~96%+ non-US-domiciled — unchanged, still the book's one real geographic diversification win.
- NVDA, VTI, and OMCL are all ~99%+ US-domiciled/US-equity. Blended, the book remains roughly two-thirds US-domiciled by look-through equity exposure — today's VTI buy, being a US fund, nudges this modestly further toward US concentration in absolute dollar terms even though VXUS's own percentage of the trading pool (16.1%) is close to its 15% target.
- **Hormuz/Gulf exposure: materially worse today, not merely unresolved.** Per GS's and BR's same-day (7/21) reporting — this desk's own WebSearch on the topic returned only pre-escalation, mid-July results and could not independently verify — overnight developments include a tanker strike in the Strait, a Houthi threat to embargo ~2.5M bbl/day of Saudi crude, and Brent spiking toward ~$90/bbl intraday, the sharpest single move logged since the original 7/13 shock, even as regional mediators reportedly floated a 10-day ceasefire proposal (unconfirmed as accepted). **Net: this is now the most acute the geopolitical tail risk has been since inception, not a steady-state background risk.**

## 5. Interest rate sensitivity (per position)
- **NVDA**: highest duration/rate sensitivity in the book — a long-duration growth story whose DCF fair value (MS's model) is highly discount-rate-sensitive; a rate-hold is a mild tailwind already priced in, a hawkish surprise would compress its multiple hardest of the four holdings.
- **VTI**: moderate-high sensitivity, diluted across the whole US market but still mega-cap-tech-weighted (~42% Technology); moves with NVDA's rate sensitivity but with less amplitude.
- **VXUS**: lower rate-duration sensitivity than VTI — international/ex-US indices skew toward lower average valuation multiples — but carries its own cross-currency and global-rate-differential sensitivity (foreign central bank policy divergence from the Fed) that VTI doesn't.
- **OMCL**: net-cash balance sheet (~$71M, per GS) means low refinancing/balance-sheet rate risk, but its ~89x trailing multiple still makes it a genuine growth-discount-rate name — a hawkish rate surprise would pressure its multiple similarly to a growth stock, the net-cash position doesn't insulate the equity valuation.
- CME FedWatch: ~86.7% odds of a July 28-29 hold (3.50-3.75% range) — unchanged from 7/20's read, and this desk's own fresh search corroborates that hold-odds have strengthened over the past two weeks (a 46.5% hike-probability reading as recently as 7/13 has faded to today's ~87% hold consensus). **Still landing one day before OMCL's own 7/30 print** — two catalysts sharing a 48-hour window, unchanged flag from 7/20.

## 6. Recession stress test
Bands held flat from 7/20 — nothing structurally new in the macro base case this cycle, though OMCL's accelerating trend makes its own downside band feel more like a live scenario than a tail case:
- **Base recession scenario** (multiple compression, AI-capex digestion pause, no fresh geopolitical shock): NVDA -35% to -45%; VTI -25% to -35%; VXUS -22% to -32%; OMCL -25% to -40%. **Combined deployed-sleeve loss on today's larger $35.66 sleeve: ~$9.27-$13.15, a ~26.0%-36.9% drawdown.**
- **Severe/tail scenario** (recession + a Taiwan Strait disruption or a Gulf energy/inflation shock forcing the Fed to hold or hike into a slowdown — now a materially less hypothetical combination given overnight's Hormuz escalation): NVDA -55% to -65%; VTI -45% to -50%; VXUS -35% to -42%; OMCL -35% to -50%. **Combined deployed-sleeve loss: ~$15.08-$18.00, a ~42.2%-50.4% drawdown.**
- **On the total account**: with the deployed sleeve now larger (71.8% of the trading pool vs. 55.66% on 7/20) and deployable cash smaller (28.2% vs. 44.34%), the account's downside resilience — while still real — has genuinely thinned since Friday. Even the severe scenario above costs at most ~18.1% of total account value (up from ~14.0% on 7/20), the direct arithmetic consequence of deploying more capital. **This is the flip side of closing the core gap worth naming plainly: less idle cash means less of a cash-cushion buffer against the tail scenarios above, even though it was the right structural move.**

## 7. Liquidity risk rating (per holding)
| Holding | Market liquidity | Account-level liquidity | Notes |
|---|---|---|---|
| NVDA | 🟢 Very Low risk | 🟢 Low risk | Spread ~$0.02 (~1bp) today, unchanged. |
| VTI | 🟢 Very Low risk | 🟢 Low risk | Spread ~$0.03 (~0.8bp) today, unchanged. |
| VXUS | 🟢 Very Low risk | 🟢 Low risk | Spread ~$0.01 (~1.2bp) today, unchanged. |
| OMCL | 🟡 Low-Moderate (reversed from Monday's improved read) | 🟢 Low risk | Spread widened back to ~$0.13 (bid $43.81/ask $43.94, ~30bp) from Monday's tighter ~15bp. Not itself a concern at this position size, but a reversal worth tracking — widening spreads into an earnings window can be an early liquidity-thinning signal. |
| Cash ($64.00) | 🟢 No risk | 🟢 Low risk | Fully liquid. |

## 8. Single stock risk and position sizing recommendations
- **Face-value sizing** (of the ~$49.65 trading pool): NVDA 10.26%, **VTI 36.01%**, VXUS 16.13%, OMCL 9.42%, cash 28.20%.
- **VTI is now the largest single position in the book by a wide margin — worth a direct call-out.** This does not breach BR's 20% single-name soft cap, which applies to the satellite sleeve (NVDA/OMCL), not core ETFs — VTI's own sub-target within the 55% core allocation is ~25%, and it now sits ~11pp over that. This is a reasonable, policy-consistent outcome of BR's own "buy whichever core fund is more underweight" rule (VTI was more underweight than VXUS at time of decision), but it means the book's single largest dollar exposure moved from "no position over 20% face value" to "one position at 36% face value" in a single trade. Recommend the next core dollar, if any, tilt toward VXUS specifically (currently 16.13% vs. its own 15% target — already essentially there) or toward satellite, rather than defaulting to a third VTI top-up, to rebalance the internal core mix rather than compound the VTI overweight.
- **Look-through NVDA sizing**: combined NVDA exposure (direct + VTI-embedded) is ~$6.29, or **~17.64% of deployed capital** — improved from 20.71% on 7/20, genuinely lower single-name risk on this specific name.
- **Combined chip-supply-chain exposure** (NVDA look-through + VXUS's TSMC/Samsung/SK Hynix slice): **~$6.94, or ~19.46% of deployed capital** — improved from 23.02%.
- **OMCL — repeating and sharpening the 7/20 recommendation**: do not add before 7/30, full stop, now more urgent given the accelerating four-session decline. **New this cycle**: this desk is upgrading its prior "suggestion" to a firmer recommendation — write down, in state.md, before 7/30, what a genuine -15% to -20% single-day move on this position would mean for the hold/trim decision. Nine days is a short enough runway that "decide in the moment" risks becoming "decide under pressure."
- **No stop-loss is in place on any of the four positions**, consistent with the standing "no mandated stop-loss, use judgment" rule.

## 9. Tail risk scenarios with probability estimates
| Scenario | Rough probability (next 30 days) | Estimated impact on deployed sleeve |
|---|---|---|
| **OMCL 7/30 print misses / soft guide (Q4 2025 playbook repeats)** | ~20-25% (JPM's framing: this quarter's setup is mechanically tighter than Q1's blowout) | **-12% to -20% on OMCL specifically** |
| **OMCL 7/30 print beats decisively** | ~45-50% (nudged down slightly from 7/20's 50-55% — a four-session accelerating decline with no identified catalyst is at minimum a soft data point against a clean repeat of the historical beat pattern, even though it doesn't override the base rate) | +10% to +15% on OMCL specifically |
| OMCL prints in-line, muted reaction | ~25-30% (nudged up correspondingly) | -3% to +3% on OMCL specifically |
| Hormuz conflict escalates further (a real overnight escalation already occurred — renewed strikes, the Saudi-embargo threat materializing, additional civilian-infrastructure targets) | ~25-30% (up from 7/20's 20-25% given the overnight escalation is itself evidence the trend is toward more conflict, not less) | -30% to -50% on NVDA via multiple compression; VTI down less but not spared; VXUS exposed via energy-import-sensitive economies plus chip-sector overlap |
| AI-capex digestion / demand-supply mismatch repricing resumes | ~20-30% over 3-6 months, unchanged — this week's heavy Big Tech earnings slate (Alphabet, Intel, IBM, Tesla) is a two-sided catalyst | -15% to -30% directly on NVDA; -8% to -15% on VXUS via TSMC/Samsung/SK Hynix; -3% to -6% on VTI |
| Hormuz conflict de-escalates within 1-2 weeks (the reported 10-day ceasefire proposal is accepted) | ~10-15% (nudged down from 7/20's 15-20% — overnight's escalation makes near-term de-escalation less likely, even with a proposal on the table) | Modest relief rally across NVDA/VTI/VXUS; limited direct effect on OMCL |
| Taiwan Strait incident (fab disruption) | <5% (low-probability, high-severity), unchanged | Hits NVDA + VXUS directly via TSMC/Samsung; VTI and OMCL less directly exposed |
| Broad recession / credit event, no specific tech or geopolitical trigger | ~10-15% over 6-12 months, unchanged | Base-to-severe stress test applies (Sec. 6): ~26-50% combined deployed-sleeve drawdown |

## 10. Hedging strategies (equities-only toolbox — top 3 risks)
No options available on this account. All hedges remain about **what to buy next (or not buy)**, not what to sell.
1. **OMCL's accelerating pre-earnings decline, 9 days out** → the only real lever is sizing and decision discipline: don't add before 7/30 under any framing, and — new this cycle — write the contingency plan down now, before the print, not after. An unhedgeable equities-only binary risk is best managed by deciding the response in advance, not by improvising after a -18% gap.
2. **Hormuz/Gulf tail risk, freshly escalated** → GS's OXY thesis remains the only candidate that would function as an actual equities-only hedge against this specific tail risk, and it remains un-vetted (MS has not built a dedicated DCF, now eight-plus days overdue per GS's own count). This desk repeats GS's ask: either close this gap now, while the catalyst is live and topical, or stop carrying it as a live candidate.
3. **AI-compute/semiconductor-sector look-through concentration, now ~40.2% blended Technology (up, not down, this cycle)** → unchanged standing recommendation: any new capital should go to names/funds with zero AI-compute linkage, and the next core dollar specifically should tilt toward VXUS or a non-tech satellite rather than a third VTI top-up, given today's finding that VTI itself doesn't reduce this number the way its "core diversifier" label suggests.

## 11. Rebalancing suggestions with allocation percentages
Endorsing BR's IPS target (55% core / 35% satellite / 10% cash) — no change to targets recommended this cycle, but the gaps have moved substantially:
- **Core gap**: -2.88pp vs. target, ~-$1.43 — down from -19.21pp/-$9.53 on 7/20. **Essentially resolved.** This is genuinely good news and this desk says so plainly.
- **Satellite gap**: -15.32pp vs. target, ~-$7.61 — essentially unchanged from 7/20's -15.13pp/-$7.51, since no satellite trade happened and OMCL's price fell. Per Sec. 8, do not close this gap with OMCL before 7/30.
- **Cash gap**: +18.20pp vs. target, ~+$9.04 — down sharply from +34.34pp/+$17.04, and now much closer to BR's 25% cash-floor trigger (28.2% actual vs. 25% flag) than at any point in five-plus cycles. **Also genuinely good news.** One more small deployment (satellite, post-7/30, or a modest VXUS top-up) would likely clear the trigger entirely.
- **Within-core mix, a new watch item**: VTI now runs ~11pp over its own 25% sub-target while VXUS sits almost exactly at its 15% target — the next core dollar, if any, should tilt toward VXUS to correct this internal skew rather than compound it.

---

## Cross-analyst notes
- **BR (7/20, no fresher report found this cycle)**: this report's central good-news finding (core gap and cash-floor trigger both nearly resolved) is the direct, live confirmation of BR's own standing "next dollar → VTI or VXUS" instruction actually executing — full agreement, and this desk credits BR's sequencing discipline for the structural improvement described above.
- **GS/BR (both 7/21, same-day)**: the source for this report's Hormuz-escalation read — this desk's own WebSearch returned only stale, pre-escalation data (see heat map), so this report defers to GS's and BR's same-day, better-sourced accounts of the tanker strike and Houthi embargo threat rather than claiming independent verification.
- **JPM (7/21, no material new OMCL-specific data this cycle)**: the -20%/+15% one-day tail framing from 7/20 stands unchanged and remains the anchor for this report's OMCL risk framing. JPM's own WebSearch also reproduced a stale/internally-inconsistent OMCL price this cycle — a second independent confirmation (beyond this desk's own reproduction of the stale $46.51 figure) that this is a persistent, structural data-quality problem, not a one-off.
- **MS (7/21)**: DCF discount on OMCL essentially flat (~24.9% upside), reinforcing this desk's standing point that a valuation cushion is not an earnings-outcome cushion — OMCL can be undervalued on a DCF basis and still be in the middle of a genuinely concerning idiosyncratic decline, as today's numbers show.
- **This desk's own data-quality miss, disclosed for the record**: today's WebSearch on the Hormuz situation returned only mid-July results, missing the overnight escalation entirely, and the OMCL WebSearch reproduced the same stale $46.51/+3.54% figure flagged for three-plus weeks running. Radical transparency applies to this desk's own process, not just the trader's — flagging this as a live tool-reliability risk for every desk on this team, not just a footnote.

---

Sources:
- [Oil surges as US strikes Iran, reversing return to pre-war prices (Al Jazeera)](https://www.aljazeera.com/news/2026/7/8/oil-prices-surge-as-us-strikes-iran-reversing-fall-to-pre-war-levels)
- [2026 Strait of Hormuz crisis (Wikipedia)](https://en.wikipedia.org/wiki/2026_Strait_of_Hormuz_crisis)
- [Oil prices jump as US and Iran trade attacks over Strait of Hormuz (Al Jazeera)](https://www.aljazeera.com/economy/2026/7/13/oil-prices-jump-as-us-and-iran-trade-attacks-over-strait-of-hormuz)
- [Oil prices today: Brent, WTI, Hormuz blockade (CNBC)](https://www.cnbc.com/2026/07/15/oil-prices-today-brent-wti-hormuz-blockade.html)
- [Omnicell (OMCL) Research Report (StockStory)](https://stockstory.org/us/stocks/nasdaq/omcl) — **flagged again as unreliable this cycle: WebSearch returned a stale $46.51/+3.54% figure vs. the live Robinhood-verified $43.9499/-2.81%**
- [Fed Rate Probability 2026 | FOMC Meeting Odds & Interest Rate Forecast (centralbank.watch)](https://centralbank.watch/federal-reserve/)
- [A July rate hike from the Fed? The odds are rising (CNBC, 7/13, superseded by the 86.7% hold read now current)](https://www.cnbc.com/2026/07/13/-a-july-rate-hike-from-the-fed-the-odds-are-rising.html)
