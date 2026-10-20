# BW Risk Assessment — Risk Management Report
**Date: 2026-10-20 (Tuesday), ~10:4x ET (verified via `TZ=America/New_York date`).** Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time. First BW report of the week. Fresh WebSearch this cycle (VIX, 10yr Treasury/FOMC odds, NVDA-Groq DOJ probe) reproduced the same chronic dateline wall every desk on this book has now logged for 23+ consecutive runs — nothing reliably dated 2026-10-20 found on any of three queries. One directionally-useful but still-undated item is carried as unconfirmed background only (see §4) — not acted on.

---

## Overall Portfolio Risk Grade: **C-** — held

Nothing structural broke, and one standing escalation from this desk actually got resolved: **BR posted an off-cycle report 10/19 ~16:1x ET adopting this desk's three-times-repeated AI/semis concentration ask**, revising core VTI/VXUS pool targets from 28%/25% to 26%/27% (correctly declining to extend the tilt to OMCL/GEHC, which exist to diversify *against* the AI/semis factor). That closes the one item this desk had escalated past routine monitoring. Grade is **not** upgraded for it: a policy change that only redirects *future* incremental dollars doesn't reduce today's ~23.3% AI/semis look-through exposure by a single percentage point, and the book is still carrying two binary earnings events now inside 8-9 days with nothing to dampen the variance. Today's session is a clean, uncatalyzed broad risk-on bounce (NVDA/VTI/VXUS/OMCL/GEHC all green) with XLE the lone red laggard yet again — the same correlation pattern this desk has now documented for multiple consecutive sessions in both directions.

## Single biggest risk right now

**GEHC and OMCL earnings are now 8 and 9 days out respectively (10/28, 10/29) — combined 14.51% of equity (8.76% OMCL + 5.75% GEHC) — and GEHC is climbing into its print on no sourced catalyst while MS's valuation gap for it keeps widening.** GEHC printed a fresh post-entry closing high yesterday ($69.76) and is trading higher still this morning ($70.38, +0.89% on the day); MS's DCF gap has widened from -7.98% to -9.35% overvalued across that same stretch, and GS/JPM/this desk's own search all come up empty on a catalyst. A position getting more expensive relative to its own fair value, heading into a print this book's own history shows is net-negative 3 of the last 5 times even on a beat, is exactly the kind of complacency this desk is mandated to name before the print, not after it gaps. OMCL remains this book's largest unrealized loss (-21.96%) and most historically volatile name (>10% day-0 moves in 7 of last 8 quarters) — unchanged in character, just closer.

---

## Portfolio snapshot (live, 2026-10-20 ~10:4x ET)

`get_portfolio`: total_value **$100.652732318** (cash $56.10 + equity $44.552732318). Pool ≈ **$50.652732318, +$0.652732318 (+1.305%) accumulated profit** — up meaningfully from yesterday's +0.717-0.771% range on today's broad bounce.

| Position | Qty | Last Price | Value (approx.) | % Equity | % Pool | Unrealized P&L (cost) | Day Δ (vs 10/19 close) |
|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $217.865 | ~$5.409 | 12.14% | 10.68% | +8.18% ($201.40) | +0.36% |
| VTI | 0.036690 | $378.38 | ~$13.883 | 31.16% | 27.40% | +2.15% ($370.40) | +0.76% |
| VXUS | 0.154525 | $84.02 | ~$12.983 | 29.14% | 25.63% | -0.13% ($84.13) | +0.88% |
| OMCL | 0.106405 | $36.669 | ~$3.902 | 8.76% | 7.70% | **-21.96% ($46.99) — book's largest unrealized loss** | +2.40% |
| XLE | 0.086775 | $67.01 | ~$5.815 | 13.05% | 11.48% | +16.29% ($57.62) | **-1.16% — day's laggard, again** |
| GEHC | 0.036393 | $70.38 | ~$2.561 | 5.75% | 5.06% | +2.46% ($68.69) — new post-entry closing-basis high | +0.89% |
| Cash (deployable) | — | — | $6.10 | — | 12.04% | — | — |

NVDA+OMCL combined concentration: **20.90% of equity** — 4.10pp buffer to the 25% backstop, clean. GEHC pool weight 5.06% vs. BR's 6%-pool earnings-window trigger (expires 10/28, **8 days out, not fired**, ~0.94pp buffer). VTI 27.40% vs. BR's revised 26% target (+1.40pp) and VXUS 25.63% vs. the revised 27% target (-1.37pp) — both inside the 5pp band under the new policy. **OMCL DCA gate: accumulated profit $0.653 vs. the $2.50 threshold — $1.847 away, narrowing meaningfully on today's bounce** (from ~$2.14 away at yesterday's close).

---

## 1. Correlation analysis between holdings

Today adds another clean data point to the "two effective positions, not six" finding this desk has been building for weeks: the AI/growth block (NVDA/VTI/VXUS/OMCL/GEHC) is up together on a broad relief bounce, and XLE is red, alone, for the same session — the mirror image of several recent sessions where XLE was the lone green name against a red block. This has now held across enough distinct sessions, in both directions, that this desk treats it as the book's dominant correlation structure rather than a single-day coincidence: a genuine shock to either the AI/growth narrative or the energy/geopolitical-risk narrative will move most of this book together, with XLE the only position reliably on the other side of that trade — and, per §9 below, only for the specific shock type it's calibrated to.

## 2. Sector concentration risk — percentage breakdown (incl. look-through)

| Sector | Direct holdings | Direct % of pool | Look-through from VTI/VXUS (est.) | **Total estimated % of pool** |
|---|---|---|---|---|
| **Technology / AI-semis** | NVDA | 10.68% | VTI (~32% tech wt. × 27.40%) ≈ 8.77pp + VXUS (~15% tech wt. × 25.63%) ≈ 3.84pp | **≈ 23.29% — unchanged today, but see note below** |
| Healthcare | OMCL, GEHC | 12.76% | VTI (~11% wt.) ≈ 3.01pp + VXUS (~10% wt.) ≈ 2.56pp | **≈ 18.33%** |
| Energy | XLE | 11.48% | VTI (~3.5% wt.) ≈ 0.96pp + VXUS (~5.5% wt.) ≈ 1.41pp | **≈ 13.85%** |
| All other sectors | — | — | remainder of VTI + VXUS | **≈ 44.53%** |

**Policy note, not a price-day change:** BR's 10/19 ~16:1x ET tilt (core VTI/VXUS targets revised 28%/25% → 26%/27%) routes the *next* incremental core dollar toward VXUS rather than pro-rata — the mechanism this desk asked for across three reports. Today's 23.29% figure is unchanged because no new cash has moved yet and rule 6a's rate-shock pause still blocks new core purchases regardless of target. This desk considers its own escalation on this item closed; future reports will track whether the tilt actually bends the number down as new capital is deployed, not re-litigate whether it should exist.

## 3. Geographic exposure and currency risk

Unchanged in substance:
- **VTI (27.40% pool): 100% U.S.-domiciled equities, USD-denominated.** No direct currency risk.
- **VXUS (25.63% pool): developed + EM ex-US — the book's only intentional currency exposure, unhedged.** Back to green today (+0.88%) after flipping red yesterday afternoon — tracking the broad risk-on/risk-off swing, no idiosyncratic FX event found.
- **NVDA, OMCL, GEHC, XLE: all USD-denominated, U.S.-listed.** NVDA's Taiwan/China supply-chain dependency remains unpriced and unmodeled by this desk.
- **Net call, unchanged: ~25.63% of pool (VXUS) carries direct FX risk; NVDA carries meaningful indirect Taiwan/China geography risk this book has never separately priced.**

## 4. Interest rate sensitivity by position

| Position | Rate sensitivity | Why |
|---|---|---|
| NVDA | **High** | Long-duration growth cash flows, MS's WACC 11.59% |
| GEHC | **Moderate-high** | ~$8.0B net debt (MS), WACC 9.09%, pending $945M Sofie M&A |
| OMCL | **Moderate** | Small-cap, WACC 9.59%; near-term action dominated by earnings anticipation (9 days out), not rates |
| VTI | **Moderate** | Cap-weighted index is itself tech/growth-tilted (§2) |
| VXUS | **Low-moderate** | Less growth-weighted; subject to non-U.S. rate paths |
| XLE | **Low** | Price action dominated by geopolitical supply risk, not discount-rate moves |

No fresh sourced Rf input this run — MS's standing ~5.19% (10/14-dated) carries forward, no rebuild triggered. **Directional update to the hawkish chatter flagged in this desk's last two reports:** this run's WebSearch found a Bloomberg-attributed item (dated 10/7, still not today's date) reporting October-hike odds had fallen to **~20% from ~55%** after softer inflation/payroll data, with other secondary sources clustering around an **~80-85% hold probability** for the 10/27-28 FOMC decision — directionally the opposite of the "coin-flip hike-vs-hold" read this desk carried forward last week. Flagging as a **easing, not a confirmation**: sourcing is still secondary and not dated to today, the meeting itself still lands the same week as GEHC's 10/28 print, and this desk is not reversing the standing ~5.19% input on an undated secondary read. If MS can source a dated, confirmed pre-FOMC reading, that remains the actual gate to re-check WACC inputs — but the direction of travel this run is toward less rate risk into the print window, not more.

## 5. Recession stress test — estimated drawdown by position

Same order-of-magnitude bands as the last several builds (no new model work warranted — nothing has moved enough to change the picture):

| Position | Estimated peak-to-trough drawdown in a moderate-to-severe recession | Precedent basis |
|---|---|---|
| NVDA | −55% to −70% | High-multiple AI-capex name; drew down ~−66% in the 2022 growth/rate-shock bear market |
| OMCL | −45% to −60% | Small-cap, already −21.96% unrealized; >10% day-0 earnings moves in 7 of last 8 quarters |
| GEHC | −25% to −35% | Medtech defensive bias, but leveraged balance sheet + pending cash M&A adds vulnerability, and now trading at a new high against a widening DCF gap |
| VTI | −30% to −45% | Broad U.S. market, but composition is itself growth/tech-concentrated (§2) |
| VXUS | −30% to −40% | Similar magnitude to VTI in USD terms, plus FX volatility |
| XLE | −40% to −65% in a demand-shock recession (vs. further gains in a supply-shock) | **Still conditional, not general-purpose protection** |

**Blended portfolio estimate: roughly −35% to −48% peak-to-trough in a moderate-to-severe demand-driven recession — at today's ~$50.65 pool, that is a ~$17.73-$24.31 drawdown**, without XLE reliably cushioning that specific scenario.

## 6. Liquidity risk by holding

| Holding | Liquidity rating | Note |
|---|---|---|
| NVDA | Very High | Mega-cap, among the most liquid single names on U.S. markets |
| VTI | Very High | One of the largest ETFs by AUM |
| VXUS | Very High | Large, liquid Vanguard index ETF |
| XLE | Very High | Large sector-SPDR ETF, deep book |
| GEHC | High | Large-cap, ample average daily volume |
| OMCL | **Moderate** | Small-cap; the real liquidity risk is the 10/29 print gapping the stock straight through any stop-loss reference, not execution |

At this account's fractional-share, sub-$7-per-position scale, execution liquidity is a non-issue; OMCL's earnings-gap risk is the one flag that actually matters, now 9 days out.

## 7. Single-stock risk and position-sizing recommendations

- NVDA+OMCL combined 20.90% of equity — inside the 25% backstop, 4.10pp buffer, clean.
- GEHC inside both the standard 5pp drift band and BR's tighter 6%-pool earnings-window trigger (0.94pp buffer) — clean, but the trigger expires 10/28 (8 days out): either price tests the buffer or it lapses unfired at the print per rule 16's no-action default. Worth naming plainly: GEHC rising *toward* that trigger on no catalyst while MS's fair value estimate stays flat (so the gap widens) is a worse setup than rising on fundamentals — it means more of this position's cushion is multiple expansion, not earned value, heading into a historically unkind print.
- Four of six holdings (NVDA, OMCL, GEHC, XLE) remain effectively single-stock/single-sector concentrated bets, and together with §2's look-through finding, roughly 55% of this pool's effective risk still sits in two themes — AI/semis and binary-earnings healthcare-tech. No rule is breached, and BR's policy response (§2) is a genuine process win. This desk is not naming this a fourth time as an open complaint — it's closed. What remains open and new is GEHC's specific valuation/price divergence above.

## 8. Tail risk scenarios with probability estimates

| Scenario | Rough probability (next 1-6 months) | Potential impact |
|---|---|---|
| OMCL and/or GEHC earnings miss or guide-down (10/28-10/29, now 8-9 days out) | ~20-25% each (independent) | OMCL >10% day-0 moves in 7 of last 8 quarters; GEHC 3 of last 5 prints net-negative even on a beat, now entering the print at a fresh high |
| AI-capex sentiment shock / sector-wide memory-semis de-rating | ~15-20% | NVDA -30-40% in weeks; drags VTI/VXUS via look-through; CXMT/DDR5 competitive narrative already live in SNDK/MU (unheld, same sector) |
| Hormuz de-escalation / sudden oil-supply-risk unwind | ~15% | XLE gives back hedge gains quickly (-15-20%), removing the book's one bright spot |
| Broad recession onset (demand-shock) | ~10-15% over 6 months (base-rate estimate) | Highest-magnitude, lowest-probability: §5; XLE would NOT reliably cushion this scenario |
| Renewed inflation re-acceleration / hawkish Fed re-pivot (10/27-28 FOMC lands the same week as GEHC's print) | **~8-12% (eased from last week's 10-15% on this run's hold-odds-rising read, §4) — still unconfirmed, not a rebuild trigger** | Multiple compression across NVDA/GEHC/OMCL (§4); would compound with, not offset, the AI-sentiment scenario above |

## 9. Hedging strategies — top 3 risks (equities-only toolbox, no options)

1. **GEHC/OMCL dual pre-earnings binary risk (8/9 days out):** unchanged — the only real equities-only hedge is the sizing discipline already in place (BR's 6%-pool trigger, the standard 5pp band, JPM's WAIT calls, OMCL's contingency plan). A no-options book cannot dampen a binary print's variance, only decide what to do after it lands.
2. **AI/semis look-through concentration (~23.3% of pool, §2):** **resolved as of 10/19 ~16:1x ET** — BR adopted the VXUS-tilt this desk proposed three reports running. No further hedging ask from this desk on this item; tracking implementation (does the tilt actually bend the number down) replaces tracking the ask itself.
3. **XLE's conditional (not general-purpose) hedge status:** still a framing fix, not a trade. Today's price action (laggard again, inverse to the rest of the book) is a live illustration — useful for the Hormuz-supply-shock scenario it's calibrated to, not a general portfolio hedge.

## 10. Rebalancing suggestions (advisory — BR owns actual target-vs-actual policy)

No position breaches a drift trigger, so this desk is not calling for a trade today. BR's 10/19 tilt adoption closes the standing rebalancing ask this desk had escalated across three reports — nothing further to add there. The one item worth carrying into the weekly distillation (due ~10/23) that is genuinely new, not a repeat: **GEHC's price keeps climbing against a flat-to-worsening DCF gap heading straight into its 10/28 print** — not a trim signal on its own (no structural break, per the standing contingency plan), but worth naming so "it's near a new high" doesn't get mistaken for "the thesis improved."

---

## Heat map summary

| Risk category | Level | Notes |
|---|---|---|
| Correlation / diversification | 🟧 Elevated | Today's bounce (AI/growth block up together, XLE red alone) is another clean confirmation of the 2-block structure, now observed in both directions across multiple sessions |
| Sector concentration (look-through) | 🟨 Moderate (downgraded from 🟥) | ~23.3% of pool unchanged today, but BR's 10/19 tilt adoption gives the book a live mechanism to bend this down going forward — escalation closed |
| Geographic / currency | 🟨 Moderate | ~25.63% pool (VXUS) unhedged FX; NVDA's Taiwan/China geography risk still unpriced |
| Interest rate sensitivity | 🟨 Moderate | NVDA/GEHC/OMCL all meaningfully rate-sensitive; this run's hike-odds read eases (not resolves) the hawkish-chatter flag; 10/27-28 FOMC still lands GEHC's print week |
| Recession drawdown | 🟧 Elevated | Blended estimate −35% to −48% (~$17.73-$24.31 at today's pool size); XLE's hedge does NOT reliably apply in a demand-shock scenario |
| Liquidity | 🟩 Low | Execution liquidity a non-issue at this account size; OMCL's earnings-gap risk the one liquidity-adjacent flag, now 9 days out |
| Single-stock / sizing | 🟨 Moderate | All mechanical triggers clean (4.10pp and 0.94pp buffers); structurally concentrated satellite book, but §2's concentration escalation is now resolved |
| Tail risk (binary earnings, 8-9 days out) | 🟥 High | GEHC + OMCL, 14.51% of equity, both now inside the final 8-9 days before their prints, GEHC entering at a fresh high against a widening DCF gap |
| Hedge integrity (XLE) | 🟨 Moderate-conditional | Today's price action reconfirms it works only for its calibrated supply-shock scenario, not demand-shock recessions |

**No position change recommended this run. No rule breached. One standing escalation (AI/semis concentration) closes cleanly this report, via BR's 10/19 policy adoption — this desk is not carrying that forward again. What this desk is naming plainly instead: GEHC is rallying into its 10/28 print on no sourced catalyst while its own fair-value gap widens, which is multiple-expansion-driven cushion, not earned safety margin, heading into a name whose last five prints were net-negative 3 times out of 5 even on a beat. Radical transparency means saying that a position "making new highs" and a position "getting safer" are not the same claim, especially eight days from a binary event.**
