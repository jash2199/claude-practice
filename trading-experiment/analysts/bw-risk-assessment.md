# BW Risk Assessment — Risk Management Report
**Date: 2026-10-19 (Monday), ~10:4x ET (verified via `TZ=America/New_York date`).** Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time. First BW report since 2026-10-16 ~15:37 ET (Friday close). No BW read posted over the weekend; this run closes a ~3-day gap.

---

## Overall Portfolio Risk Grade: **C-** — held

Nothing has structurally changed since Friday — no new position, no trigger fired, no fresh BR/BW policy move. What *has* changed is the clock: GEHC's print is now **9 days out** and OMCL's is **10 days out** — both inside a two-week window simultaneously for the first time this cycle, and both still carry zero hedge beyond "don't add, don't trim" (this book has no options toolbox). Grade held at C-, not upgraded (the pool's modest bounce since Friday is price noise, not risk reduction) and not downgraded (nothing has broken yet — every mechanical trigger remains clean). But flagging plainly: **the AI/semis look-through concentration this desk named for the first time on 10/16 is still exactly where it was three days ago** — no rebalancing action taken, no deployable cash redirected toward VXUS. A risk flagged once and left unaddressed through a second consecutive report is drifting from "named risk" toward "accepted, unstated risk." That is the opposite of this desk's mandate.

## Single biggest risk right now

**GEHC (10/28) and OMCL (10/29) earnings now sit inside a single 9-to-10-day window, combined 14.32% of equity (8.60% OMCL + 5.72% GEHC) — the book's two most historically volatile prints landing back-to-back, with this book's only defense being "don't act before the print" and no equities-only lever that actually dampens the swing.** OMCL alone has posted >10% day-0 moves in 7 of its last 8 quarters (JPM) and is already sitting on this book's largest unrealized loss (-23.71%); GEHC's own historical pattern shows 3 of its last 5 prints were net-negative even on a beat. Both are governed by existing mechanical rules (BR's 6%-pool GEHC trigger, the OMCL structural-break contingency plan) — those rules are sound, but they are sizing/reaction rules, not loss-dampening hedges. The second-largest risk, carried forward unchanged: **the AI/semis sector bet, once VTI/VXUS look-through is counted, remains ~23% of pool — still the single largest exposure on this book, still larger than the direct NVDA+OMCL 25% concentration backstop was ever designed to catch.**

---

## Portfolio snapshot (live, 2026-10-19 ~10:4x ET)

`get_portfolio`: total_value **$100.439691795** (cash $56.10 + equity $44.339691795). Pool ≈ **$50.439691795** (base $50 + **+$0.439691795 / +0.879%** accumulated profit).

| Position | Qty | Last Price | Value (approx.) | % Equity | % Pool | Unrealized P&L (cost) | Day Δ (vs 10/16 close) |
|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $217.33 | ~$5.395 | 12.17% | 10.70% | +7.91% ($201.40) | +1.49% |
| VTI | 0.036690 | $376.075 | ~$13.798 | 31.12% | 27.35% | +1.53% ($370.40) | +0.54% |
| VXUS | 0.154525 | $83.48 | ~$12.900 | 29.08% | 25.58% | -0.77% ($84.13) | +0.06% |
| OMCL | 0.106405 | $35.85 | ~$3.815 | 8.60% | 7.56% | **-23.71% ($46.99) — book's largest unrealized loss** | +1.30% |
| XLE | 0.086775 | $67.885 | ~$5.891 | 13.29% | 11.68% | +17.82% ($57.62) | -0.52% |
| GEHC | 0.036393 | $69.66 | ~$2.535 | 5.72% | 5.03% | +1.41% ($68.69) | +0.13% |
| Cash (deployable) | — | — | $6.10 | — | 12.09% | — | — |

NVDA+OMCL combined concentration: **20.77% of equity** — 4.23pp buffer to the 25% backstop, clean. GEHC pool weight 5.03% vs. BR's 4% standard target (+1.03pp, inside the 5pp band) and **0.97pp below BR's 6%-pool earnings-window trigger (expires 10/28, 9 days out — not fired)**. **OMCL DCA gate: accumulated profit $0.440 vs. the $2.50 threshold — $2.060 away.**

---

## 1. Correlation analysis between holdings

This book remains, in practice, two effective positions rather than six. Since Friday's close, NVDA/VTI/VXUS/OMCL all moved together (+0.06% to +1.49%) on a broad relief bounce while XLE alone sold off (-0.52%) and GEHC was essentially flat — the mirror image of Friday's own broad-red/XLE-green split. That symmetry is itself the tell: **the correlation structure is directional, not diversifying** — on a risk-on day the AI/growth block (NVDA+VTI+VXUS+GEHC+OMCL, ~82.8% of pool) moves together up, on a risk-off day it moves together down, and XLE moves opposite in both directions. Six tickers, two real bets: a leveraged-beta-to-AI/growth block and a geopolitical-energy hedge. Nothing about today's data changes that read from 10/16 — it reconfirms it with a second data point in the opposite direction.

## 2. Sector concentration risk — percentage breakdown (incl. look-through)

Using the same approximate broad-market sector weights as the 10/16 build (VTI ≈ U.S. total market, VXUS ≈ developed+EM ex-US; order-of-magnitude, not a fresh holdings-file pull):

| Sector | Direct holdings | Direct % of pool | Look-through from VTI/VXUS (est.) | **Total estimated % of pool** |
|---|---|---|---|---|
| **Technology / AI-semis** | NVDA | 10.70% | VTI (~32% tech wt. × 27.35%) ≈ 8.75pp + VXUS (~15% tech wt. × 25.58%) ≈ 3.84pp | **≈ 23.29% — still the single largest sector bet on the book, unchanged from 10/16** |
| Healthcare | OMCL, GEHC | 12.59% | VTI (~11% wt.) ≈ 3.01pp + VXUS (~10% wt.) ≈ 2.56pp | **≈ 18.16%** |
| Energy | XLE | 11.68% | VTI (~3.5% wt.) ≈ 0.96pp + VXUS (~5.5% wt.) ≈ 1.41pp | **≈ 14.04%** |
| All other sectors | — | — | remainder of VTI + VXUS | **≈ 44.51%** |

**No movement on this number since 10/16** — this is the second consecutive report where AI/semis look-through sits at roughly a quarter of the pool, nearly double what the direct NVDA+OMCL 25% backstop is scoped to catch (that backstop reads NVDA+OMCL at only 20.77% of *equity*, not pool, and it only ever counts the direct NVDA line — never the embedded VTI/VXUS tech weighting). **Worth naming plainly: this is a structural property of holding two broad index funds alongside a direct mega-cap tech satellite bet, and it will persist at roughly this level regardless of day-to-day price action until BR's policy process deliberately tilts new cash toward VXUS or a non-tech satellite — a point this desk raised 10/16 and is repeating here because nothing has moved on it.**

**New this run, flagged for completeness:** JPM's 10/19 brief surfaces a fresh, sourced competitive-threat narrative hitting the broader memory/semis complex — China's CXMT targeting DDR5-server memory, pressuring SNDK (unheld, -18-20% over the past week) and already a named risk to MU (unheld). Neither SNDK nor MU is held, so there is no direct P&L exposure — but it is a live reminder that the ~23% AI/semis look-through bet (concentrated via NVDA direct + the tech-heavy core) is sitting inside a sector currently absorbing real, sourced, negative headlines elsewhere. A sector-wide sentiment shock does not require a name-specific catalyst in NVDA itself to hit this book's single largest exposure.

## 3. Geographic exposure and currency risk

- **VTI (27.35% pool): 100% U.S.-domiciled equities, USD-denominated.** No direct currency risk; indirect exposure only through U.S. multinationals' foreign revenue translation.
- **VXUS (25.58% pool): developed + emerging markets ex-US — the book's only intentional currency exposure, unhedged.** A broad USD rally would be a direct drag on VXUS returns independent of underlying equity performance.
- **NVDA, OMCL, GEHC, XLE: all USD-denominated, U.S.-listed.** NVDA's Taiwan/China supply-chain dependency remains a real, currently zero-priced geopolitical tail risk that compounds with the Section 2 AI-concentration finding — unchanged from 10/16, still not modeled anywhere in this book's valuation work.
- **Net call, unchanged: ~25.58% of pool (VXUS) carries direct FX risk; NVDA carries meaningful indirect Taiwan/China geography risk this book has never separately priced.**

## 4. Interest rate sensitivity by position

| Position | Rate sensitivity | Why |
|---|---|---|
| NVDA | **High** | Long-duration growth cash flows, MS's WACC 11.59%; today's +1.49% bounce is a relief move with no sourced rate catalyst, not evidence rate risk has eased |
| GEHC | **Moderate-high** | ~$8.0B net debt (MS), WACC 9.09%, plus the pending $945M Sofie cash M&A — refinancing/M&A-funding sensitivity on top of ordinary DCF duration, now 9 days from a print that will update the leverage picture |
| OMCL | **Moderate** | Small-cap, WACC 9.59%; near-term price action remains dominated by earnings-print anticipation (10 days out), not rates |
| VTI | **Moderate** | Cap-weighted index is itself tech/growth-tilted (Section 2), so it inherits meaningful aggregate duration despite being "diversified" |
| VXUS | **Low-moderate** | Less growth/tech-weighted than VTI; subject to non-U.S. central bank rate paths independently of the Fed |
| XLE | **Low** | Price action dominated by Hormuz/geopolitical supply risk, not discount-rate moves |

No fresh Rf input this run — MS's standing ~5.19% (10/14-dated) carries forward; WebSearch for the 10yr again hit the chronic dateline wall every desk has logged for weeks. The 10/27-28 FOMC (same week as the GEHC print) is the next scheduled point where this input should actually move.

## 5. Recession stress test — estimated drawdown by position

Same order-of-magnitude bands as the 10/16 build (no new model work warranted this run), restated against today's pool size:

| Position | Estimated peak-to-trough drawdown in a moderate-to-severe recession | Precedent basis |
|---|---|---|
| NVDA | −55% to −70% | High-multiple AI-capex name; drew down ~−66% in the 2022 growth/rate-shock bear market |
| OMCL | −45% to −60% | Small-cap, already carrying a −23.71% unrealized loss; >10% day-0 earnings moves in 7 of last 8 quarters adds idiosyncratic downside |
| GEHC | −25% to −35% | Medtech is historically more defensive, but leveraged balance sheet + pending cash M&A adds vulnerability |
| VTI | −30% to −45% | Broad U.S. market, but current composition is itself growth/tech-concentrated (Section 2) |
| VXUS | −30% to −40% | Similar magnitude to VTI in USD terms, with added FX volatility |
| XLE | −40% to −65% in a demand-shock recession (vs. further gains in a supply-shock) | **Still the critical nuance: XLE's current strength is a Hormuz supply-shock story. In a classic demand-driven recession this hedge would not hold — it is conditional on the type of shock, not general-purpose protection.** |

**Blended portfolio estimate: roughly −35% to −48% peak-to-trough in a moderate-to-severe demand-driven recession — at today's ~$50.44 pool, that is a ~$17.65-$24.21 drawdown**, and importantly, without XLE reliably cushioning that specific scenario.

## 6. Liquidity risk by holding

| Holding | Liquidity rating | Note |
|---|---|---|
| NVDA | Very High | Mega-cap, among the most liquid single names on U.S. markets |
| VTI | Very High | One of the largest ETFs by AUM |
| VXUS | Very High | Large, liquid Vanguard index ETF |
| XLE | Very High | Large sector-SPDR ETF, deep book |
| GEHC | High | Large-cap, ample average daily volume |
| OMCL | **Moderate** | Small-cap; the real liquidity risk here is not "can't get filled" but that the 10/29 print itself can gap the stock straight through any stop-loss reference |

At this account's fractional-share, sub-$7-per-position scale, execution liquidity is a non-issue; OMCL's earnings-gap risk is the one liquidity-adjacent flag that actually matters, and it is now 10 days away.

## 7. Single-stock risk and position-sizing recommendations

- NVDA+OMCL combined 20.77% of equity — inside the 25% backstop, 4.23pp buffer, clean, no action triggered.
- GEHC inside both the standard 5pp drift band and BR's tighter 6%-pool earnings-window trigger (0.97pp buffer) — clean, no action triggered, but the trigger's own expiry (10/28) is now 9 days out, meaning this buffer either gets tested by price action or simply lapses unfired at the print per rule 16's no-action default. Either way, nothing this desk flags as a *sizing* problem — the mechanism is working as designed.
- **Unchanged sizing read from 10/16, restated because it still holds: four of six holdings (NVDA, OMCL, GEHC, XLE) are effectively single-stock or single-sector concentrated bets, and together with the Section 2 look-through finding, roughly 55% of this pool's effective risk is concentrated in two themes — AI/semis and binary-earnings healthcare-tech — not spread across six tickers the way the headline allocation table implies.** No rule is currently breached. This is a deliberate, high-conviction satellite book wrapped in a thin diversified core, appropriate only if that risk level is being knowingly underwritten at this account's $50-scale — which the ground rules suggest it is, but repeating a true statement without any policy response starts to look like complacency dressed as acceptance. This desk is naming that plainly rather than softening it into "worth monitoring."

## 8. Tail risk scenarios with probability estimates

| Scenario | Rough probability (next 1-6 months) | Potential impact |
|---|---|---|
| OMCL and/or GEHC earnings miss or guide-down (10/28-10/29, now inside a single 9-10 day window) | ~20-25% each (independent) | Historical >10% day-0 moves on OMCL; GEHC's defensive reputation offers only partial protection, 3 of last 5 prints net-negative even on beats |
| AI-capex sentiment shock / sector-wide memory-semis de-rating (MS's NVDA DCF gap -11.10%; fresh CXMT/DDR5 competitive narrative already hitting SNDK/MU, unheld but same sector) | ~15-20% | NVDA -30-40% in weeks; drags VTI/VXUS via look-through; this book has zero direct exposure to SNDK/MU but ~23% sector-concentrated exposure to the same theme |
| Hormuz de-escalation / sudden oil-supply-risk unwind | ~15% | XLE gives back its hedge gains quickly (-15-20%), removing this book's one bright spot |
| Broad recession onset (demand-shock) | ~10-15% over 6 months (base-rate estimate) | Highest-magnitude, lowest-probability: see Section 5; XLE would NOT reliably cushion this specific scenario |
| Renewed inflation re-acceleration forcing a hawkish Fed re-pivot (10/27-28 FOMC lands the same week as GEHC's print) | ~10% | Multiple compression across NVDA/GEHC/OMCL (all rate-sensitive per Section 4); would compound with, not offset, the AI-sentiment scenario above |

## 9. Hedging strategies — top 3 risks (equities-only toolbox, no options)

1. **GEHC/OMCL dual pre-earnings binary risk (9/10 days out):** the only real equities-only hedge is sizing discipline, which already exists (BR's 6%-pool trigger, the standard 5pp band, JPM's WAIT calls, OMCL's structural-break contingency plan). This desk is not asking for a new mechanism — the existing one is sound. The honest statement is that a no-options book simply cannot dampen a binary print's variance, only decide what to do after it lands.
2. **AI/semis look-through concentration (~23% of pool, Section 2):** the only genuine equities-only offset is relative rebalancing toward the less tech-weighted leg already in the book — VXUS over VTI for any future deployable-cash decision. This desk repeated this exact recommendation on 10/16; it is repeated again here because it has not yet been acted on. This is not a new idea this run, it is an overdue one.
3. **XLE's conditional (not general-purpose) hedge status:** the fix remains framing, not a trade. Stop describing XLE as "the portfolio hedge" without the supply-shock qualifier — it would not protect this book in a demand-shock recession (Section 5), and no better equities-only alternative exists at this account's scale without adding a new ticker, which this desk is not recommending today.

## 10. Rebalancing suggestions (advisory — BR owns actual target-vs-actual policy)

No position currently breaches any drift trigger, so this desk is not calling for a trade. For the record, restated from 10/16 because it still applies and still hasn't been adopted: if risk-only input (not valuation, not BR's mandate) were the sole driver, the AI-concentration look-through finding would argue for future deployable cash to favor VXUS over VTI or OMCL/GEHC top-ups until the ~23% AI/semis number comes down. This is a framing suggestion for BR's policy process, not a standing instruction from this desk — but a suggestion repeated unchanged across two consecutive reports with zero response is worth Jash's attention directly, not just BR's.

---

## Heat map summary

| Risk category | Level | Notes |
|---|---|---|
| Correlation / diversification | 🟧 Elevated | Reconfirmed in the opposite direction today — effectively a 2-block book (AI/growth vs. energy hedge), not 6 independent bets |
| Sector concentration (look-through) | 🟥 High | AI/semis ≈23% of pool — unchanged since 10/16, still the largest exposure on the book, still unaddressed |
| Geographic / currency | 🟨 Moderate | ~25.58% pool (VXUS) unhedged FX; NVDA carries unpriced Taiwan/China supply-chain geography risk |
| Interest rate sensitivity | 🟨 Moderate | NVDA/GEHC/OMCL all meaningfully rate-sensitive; 10/27-28 FOMC lands the same week as GEHC's print |
| Recession drawdown | 🟧 Elevated | Blended estimate −35% to −48% (~$17.65-$24.21 at today's pool size); XLE's hedge does NOT reliably apply in a demand-shock scenario |
| Liquidity | 🟩 Low | Execution liquidity is a non-issue at this account size; OMCL's earnings-gap risk is the one liquidity-adjacent flag, now 10 days out |
| Single-stock / sizing | 🟨 Moderate | All mechanical triggers clean (4.23pp and 0.97pp buffers); structurally concentrated satellite book nonetheless |
| Tail risk (binary earnings, 9-10 days out) | 🟥 High | GEHC + OMCL, 14.32% of equity, both now inside a single two-week window simultaneously — tighter than 10/16's 12/13-day read |
| Hedge integrity (XLE) | 🟨 Moderate-conditional | Working as designed for the current supply-shock scenario; would not protect in a demand-shock recession |

**No position change recommended this run. No rule breached. Two things to carry forward plainly, in keeping with this desk's mandate: (1) GEHC and OMCL's earnings are now inside a single 9-to-10-day window together — this is the tightest this book's two highest-variance binary events have ever sat relative to each other, and there is no equities-only lever that reduces that variance, only post-print discipline; (2) the AI/semis look-through concentration (~23% of pool) has now been named in two consecutive BW reports with zero policy response — this desk will keep naming it every run until BR's allocation process actually addresses it, because repeating an unactioned finding without saying so plainly is itself a form of softening a warning.**
