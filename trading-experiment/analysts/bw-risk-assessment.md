# BW Risk Assessment

**Report date: 2026-11-26 (Thursday, Thanksgiving Day), ~15:0x ET** (verified via `TZ=America/New_York date`; persona file re-read fresh this run, unchanged since last cycle). Live Robinhood `get_portfolio`/`get_equity_positions`/`get_equity_quotes` on account 424593861. **US equity markets are closed today for the Thanksgiving holiday** — confirmed via frozen/stale, artificially wide bid/ask spreads on every holding (e.g. NVDA bid $134.72/ask $151.39, VXUS bid $76.50/ask $83.00) and `last_trade_price` timestamps that all cluster at Wednesday 2026-11-25's 20:59:59 UTC close. This report is therefore a **price-action-frozen update, not a fresh structural read** — every number below is Wednesday 11/25's regular-session close, carried forward. No new fundamental fact exists to find today; the holiday itself is the only "event." Prior BW read: 2026-11-25 ~13:41 ET.

## Overall Portfolio Risk Grade: **D** (held, not upgraded)

## Single biggest risk right now

**This book still runs with zero hedge against its own largest, most volatile, most event-prone exposure — NVDA and the AI/semis complex it's wired into — and a quiet holiday changes nothing about that.** Look-through the two broad ETFs and the real AI/semis exposure isn't the ~9% NVDA line item alone: VTI (31.7% of equity) is itself a cap-weighted US index with heavy Mag-7/semis weighting, and VXUS carries a smaller but real slice too. Combined look-through tech/AI exposure across NVDA + VTI's + VXUS's embedded tech sleeves runs to roughly **23-24% of equity** — more than double what the position list on its face suggests, and the single number this desk considers most under-appreciated by the rest of the book's run-of-show risk checks (which track NVDA's own line-item weight against mechanical triggers, not the look-through total). This book has now lived through, in the span of three weeks, a confirmed CEO resignation, an interim-CEO handoff, a full reinstatement, a +34% single-session reinstatement spike, and a sector-wide AI/semis selloff (AMD/ADI/ALAB/SNDK/MU all down double digits on 11/24) — proof that this factor bet can move ~9-30 points in a single session with no insurance against any of it. **Grade held at D**: nothing structural changed today (it couldn't — the market is closed), but nothing has been fixed either. The standing, now multi-week-old ask for a built defensive/diversifying sleeve remains open and unbuilt.

---

## Portfolio snapshot (ground truth, this run — Wednesday 11/25 close basis, market closed today)

`get_portfolio`: total_value **$97.003071026** = cash $56.10 + equity $40.903071026 — unchanged to the penny vs. yesterday's final reading. Trading pool (= total − $50 off-limits reserve) = **$47.003071026**, a **-$2.996928974 / -5.99%** accumulated loss against the $50 base. Deployable cash $6.10 (**12.98% of pool**).

| Symbol | Qty | Avg Cost | Last Px (11/25 close) | Mkt Value | Cost Basis | Unrealized P&L | % of Equity | % of Pool |
|---|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $201.40 | $149.33 | $3.71 | $5.00 | **-$1.29 / -25.9%** | 9.06% | 7.89% |
| VTI | 0.036690 | $370.40 | $353.32 | $12.96 | $13.59 | -$0.63 / -4.6% | 31.69% | 27.58% |
| VXUS | 0.154525 | $84.13 | $78.00 | $12.05 | $13.00 | -$0.95 / -7.3% | 29.47% | 25.64% |
| OMCL | 0.106405 | $46.99 | $34.59 | $3.68 | $5.00 | **-$1.32 / -26.4%** | 9.00% | 7.83% |
| XLE | 0.086775 | $57.62 | $60.88 | $5.28 | $5.00 | +$0.28 / +5.6% | 12.92% | 11.24% |
| GEHC | 0.036393 | $68.69 | $83.30 | $3.03 | $2.50 | +$0.53 / +21.3% | 7.41% | 6.45% |

Mechanical gates checked, all clean (no change possible with markets closed, carried forward from 11/25 ~12:36 ET):
- GEHC drift-trim trigger (BR's 7.5%-of-pool line): **~1.05pp away**, not fired — the closest live gate on the book.
- NVDA drift-trim trigger (BR's 10.5%-of-pool line, adopted 11/24): **~2.61pp away**, not fired.
- NVDA+OMCL combined concentration: **18.06% of equity** (25% hard trigger, ~6.94pp buffer; 20% soft line, ~1.94pp buffer) — clean on both.
- OMCL DCA gate (rule 18, needs +$2.50 accumulated pool profit): pool is **-$2.997**, ~$5.50 away — deeply unfired.
- NVDA $180 contingency-plan-v2 revisit line: last $149.33 is **-17.0%** below it — a continuation of the already-fired-and-resolved 11/12 governance disqualifier, not a fresh trigger.
- OMCL's MS-recalibrated $33.00 bear floor: last $34.59 is **+4.8%** above it — recovered, not breached.
- GEHC's $62 revisit line: last $83.30 is **+34.4%** above it — no issue.
- Rule 6a rate-shock pause: last confirmed 10-year Treasury print **5.051% (11/19)**, vs. the 4.75% reopening threshold — **~30bp buffer, pause still in effect.** A fresh WebSearch this run found no reading dated 11/25-26 (expected — bond markets closed early/holiday); nothing newer than 11/19 exists to update this with.

---

## 1. Correlation analysis between holdings

- **NVDA ↔ VTI: high positive correlation.** VTI is cap-weighted and Mag-7/semis-heavy; NVDA-driven swings visibly bleed into VTI on every high-volatility session this book has logged (11/12 resignation, 11/17 print, 11/23 reinstatement, 11/24 sector selloff all moved VTI in the same direction as NVDA, just damped).
- **NVDA ↔ VXUS: moderate positive correlation.** Weaker than VTI (less US-tech weight) but not zero — global AI-sentiment and risk-on/risk-off flows move both together in a broad selloff, as seen 11/19 and 11/24.
- **NVDA ↔ OMCL/GEHC/XLE: this is the book's one genuine diversification win, and it showed up live on 11/24.** When the sector-wide AI/semis selloff hit (AMD/ADI/ALAB/SNDK/MU all down double digits), OMCL, GEHC, and XLE were all green while NVDA/VTI/VXUS absorbed the move — a clean, real-money demonstration that healthcare and energy exposure is not just theoretically uncorrelated with the AI/semis factor, it actually decoupled under live stress.
- **OMCL ↔ GEHC: low-to-moderate correlation.** Both are healthcare-adjacent (healthcare IT vs. medtech/diagnostics) but different sub-sectors, different market caps, and have traded independently of each other on idiosyncratic news (OMCL's earnings-driven floor breaches vs. GEHC's conference/CFO-transition-driven moves) more often than together.
- **XLE ↔ everything else: low correlation, occasionally negative.** Energy's own demand/supply and geopolitical (Hormuz/Red Sea) drivers are structurally distinct from the AI/semis/rate-sensitivity complex that moves the other five names. This is the book's cleanest hedge-like asset today, even though it was sized as a conviction pick, not a hedge.
- **Practical read: the real correlation structure is a 2-cluster book** — a large, correlated "growth/rate-sensitive" cluster (NVDA, VTI, VXUS, and to a lesser extent OMCL/GEHC's growth premium) vs. a small "idiosyncratic/defensive-adjacent" cluster (XLE, and OMCL/GEHC on name-specific news only). The first cluster is ~9x the size of what a genuinely diversified book would carry in one correlated factor.

## 2. Sector concentration risk, with percentage breakdown (% of equity)

| Sector / look-through bucket | % of Equity | Notes |
|---|---|---|
| Technology / Semiconductors (NVDA direct) | 9.06% | Single idiosyncratic name, largest unrealized loss alongside OMCL |
| Technology look-through (embedded in VTI + VXUS) | ~14-15% (est.) | Cap-weighted index tech/semis weighting, not visible on the position list |
| **Total AI/semis/tech look-through exposure** | **~23-24%** | **The book's real concentration number — nearly 1-in-4 dollars of equity is wired to this one factor** |
| Broad US equity (VTI, ex-tech look-through) | ~17% | Diversified within the US market |
| Broad ex-US equity (VXUS, ex-tech look-through) | ~15% | Diversified internationally, adds currency risk (see §3) |
| Healthcare (OMCL + GEHC combined) | 16.41% | Two different healthcare sub-sectors, moderate-correlation, both idiosyncratic single names |
| Energy (XLE) | 12.92% | Diversified 24-holding basket, exempt from single-name veto per standing rule |

**Flag: the position-list view undercounts tech/AI concentration by roughly 2.5x.** Every mechanical trigger this book tracks (NVDA's own weight, NVDA+OMCL combined) checks the direct line items, not the look-through total — which is real exposure the triggers don't see.

## 3. Geographic exposure and currency risk factors

- **US-domiciled/listed: NVDA, OMCL, XLE, GEHC, VTI (100% US market) — ~90.6% of equity on a listing basis.** But NVDA, OMCL, and GEHC all have meaningful non-US revenue exposure (NVDA's guide already assumes zero China data-center compute revenue — a China-policy risk baked into the base case, not a geographic diversifier; GEHC and OMCL both have real international healthcare-system revenue).
- **VXUS: 29.47% of equity, 100% foreign-market exposure (developed + EM), fully unhedged currency risk.** This is the book's only deliberate currency diversifier — a weaker USD helps it, a stronger USD (e.g., a flight-to-dollar in a global risk-off episode) hurts it on top of any local-market decline, which is exactly the scenario that tends to coincide with the AI/semis-selloff days this book has already lived through.
- **No direct emerging-market, commodity-currency, or hedged-FX instrument held.** The only currency exposure is the single VXUS line, unhedged, and it moves in the same direction as the US-cluster risk-off days more often than it offsets them (a cross-currency risk-off double-whammy, not a clean diversifier, in the scenarios that matter most).

## 4. Interest rate sensitivity for each position

| Symbol | Rate sensitivity | Why |
|---|---|---|
| NVDA | **High** | Long-duration growth DCF; MS's own model has repeatedly swung NVDA between undervalued/overvalued purely on WACC/risk-free-rate inputs with zero fundamentals change |
| OMCL | **High** | Small-cap growth-ish healthcare IT; same WACC-sensitivity profile as NVDA, demonstrated by its own DCF's repeated re-ratings |
| GEHC | **Moderate-High** | Mid/large-cap medtech with a real growth premium; MS's 10/1 coordinated WACC rebuild flipped it to mildly overvalued on a rate move alone |
| VTI | **Moderate** | Broad index, but cap-weighted toward the same rate-sensitive mega-cap growth names that drive NVDA's own sensitivity |
| VXUS | **Moderate** | Lower US-growth weighting than VTI reduces sensitivity somewhat, but global rate co-movement limits the offset |
| XLE | **Low** | Cash-generative energy; historically the least rate-sensitive name in the book, sometimes an inflation/rate-regime beneficiary rather than a victim |

**Aggregate read:** roughly 85%+ of equity sits in names with moderate-to-high rate sensitivity. The rule 6a rate-shock pause (adopted after the 10/1 WACC rebuild) is doing real work — it should stay in force until the 10-year genuinely reopens the ~4.75% line, not just eases a few bps.

## 5. Recession stress test — estimated drawdown

Applying a pool-weighted estimate using typical/historical recession-equivalent drawdowns by holding type (NVDA/semis high-beta cyclical, OMCL small-cap healthcare-IT beta, GEHC moderate medtech defensiveness, VTI/VXUS broad-market recession norms, XLE cyclical-energy demand-destruction risk):

| Symbol | % of Pool | Assumed recession drawdown | Contribution to pool drawdown |
|---|---|---|---|
| NVDA | 7.89% | -50% to -60% | -4.3pp |
| VTI | 27.58% | -25% to -35% | -8.3pp |
| VXUS | 25.64% | -25% to -35% (+ currency drag) | -7.7pp |
| OMCL | 7.83% | -30% to -45% | -3.0pp |
| XLE | 11.24% | -35% to -45% (demand destruction) | -4.5pp |
| GEHC | 6.45% | -20% to -30% (more defensive) | -1.6pp |
| Cash | 12.98% | 0% | 0pp |

**Estimated pool-basis drawdown in a genuine recession scenario: roughly -28% to -32%, on top of the -5.99% already accumulated.** That would bring the pool to somewhere in the ~$32-34 range from today's $47.00 — a cumulative ~34-36% loss from the original $50 base. This is a model estimate (Claude's own analysis built on historical analogues, not a sourced third-party stress model) and should be read as directional, not precise.

## 6. Liquidity risk rating, per holding

| Symbol | Liquidity rating | Why |
|---|---|---|
| NVDA | **Low risk** | Mega-cap, among the most liquid single names on the market in normal sessions |
| VTI | **Low risk** | Massive, highly liquid broad-market ETF |
| VXUS | **Low risk** | Large, liquid international ETF |
| XLE | **Low risk** | Large, liquid 24-holding sector ETF |
| GEHC | **Low-Moderate risk** | Large-cap medtech, generally liquid, but a step down from the mega-caps/ETFs above |
| OMCL | **Moderate-High risk** | Small-cap (~$1-2B); this book has repeatedly logged 15-20%+ bid/ask spreads on OMCL in thin/pre-market sessions — the one name where a forced exit in a stress scenario could realistically suffer real slippage |

Today's holiday quotes show artificially blown-out spreads across *every* name (a session-closed artifact, not a liquidity signal) — correctly excluded from this rating, which reflects normal-session behavior.

## 7. Single stock risk and position sizing recommendations

- **NVDA (9.06% equity / 7.89% pool):** below both its own 10.5% drift trigger and the 25%/20% combined-concentration lines, but this is the name that has produced a CEO resignation, reinstatement, and a +34% single-session move in the last month alone — the realized-volatility profile of a name sized far larger than its current weight suggests. **Recommendation: hold current sizing, do not add** (rule 20/6a already block this); the risk here is event risk, not weight risk, and weight alone won't fix it.
- **OMCL (9.00% equity / 7.83% pool):** the book's single worst performer (-26.4% unrealized), a small-cap with real liquidity risk (§6) and a bear-case floor that's already been breached and recalibrated once. **Recommendation: no add** (DCA gate deeply unfired per §portfolio snapshot); size is appropriately contained given the name's own volatility and liquidity profile — do not let it grow further without a fresh structural all-clear.
- **GEHC (7.41% equity / 6.45% pool):** the book's best-performing satellite (+21.3%), approaching (not at) its own drift-trim trigger. **Recommendation: no action needed yet, but this is the single gate most likely to fire next** given its momentum — the trader should expect and honor the trim mechanically if/when it fires, not treat a winning position as exempt from discipline.
- **XLE (12.92% equity / 11.24% pool):** diversified basket, genuinely uncorrelated performer, the book's best risk-adjusted holding this month. No sizing concern.

## 8. Tail risk scenarios, with probability estimates (Claude's own analysis, not a sourced probability model)

| Scenario | Rough probability (next 3-6mo) | Impact if it hits |
|---|---|---|
| NVDA governance shock recurs (investigation substantiates the foreign-intelligence allegations, Huang departs for real) | ~5-8% | Severe — this book has already seen NVDA move -13% intraday and the stock swing 40+ points peak-to-trough on governance headlines alone; a confirmed finding would be materially worse |
| AI-capex/semis sector-wide repricing (demand-growth disappointment, "AI bubble" correction) | ~20-25% | High — NVDA/VTI (tech-heavy) down 30-50%, dragging the look-through ~23-24% tech exposure hard; 11/24's sector selloff is a small preview of this |
| Oil/Hormuz-Red Sea geopolitical escalation or sudden de-escalation | ~15-20% | Moderate, two-sided — XLE could move sharply either direction; this book has already lived through multiple false-alarm and real episodes here |
| Renewed inflation/rate-hike cycle (10yr sustained above 5.5%) | ~10-15% | High for the rate-sensitive cluster (§4) — would compress NVDA/OMCL/GEHC valuations further on top of already-stretched multiples |
| OMCL or GEHC idiosyncratic earnings/guidance miss | ~15-20% any given quarter (typical small/mid-cap base rate) | Moderate — contained by position size, but would deepen the book's two already-volatile names further |

## 9. Hedging strategies to reduce the top 3 risks (equities-only — no options available)

Top 3 risks: (1) ~23-24% look-through AI/semis/tech concentration, (2) zero defensive/low-beta sleeve, (3) unhedged FX exposure via VXUS compounding risk-off days.

1. **Build the standing-requested defensive sleeve.** A small allocation to a low-volatility or defensive-sector equity ETF (e.g., consumer staples, utilities, or a low-volatility factor fund) would be the single most direct answer to risk #2 — this has been asked for across multiple cycles and remains unbuilt.
2. **Lean further into the diversification that already worked.** XLE and the healthcare pair (OMCL/GEHC) just proved out as genuine decouplers on 11/24 — modestly growing that non-tech sleeve (within existing discipline/sign-off, not a unilateral call) directly dilutes the look-through tech concentration without adding a new uncorrelated factor bet.
3. **Treat cash as the real hedge in an equities-only, no-options book.** At 12.98% of pool, cash is the only asset here with zero correlation to any of the above scenarios. Defending (or modestly growing toward BR's ~14% target) the cash buffer rather than letting it erode into new tech-adjacent adds is a cheap, immediate partial hedge against risk #1 and #2.
4. **No further unhedged FX exposure.** VXUS is already the book's full currency bet; adding a second unhedged international or EM-equity position would compound risk #3 rather than diversify it.

## 10. Rebalancing suggestions, with allocation percentages

Current (% of pool): NVDA 7.89% / VTI 27.58% / VXUS 25.64% / OMCL 7.83% / XLE 11.24% / GEHC 6.45% / Cash 12.98% (≈99.6%, rounding).

- **No rebalancing is mechanically triggered today** (market closed; all gates checked above are clean). This section is a risk-informed suggestion, not an instruction — any actual trade needs BR's allocation sign-off and fresh MS/BW cross-vetting per standing rule 6.
- **If a discretionary rebalance is ever entertained, the risk-informed direction is: trim the growth/rate-sensitive cluster (NVDA/VTI) modestly in favor of the defensive sleeve in §9 and/or the cash buffer**, specifically to cut the ~23-24% look-through tech number, not just the 7.89% NVDA line item that the existing mechanical triggers watch.
- **GEHC's drift-trim trigger (~1.05pp from firing) is the one gate most likely to activate on its own** — when/if it does, the standing instruction (trim to the 6%-of-pool band-midpoint) should be honored mechanically, with proceeds split toward the defensive sleeve and cash per BR's own prior framing, not reinvested into the already-concentrated growth cluster.
- **Cash buffer (12.98% of pool) sits just under BR's ~14% target** — modest room to build it further exists without breaching any stated floor.

---

*Radical transparency note: nothing in this report should be read as "the book is fine because the market happened to be closed today." The structural concentration (look-through tech ~23-24% of equity), the single worst liquidity-risk holding (OMCL), and the still-unbuilt defensive sleeve are all exactly as true today as they were Wednesday — a holiday is a pause in prices, not a pause in risk.*
