# BW Risk Assessment — Risk Management Report
**Date: 2026-10-19 (Monday), ~14:4x ET (verified via `TZ=America/New_York date`).** Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time. Second BW report today — first was 10:4x ET. Fresh WebSearch run this cycle (GEHC, OMCL, NVDA, rates, oil/Hormuz, broad market) found nothing dated 2026-10-19 on any query — the same chronic dateline wall every other desk has logged for 17-21+ consecutive runs. One secondary-sourced, undated item worth flagging as unconfirmed background only (see §4) — not acted on.

---

## Overall Portfolio Risk Grade: **C-** — held

Nothing structural has changed since this morning's report. The afternoon's broad relief bounce (logged by the trader at 11:38-14:36 ET) is fading — most of the book is still green on the day but softer than mid-morning, VXUS has flipped slightly red, and XLE is the day's laggard again, the same directional anti-correlation pattern this desk has now documented in both directions this week. No trigger near, no new structural catalyst found. Grade held at C-: not upgraded (fading intraday noise isn't risk reduction) and not downgraded (nothing broken). **What has changed since this morning is purely the clock, and it is the same two items this desk keeps naming: GEHC (9 days) and OMCL (10 days) both still inside a single two-week earnings window, and the ~23% AI/semis look-through concentration is now unaddressed across a third consecutive BW report (10/16, 10/19 morning, this one) with zero rebalancing response from BR — which has not posted since 10/16 and is now 3+ days stale.**

## Single biggest risk right now

**Unchanged from this morning: GEHC (10/28, 9 days) and OMCL (10/29, 10 days) earnings sitting inside a single 9-to-10-day window, combined 14.30% of equity (8.58% OMCL + 5.72% GEHC) — the book's two most historically volatile prints, back-to-back, with no equities-only lever that dampens the swing, only post-print discipline (BR's 6%-pool GEHC trigger, OMCL's structural-break contingency plan).** Close second, and arguably now the more actionable risk precisely because nothing stops it from being actioned: **the AI/semis look-through concentration (~23% of pool) has been named in three consecutive BW reports with zero policy response, and BR — the desk that owns the rebalancing lever — has gone silent for 3+ days.** A risk named repeatedly without a corresponding decision (adopt the rebalancing tilt, or explicitly decline it) is drifting from "flagged" to "quietly accepted," which this desk's mandate does not permit without saying so.

---

## Portfolio snapshot (live, 2026-10-19 ~14:4x ET)

`get_portfolio`: total_value **$100.38528278** (cash $56.10 + equity $44.28528278). Pool ≈ **$50.38528278, +$0.38528278 (+0.771%) accumulated profit** — narrowed from this morning's +0.879% as the afternoon fade continues.

| Position | Qty | Last Price | Value (approx.) | % Equity | % Pool | Unrealized P&L (cost) | Day Δ (vs 10/16 close) |
|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $217.38 | ~$5.397 | 12.18% | 10.71% | +7.94% ($201.40) | +1.52% |
| VTI | 0.036690 | $375.925 | ~$13.793 | 31.15% | 27.37% | +1.49% ($370.40) | +0.50% |
| VXUS | 0.154525 | $83.359 | ~$12.881 | 29.07% | 25.56% | -0.92% ($84.13) | **-0.09%** (flipped red since this morning) |
| OMCL | 0.106405 | $35.72 | ~$3.801 | 8.58% | 7.54% | **-23.98% ($46.99) — book's largest unrealized loss** | +0.93% |
| XLE | 0.086775 | $67.79 | ~$5.882 | 13.29% | 11.68% | +17.65% ($57.62) | **-0.66% — day's laggard, again** |
| GEHC | 0.036393 | $69.595 | ~$2.533 | 5.72% | 5.03% | +1.32% ($68.69) | +0.04% |
| Cash (deployable) | — | — | $6.10 | — | 12.11% | — | — |

NVDA+OMCL combined concentration: **20.77% of equity** — 4.23pp buffer to the 25% backstop, clean, essentially unchanged from this morning. GEHC pool weight 5.03% vs. BR's 4% target (+1.03pp) and **0.97pp below BR's 6%-pool earnings-window trigger (expires 10/28, 9 days out — not fired)**. **OMCL DCA gate: accumulated profit $0.385 vs. the $2.50 threshold — $2.115 away, widening further as the afternoon bounce fades.**

---

## 1. Correlation analysis between holdings

Today itself is now the cleanest two-sided confirmation this desk has logged: the AI/growth block (NVDA/VTI/VXUS/OMCL/GEHC) opened the day up together on the broad relief bounce, and through the afternoon it has faded together while XLE moved further into the red on both legs. **Two effective positions, not six**, is no longer a one-day observation — it has now held across a full green-to-fading session with XLE inverse to the block the entire time. This is the pattern BW has been building toward a "hedge-decoupling confirmation" test for weeks; today adds a clean same-day data point without resolving whether a sourced catalyst (vs. pure mean-reversion) is driving XLE's divergence.

## 2. Sector concentration risk — percentage breakdown (incl. look-through)

Same approximate broad-market sector weights as the 10/16 and this-morning builds (order-of-magnitude, not a fresh holdings-file pull):

| Sector | Direct holdings | Direct % of pool | Look-through from VTI/VXUS (est.) | **Total estimated % of pool** |
|---|---|---|---|---|
| **Technology / AI-semis** | NVDA | 10.71% | VTI (~32% tech wt. × 27.37%) ≈ 8.76pp + VXUS (~15% tech wt. × 25.56%) ≈ 3.83pp | **≈ 23.30% — unchanged, still the single largest sector bet on the book, now unaddressed for a third consecutive report** |
| Healthcare | OMCL, GEHC | 12.57% | VTI (~11% wt.) ≈ 3.01pp + VXUS (~10% wt.) ≈ 2.56pp | **≈ 18.14%** |
| Energy | XLE | 11.68% | VTI (~3.5% wt.) ≈ 0.96pp + VXUS (~5.5% wt.) ≈ 1.41pp | **≈ 14.04%** |
| All other sectors | — | — | remainder of VTI + VXUS | **≈ 44.52%** |

**No movement on this number across three consecutive reports.** This desk said on 10/16 that this is a structural property of the current holdings mix that persists regardless of day-to-day price action until BR's policy process deliberately tilts new cash toward VXUS or a non-tech satellite. That is still true, and BR has not posted a report since 10/16 to even acknowledge it, let alone act. Repeating a finding a third time without BR engaging is the point at which this desk stops treating it as routine monitoring and starts treating it as a live escalation — see §9 and §10.

## 3. Geographic exposure and currency risk

Unchanged from this morning:
- **VTI (27.37% pool): 100% U.S.-domiciled equities, USD-denominated.** No direct currency risk.
- **VXUS (25.56% pool): developed + EM ex-US — the book's only intentional currency exposure, unhedged.** Now slightly negative on the day (-0.09%), the first red reading for VXUS since the weekend bounce began.
- **NVDA, OMCL, GEHC, XLE: all USD-denominated, U.S.-listed.** NVDA's Taiwan/China supply-chain dependency remains unpriced and unmodeled.
- **Net call, unchanged: ~25.56% of pool (VXUS) carries direct FX risk; NVDA carries meaningful indirect Taiwan/China geography risk this book has never separately priced.**

## 4. Interest rate sensitivity by position

| Position | Rate sensitivity | Why |
|---|---|---|
| NVDA | **High** | Long-duration growth cash flows, MS's WACC 11.59% |
| GEHC | **Moderate-high** | ~$8.0B net debt (MS), WACC 9.09%, pending $945M Sofie M&A |
| OMCL | **Moderate** | Small-cap, WACC 9.59%; near-term action dominated by earnings anticipation (10 days out), not rates |
| VTI | **Moderate** | Cap-weighted index is itself tech/growth-tilted (§2) |
| VXUS | **Low-moderate** | Less growth-weighted; subject to non-U.S. rate paths |
| XLE | **Low** | Price action dominated by geopolitical supply risk, not discount-rate moves |

No fresh sourced Rf input this run — MS's standing ~5.19% (10/14-dated) carries forward. **Flagging as unconfirmed background only, not a rebuild trigger:** this run's WebSearch surfaced secondary-sourced, undated chatter describing the 10yr near 4.95-5.01% and the 10/27-28 FOMC as a "coin-flip hike-vs-hold with cuts essentially unpriced" — more hawkish in direction than the book's standing assumption, but the sourcing is thin and not dated to today, so this desk is naming it rather than acting on it. If MS can source a dated, confirmed reading before the 10/27-28 FOMC (which lands the same week as GEHC's print), that would be the actual gate to re-check WACC inputs.

## 5. Recession stress test — estimated drawdown by position

Same order-of-magnitude bands as the 10/16 and this-morning builds (no new model work warranted — prices haven't moved enough to change the picture):

| Position | Estimated peak-to-trough drawdown in a moderate-to-severe recession | Precedent basis |
|---|---|---|
| NVDA | −55% to −70% | High-multiple AI-capex name; drew down ~−66% in the 2022 growth/rate-shock bear market |
| OMCL | −45% to −60% | Small-cap, already −23.98% unrealized; >10% day-0 earnings moves in 7 of last 8 quarters |
| GEHC | −25% to −35% | Medtech defensive bias, but leveraged balance sheet + pending cash M&A adds vulnerability |
| VTI | −30% to −45% | Broad U.S. market, but composition is itself growth/tech-concentrated (§2) |
| VXUS | −30% to −40% | Similar magnitude to VTI in USD terms, plus FX volatility |
| XLE | −40% to −65% in a demand-shock recession (vs. further gains in a supply-shock) | **Still conditional, not general-purpose protection — today's own price action (laggard on a risk-on-fading day) is a reminder this hedge only works for the specific shock type it's calibrated to.** |

**Blended portfolio estimate: roughly −35% to −48% peak-to-trough in a moderate-to-severe demand-driven recession — at today's ~$50.39 pool, that is a ~$17.63-$24.18 drawdown**, without XLE reliably cushioning that specific scenario.

## 6. Liquidity risk by holding

| Holding | Liquidity rating | Note |
|---|---|---|
| NVDA | Very High | Mega-cap, among the most liquid single names on U.S. markets |
| VTI | Very High | One of the largest ETFs by AUM |
| VXUS | Very High | Large, liquid Vanguard index ETF |
| XLE | Very High | Large sector-SPDR ETF, deep book |
| GEHC | High | Large-cap, ample average daily volume |
| OMCL | **Moderate** | Small-cap; the real liquidity risk is the 10/29 print gapping the stock straight through any stop-loss reference, not execution |

At this account's fractional-share, sub-$7-per-position scale, execution liquidity is a non-issue; OMCL's earnings-gap risk is the one flag that actually matters, now 10 days out.

## 7. Single-stock risk and position-sizing recommendations

- NVDA+OMCL combined 20.77% of equity — inside the 25% backstop, 4.23pp buffer, clean.
- GEHC inside both the standard 5pp drift band and BR's tighter 6%-pool earnings-window trigger (0.97pp buffer) — clean, but the trigger expires 10/28 (9 days out): either price tests the buffer or it lapses unfired at the print per rule 16's no-action default.
- **Unchanged sizing read, restated for the third consecutive report because it still holds: four of six holdings (NVDA, OMCL, GEHC, XLE) are effectively single-stock/single-sector concentrated bets, and together with §2's look-through finding, roughly 55% of this pool's effective risk sits in two themes — AI/semis and binary-earnings healthcare-tech.** No rule is breached. This is a deliberate, high-conviction satellite book wrapped in a thin diversified core — defensible at this account's $50-scale, but a true statement repeated three times without any policy response is complacency wearing the costume of acceptance. Naming it plainly again rather than softening it.

## 8. Tail risk scenarios with probability estimates

| Scenario | Rough probability (next 1-6 months) | Potential impact |
|---|---|---|
| OMCL and/or GEHC earnings miss or guide-down (10/28-10/29, single 9-10 day window) | ~20-25% each (independent) | OMCL >10% day-0 moves in 7 of last 8 quarters; GEHC 3 of last 5 prints net-negative even on a beat |
| AI-capex sentiment shock / sector-wide memory-semis de-rating | ~15-20% | NVDA -30-40% in weeks; drags VTI/VXUS via look-through; CXMT/DDR5 competitive narrative already live in SNDK/MU (unheld, same sector) |
| Hormuz de-escalation / sudden oil-supply-risk unwind | ~15% | XLE gives back hedge gains quickly (-15-20%), removing the book's one bright spot |
| Broad recession onset (demand-shock) | ~10-15% over 6 months (base-rate estimate) | Highest-magnitude, lowest-probability: §5; XLE would NOT reliably cushion this scenario |
| Renewed inflation re-acceleration / hawkish Fed re-pivot (10/27-28 FOMC lands the same week as GEHC's print) | ~10-15% (nudged up slightly on §4's unconfirmed hawkish chatter — not yet confirmed enough to move further) | Multiple compression across NVDA/GEHC/OMCL (§4); would compound with, not offset, the AI-sentiment scenario above |

## 9. Hedging strategies — top 3 risks (equities-only toolbox, no options)

1. **GEHC/OMCL dual pre-earnings binary risk (9/10 days out):** unchanged — the only real equities-only hedge is the sizing discipline already in place (BR's 6%-pool trigger, the standard 5pp band, JPM's WAIT calls, OMCL's contingency plan). A no-options book cannot dampen a binary print's variance, only decide what to do after it lands.
2. **AI/semis look-through concentration (~23% of pool, §2):** the only genuine equities-only offset is relative rebalancing toward VXUS over VTI for any future deployable-cash decision. **This is the third consecutive report carrying this exact recommendation unchanged.** This desk is not asking BR for a new idea — it already has one on the table. The ask now is explicit: either BR adopts it at its next report, or BR tells Jash directly why it's declining to. Silence is no longer an acceptable third option.
3. **XLE's conditional (not general-purpose) hedge status:** still a framing fix, not a trade. Today's own price action (laggard again, inverse to the rest of the book) is a live illustration — useful for the Hormuz-supply-shock scenario it's calibrated to, not a general portfolio hedge.

## 10. Rebalancing suggestions (advisory — BR owns actual target-vs-actual policy)

No position breaches a drift trigger, so this desk is not calling for a trade today. But the standing suggestion — future deployable cash should favor VXUS over VTI or OMCL/GEHC top-ups until the ~23% AI/semis number comes down — has now gone three BW reports and 3+ days of BR silence without a response. **This desk is escalating the framing: this should be explicitly addressed in the weekly distillation due ~10/23, either as an adopted policy tilt or a documented, reasoned decline — not carried forward silently a fourth time.**

---

## Heat map summary

| Risk category | Level | Notes |
|---|---|---|
| Correlation / diversification | 🟧 Elevated | Today's full session (green-bounce → fade, XLE inverse throughout) is the cleanest same-day confirmation yet of the 2-block book (AI/growth vs. energy hedge) |
| Sector concentration (look-through) | 🟥 High | AI/semis ≈23.3% of pool — unchanged across three consecutive BW reports, BR silent 3+ days, zero rebalancing response |
| Geographic / currency | 🟨 Moderate | ~25.56% pool (VXUS) unhedged FX, now slightly red on the day; NVDA's Taiwan/China geography risk still unpriced |
| Interest rate sensitivity | 🟨 Moderate | NVDA/GEHC/OMCL all meaningfully rate-sensitive; unconfirmed hawkish Fed chatter this run, not yet a rebuild trigger; 10/27-28 FOMC lands GEHC's print week |
| Recession drawdown | 🟧 Elevated | Blended estimate −35% to −48% (~$17.63-$24.18 at today's pool size); XLE's hedge does NOT reliably apply in a demand-shock scenario |
| Liquidity | 🟩 Low | Execution liquidity a non-issue at this account size; OMCL's earnings-gap risk the one liquidity-adjacent flag, now 10 days out |
| Single-stock / sizing | 🟨 Moderate | All mechanical triggers clean (4.23pp and 0.97pp buffers); structurally concentrated satellite book nonetheless, now flagged a third time |
| Tail risk (binary earnings, 9-10 days out) | 🟥 High | GEHC + OMCL, 14.30% of equity, both inside a single two-week window, unchanged from this morning |
| Hedge integrity (XLE) | 🟨 Moderate-conditional | Today's price action reconfirms it works only for its calibrated supply-shock scenario, not demand-shock recessions |

**No position change recommended this run. No rule breached. Two things carried forward plainly, per this desk's mandate: (1) GEHC and OMCL's earnings remain inside a single 9-to-10-day window with no equities-only lever to reduce that variance; (2) the AI/semis look-through concentration (~23% of pool) has now gone unaddressed through three consecutive BW reports and 3+ days of BR silence — this desk is escalating past "keep naming it" to recommending the weekly distillation (due ~10/23) force an explicit adopt-or-decline decision, because a true risk repeated a fourth time with no response would no longer be transparency, it would be noise with a grade attached.**
