# BW Risk Assessment — Risk Management Report
**Date: 2026-10-16 (Friday), ~14:4x ET (verified via `TZ=America/New_York date`).** Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time. Fourth run of the day on this book (after 09:37 ET, 10:38 ET NO TRADE, and 10:42 ET risk reads); first BW report since 2026-10-16 ~10:42 ET (grade C-, held). WebSearch this run (VIX/S&P, 10yr yield/recession probability) hit the same chronic dateline wall every desk has logged for 11+ consecutive runs — no genuinely 10/16-dated macro print surfaced. Macro context below carries forward GS's 10/16 ~12:4x ET dated finds (10yr yield ~5.06% close 10/15, Brent $105.92/WTI $97.97 10/15, six-day PHLX semis selloff, CXMT DRAM-threat headline on MU) rather than re-deriving them.

---

## Overall Portfolio Risk Grade: **C-** — held

No structural change since this morning's 10:42 ET report. What *did* move today: this is a **broadly correlated risk-off session** — NVDA, VTI, VXUS, OMCL, and GEHC are all down together (−1.1% to −1.9%) while XLE is the lone gainer (+2.3%), re-coupling with the Hormuz/oil narrative for a third straight session. That is the correlation structure this book is built on working exactly as designed *for a supply-shock day* — see the correlation and hedging sections below for why that is a narrower, more conditional form of protection than it may look from the P&L alone. Grade held at C-, not upgraded (the session is a point of technical relief, not a structural fix to the dual-earnings concentration) and not downgraded (nothing broke; the drawdown is in line with, not in excess of, the volatility this book has already priced).

## Single biggest risk right now

**Unchanged in kind, closer in time: GEHC and OMCL earnings, 12 and 13 calendar days out (2026-10-28 and 2026-10-29), combined 14.27% of equity, both sitting on this book's two largest percentage swings (OMCL: −24.9% unrealized, the book's largest loss; GEHC: the book's most recent post-entry high before today's pullback).** BR's time-boxed 6%-of-pool GEHC earnings-window trigger remains sound and ungoverned by this desk's mandate; it has not fired (GEHC at 5.06% pool weight, 0.94pp of buffer remaining). This desk's own addition this run, below: **the dual-earnings risk is not the only concentration on this book worth naming in the same breath — a look-through sector analysis shows AI/semis exposure, not healthcare-earnings exposure, is actually the single largest structural bet on the book once VTI's and VXUS's own tech weightings are counted alongside the direct NVDA stake.** Both risks are real; they resolve on different clocks (binary/14 days vs. structural/ongoing) and neither should be read as having eclipsed the other.

---

## Portfolio snapshot (live, 2026-10-16 ~14:4x ET)

`get_portfolio`: total_value **$100.227036885** (cash $56.10 + equity $44.127036885). Pool ≈ **$50.227036885** (base $50 + **+$0.227 / +0.45%** accumulated profit) — down from this morning's $50.631 (10:42 ET) and $50.87x-area reads earlier in the week; today is a net pullback day for the pool, driven by the broad equity-side decline only partly offset by XLE.

| Position | Qty | Last Price | Value | % Equity | % Pool | Unrealized P&L (cost) | Day Δ (vs 10/15 close) |
|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $214.790 | $5.332 | 12.08% | 10.62% | +6.65% ($201.40) | **−1.12%** |
| VTI | 0.036690 | $373.575 | $13.707 | 31.07% | 27.29% | +0.86% ($370.40) | −1.28% |
| VXUS | 0.154525 | $83.375 | $12.884 | 29.20% | 25.65% | −0.90% ($84.13) | −0.55% |
| OMCL | 0.106405 | $35.270 | $3.753 | 8.51% | 7.47% | **−24.94% ($46.99) — book's largest unrealized loss** | −1.89% |
| XLE | 0.086775 | $68.100 | $5.909 | 13.39% | 11.77% | +18.19% ($57.62) | **+2.31% — today's standout, third straight session re-coupling with the Hormuz/oil narrative** |
| GEHC | 0.036393 | $69.875 | $2.543 | 5.76% | 5.06% | +1.73% ($68.69) — cooling further from Thursday's peak | −0.68% |
| Cash (deployable) | — | — | $6.10 | — | 12.15% | — | — |

NVDA+OMCL combined concentration: **20.59% of equity** — 4.41pp buffer to the 25% backstop (clean, slightly tighter than this morning as both legs fell). GEHC pool weight 5.06% vs. BR's 4% standard target (+1.06pp, inside the 5pp band) and 0.94pp below BR's 6%-pool earnings-window trigger (not fired). **OMCL DCA gate: accumulated profit $0.227 vs. the $2.50 threshold — $2.273 away, widened further on today's pullback.**

---

## 1. Correlation analysis between holdings

Today is a clean natural experiment for this book's actual correlation structure. Five of six holdings moved down together (NVDA −1.12%, VTI −1.28%, VXUS −0.55%, OMCL −1.89%, GEHC −0.68%) on no single-name news found by any desk this run — consistent with a broad, multi-asset risk-off tape (equities down, bonds bid per the carryforward rate read). **NVDA, VTI, and VXUS in particular move nearly in lockstep on broad-tape days** — unsurprising since both index funds carry heavy look-through exposure to the same mega-cap AI names NVDA represents directly (see Section 2). OMCL and GEHC, nominally an unrelated healthcare-tech pairing, also tracked the broad tape down today rather than acting as diversifiers — on a day like this, this book's "six holdings" behave more like two effective positions: **a single leveraged-beta-to-AI/growth block (NVDA+VTI+VXUS+GEHC+OMCL, ~82.8% of pool) and a single geopolitical-energy hedge (XLE, ~11.8% of pool).** That is a far more concentrated risk profile than six tickers suggests, and it is the honest frame for every other section below.

## 2. Sector concentration risk — percentage breakdown (incl. look-through)

Headline sector tags understate true exposure because VTI and VXUS are not neutral diversifiers against this book's own satellite bets — they are both themselves tech-heavy index funds. Using standard, approximate broad-market sector weights (VTI ≈ U.S. total market, VXUS ≈ developed+EM ex-US; figures are indicative order-of-magnitude, not a fresh holdings-file pull this run):

| Sector | Direct holdings | Direct % of pool | Look-through from VTI/VXUS (est.) | **Total estimated % of pool** |
|---|---|---|---|---|
| **Technology / AI-semis** | NVDA | 10.62% | VTI (~32% tech wt. × 27.29%) ≈ 8.7pp + VXUS (~15% tech wt. × 25.65%) ≈ 3.8pp | **≈ 23.1%** — the single largest sector bet on the book |
| Healthcare | OMCL, GEHC | 12.53% | VTI (~11% wt.) ≈ 3.0pp + VXUS (~10% wt.) ≈ 2.6pp | **≈ 18.1%** |
| Energy | XLE | 11.77% | VTI (~3.5% wt.) ≈ 1.0pp + VXUS (~5.5% wt.) ≈ 1.4pp | **≈ 14.2%** |
| All other sectors (financials, industrials, consumer, etc.) | — | — | remainder of VTI + VXUS | **≈ 44.6%** |

**Radical-transparency read: this book's single largest sector exposure is not GEHC/OMCL healthcare and it is not the XLE energy hedge — it is AI/semiconductors, at nearly a quarter of the pool once NVDA's presence inside VTI and VXUS is counted.** No desk on this book, this one included until this run, has been pricing that look-through number into the "concentration" conversation; every prior risk read has scoped concentration to the direct NVDA+OMCL 25% backstop only, which misses roughly 12-13pp of indirect AI exposure riding inside the "diversified" 52.9% VTI+VXUS core.

## 3. Geographic exposure and currency risk

- **VTI (27.29% pool): 100% U.S.-domiciled equities, USD-denominated.** No direct currency risk; indirect exposure only through U.S. multinationals' foreign revenue translation.
- **VXUS (25.65% pool): developed + emerging markets ex-US — the book's only intentional currency exposure.** USD-based investors carry EUR, JPY, GBP, and a basket of EM currency risk unhedged (VXUS does not hedge FX). A broad USD rally (plausible if the carryforward rate narrative reverses and capital rotates back into U.S. bonds/dollar) would be a direct drag on VXUS returns independent of underlying equity performance.
- **NVDA, OMCL, GEHC, XLE: all USD-denominated, U.S.-listed.** Indirect geographic exposure only: NVDA's revenue is heavily non-U.S. (data-center/hyperscaler customers globally, meaningful China/Taiwan supply-chain dependency — an unhedged geopolitical-supply-chain risk this book has never separately modeled), XLE's constituents have global upstream/downstream operations, GEHC has real international revenue (its core medtech business is global).
- **Net call: ~25.65% of pool (VXUS) carries direct FX risk; NVDA carries meaningful indirect geopolitical/supply-chain-geography risk (Taiwan/China) that is currently zero-priced anywhere in this book's models.** That Taiwan/China dependency is arguably a bigger tail risk to NVDA than its U.S.-dollar-denominated price tag suggests, and it compounds with the Section 2 AI-concentration finding.

## 4. Interest rate sensitivity by position

| Position | Rate sensitivity | Why |
|---|---|---|
| NVDA | **High** | Long-duration growth cash flows, richly multiple-dependent (MS's WACC 11.59%); the carryforward 10/15 rate drop (10yr to ~5.06%, "worst day in over a year" per CNBC) should mechanically help NVDA's DCF, yet NVDA still fell today — a sign something other than rates (AI-capex sentiment, profit-taking after the week's run, or the semis-sector selloff GS flagged) is currently driving the name more than discount-rate relief is. |
| GEHC | **Moderate-high** | ~$8.0B net debt (per MS), WACC 9.09%, plus a pending $945M cash M&A (Sofie deal, H1 2027 close) that will likely need financing/cash deployment — refinancing-cost and M&A-funding sensitivity on top of ordinary DCF duration. |
| OMCL | **Moderate** | Small-cap, WACC 9.59% per MS; small-caps generally carry higher effective cost of capital and are disproportionately hurt by a "higher for longer" regime, but OMCL's near-term price action is dominated by earnings-print anticipation, not rates. |
| VTI | **Moderate** | Cap-weighted index is itself tech/growth-tilted (see Section 2), so it inherits meaningful aggregate duration despite being "diversified." |
| VXUS | **Low-moderate** | Less growth/tech-weighted than VTI; more value/financials/industrials-tilted internationally, and subject to non-U.S. central bank rate paths independently of the Fed. |
| XLE | **Low** | Energy is a value sector with low multiple-duration; price action is currently dominated by Hormuz/geopolitical supply risk and OPEC+ dynamics, not by discount-rate moves — rates are a second-order driver here. |

## 5. Recession stress test — estimated drawdown by position

Order-of-magnitude estimates against historical recession/bear-market precedent for each asset class, not a position-specific model rebuild (that is MS's mandate, not this desk's):

| Position | Estimated peak-to-trough drawdown in a moderate-to-severe recession | Precedent basis |
|---|---|---|
| NVDA | **−55% to −70%** | High-multiple AI-capex name; NVDA itself drew down ~−66% in the 2022 growth/rate-shock bear market without a recession even being declared |
| OMCL | **−45% to −60%** | Small-cap, already carrying a −24.9% unrealized loss; small-caps (Russell 2000) have historically drawn down 40-55%+ in recessions, and OMCL's earnings-volatility history (>10% day-0 moves in 7 of last 8 quarters, per JPM) adds idiosyncratic downside on top |
| GEHC | **−25% to −35%** | Medtech/healthcare is historically more defensive, but leveraged balance sheet + pending cash M&A adds vulnerability a pure defensive name wouldn't carry |
| VTI | **−30% to −45%** | Broad U.S. market, but current index composition is itself growth/tech-concentrated (Section 2), pushing the estimate toward the upper end of typical "diversified index" recession drawdowns (2008-09 GFC: S&P 500 −57% peak-to-trough; 2020 COVID: −34% but V-shaped) |
| VXUS | **−30% to −40%** | Similar magnitude to VTI in USD terms, with added FX volatility in either direction |
| XLE | **−40% to −65% in a demand-shock recession** vs. the opposite (further gains) in a supply-shock scenario | **This is the critical nuance this book has not stated plainly before: XLE's current strength is a Hormuz supply-shock story. In a classic demand-driven global recession, energy demand collapses and oil/energy equities have historically cratered alongside (or worse than) the broad market — COVID 2020: XLE fell over 60% intraday trough. The "XLE = portfolio hedge" framing baked into this book's asset-allocation policy is conditional on the *type* of shock, not a general-purpose recession hedge, and should not be treated as one.** |

**Blended portfolio estimate: roughly −35% to −48% peak-to-trough in a moderate-to-severe demand-driven recession**, meaningfully worse than a naive reading of "six diversified holdings" would suggest, and importantly **without XLE reliably cushioning the blow** in that specific scenario (it would likely cushion a supply-shock-only scenario, which is the one currently priced).

## 6. Liquidity risk by holding

| Holding | Liquidity rating | Note |
|---|---|---|
| NVDA | Very High | Mega-cap, among the most liquid single names on U.S. markets |
| VTI | Very High | One of the largest ETFs by AUM; negligible execution risk at any size this account could ever reach |
| VXUS | Very High | Same — large, liquid Vanguard index ETF |
| XLE | Very High | Large sector-SPDR ETF, deep book |
| GEHC | High | Large-cap, ample average daily volume |
| OMCL | **Moderate** | Small-cap; decent ADV in normal conditions but historically prone to wide, fast gap moves around its own earnings (>10% day-0 moves in 7 of last 8 quarters per JPM) — the liquidity risk here is less "can't get filled" and more "the print itself can gap the stock through any stop-loss reference" |

At this account's size (fractional shares, sub-$7 single-position dollar amounts), execution liquidity is a non-issue for every name; OMCL's earnings-gap risk is the one liquidity-adjacent risk that actually matters here.

## 7. Single-stock risk and position-sizing recommendations

- NVDA+OMCL combined 20.59% of equity remains inside the 25% backstop (4.41pp buffer) — clean, no action triggered.
- GEHC inside both the standard 5pp drift band and BR's tighter 6%-pool earnings-window trigger (0.94pp buffer) — clean, no action triggered.
- **This desk's sizing read, independent of the existing mechanical triggers: four of six holdings (NVDA, OMCL, GEHC, XLE) are effectively single-stock or single-sector concentrated bets, and together with the Section 2 look-through finding, roughly 55% of this pool's *effective* risk (not headline allocation) is concentrated in two themes — AI/semis and binary-earnings healthcare-tech — rather than spread across the six-ticker, "mostly-diversified" look the headline allocation table suggests.** No rule is currently breached. The honest statement is that this book is running a concentrated, high-conviction satellite book wrapped in a thin diversified core, appropriate only if the trader (and Jash) are deliberately underwriting that risk level for a $50-scale account — which the ground rules suggest they are, but it should be named plainly each cycle, not left implicit in a clean heat-map row.

## 8. Tail risk scenarios with probability estimates

| Scenario | Rough probability (next 1-6 months) | Potential impact |
|---|---|---|
| AI-capex sentiment shock / NVDA-specific de-rating (MS's DCF gap already −11.15%, now widening on a down week) | ~15-20% | NVDA −30-40% in weeks; drags VTI/VXUS via look-through |
| OMCL and/or GEHC earnings miss or guide-down at the 10/28-10/29 prints | ~20-25% each (independent) | Historical >10% day-0 moves on OMCL; GEHC's defensive reputation offers only partial protection |
| Hormuz de-escalation / sudden oil-supply-risk unwind | ~15% | XLE gives back its hedge gains quickly (−15-20%), removing this run's one bright spot |
| Broad recession onset (demand-shock) | ~10-15% over 6 months (base-rate estimate, not a proprietary macro call) | Highest-magnitude, lowest-probability: see Section 5 blended estimate, and note XLE would NOT reliably cushion this specific scenario |
| Renewed inflation re-acceleration forcing a hawkish Fed re-pivot | ~10% | Multiple compression across NVDA/GEHC/OMCL (all rate-sensitive per Section 4); would compound with, not offset, the AI-sentiment scenario above |

## 9. Hedging strategies — top 3 risks (equities-only toolbox, no options)

1. **GEHC/OMCL dual pre-earnings binary risk (12/13 days out):** the only real equities-only hedge here is sizing discipline, which already exists (BR's 6%-pool trigger, the standard 5pp band, JPM's WAIT calls). This desk is not asking for a new mechanism on top of an already-working one — simply flagging that "don't add, don't trim before the print, let the existing triggers govern" remains the correct posture.
2. **AI/semis look-through concentration (~23% of pool, Section 2):** the only genuine equities-only offset is *relative* rebalancing toward the less tech-weighted leg already in the book — VXUS carries a materially lower tech weighting than VTI. This desk is not asking BR to change the formal 28%/25% VTI/VXUS policy split, but flags that any future deployable-cash decision should weigh that VXUS, not VTI, is the diversifier that actually dilutes this book's largest sector bet.
3. **XLE's conditional (not general-purpose) hedge status:** the fix is framing, not a trade — stop describing XLE as "the portfolio hedge" without the supply-shock qualifier. If a true recession/demand-shock hedge is ever wanted within an equities-only, no-options toolbox, the honest options are (a) leaning further into the existing diversified core (VTI/VXUS) rather than a single sector bet, or (b) a genuinely defensive-sector allocation (e.g., consumer staples/utilities-style exposure) — neither of which this book currently holds, and this desk is not recommending adding a new ticker at this account's scale, only correcting the mental model.

## 10. Rebalancing suggestions (advisory — BR owns actual target-vs-actual policy)

No position currently breaches any drift trigger, so this desk is not calling for a trade. For the record, if risk-only (not valuation, not BR's mandate) were the sole input: the AI-concentration look-through finding in Section 2 would argue, at the margin, for future deployable cash to favor VXUS over VTI or OMCL/GEHC top-ups until that ~23% AI/semis look-through number comes down — not because anything is broken today, but because it is the single largest sector bet on the book and currently sits outside every existing mechanical trigger, which are all scoped to single-name (NVDA+OMCL 25%) or single-position (GEHC 5pp/6pp) concentration rather than cross-holding sector look-through. This is a framing suggestion for BR's policy process, not a standing instruction from this desk.

---

## Heat map summary

| Risk category | Level | Notes |
|---|---|---|
| Correlation / diversification | 🟧 Elevated | 5 of 6 holdings moved together today; effectively a 2-block book (AI/growth vs. energy hedge), not 6 independent bets |
| Sector concentration (look-through) | 🟥 High | AI/semis ≈23% of pool once VTI/VXUS look-through is counted — largest, least-monitored exposure on the book |
| Geographic / currency | 🟨 Moderate | ~25.65% pool (VXUS) unhedged FX; NVDA carries unpriced Taiwan/China supply-chain geography risk |
| Interest rate sensitivity | 🟨 Moderate | NVDA/GEHC/OMCL all meaningfully rate-sensitive; today's price action didn't track the rate narrative cleanly |
| Recession drawdown | 🟧 Elevated | Blended estimate −35% to −48%; XLE's hedge does NOT reliably apply in a demand-shock scenario |
| Liquidity | 🟩 Low | Execution liquidity is a non-issue at this account size; OMCL's earnings-gap risk is the one liquidity-adjacent flag |
| Single-stock / sizing | 🟨 Moderate | All mechanical triggers clean (4.41pp and 0.94pp buffers); structurally concentrated satellite book nonetheless |
| Tail risk (binary earnings, 12-13 days out) | 🟧 Elevated | GEHC + OMCL, 14.27% of equity, both inside their respective windows |
| Hedge integrity (XLE) | 🟨 Moderate-conditional | Working as designed for the current supply-shock scenario; would not protect in a demand-shock recession — framing risk, not a position risk |

**No position change recommended this run. No rule breached. The two things worth carrying into the next cycle: (1) GEHC/OMCL's binary window is now inside two weeks for the first name and closes this month, and (2) the AI/semis look-through concentration (~23% of pool) deserves a standing line in this book's risk conversation going forward, not a one-time mention — this desk will keep tracking it explicitly each run rather than letting it fall back under the single-name-only 25% backstop's shadow.**
