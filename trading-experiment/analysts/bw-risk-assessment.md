# BW Risk Assessment

**Report date: 2026-11-27 (Friday — post-Thanksgiving half day; regular session 9:30am-1:00pm ET), ~13:42 ET** (verified via `TZ=America/New_York date`; persona file re-read fresh this run, unchanged since last cycle). Live Robinhood `get_portfolio`/`get_equity_positions`/`get_equity_quotes` on account 424593861, pulled this run — this is the **first mark against the actual, settled half-day close** (regular session closed exactly on schedule at 1:00pm ET per the trader's own 13:36 ET run notes; `venue_last_trade_time` pinned to 17:59:59Z across all six holdings confirms it). Prior BW read: 2026-11-27 ~09:42 ET (pre-open/early-session, grade D). Three dedicated WebSearches this run (10-year Treasury yield; NVDA/Huang; OMCL guidance/contract news, all dated "November 27 2026") hit the same chronic same-day dateline wall every desk on this team has flagged all week — nothing reliably dated to today was found for any of the three; the freshest Treasury print remains 11/19's 5.051% (a fresher Nov-10 reading of 4.982% surfaced but is *older*, not newer, so it changes nothing), and the freshest OMCL-specific material remains the already-known 10/29 beat-and-raise print.

## Overall Portfolio Risk Grade: **D** (held, not upgraded)

## Single biggest risk right now

**This book still runs with zero hedge against its own largest, most volatile, most event-prone exposure — NVDA and the AI/semis complex it's wired into — and a green half-day close doesn't change that one bit.** Look-through the two broad ETFs and the real AI/semis exposure isn't the ~9.0% NVDA line item alone: VTI (31.83% of equity) is cap-weighted and Mag-7/semis-heavy, and VXUS (29.67%) carries a smaller but real slice too. Combined look-through tech/AI exposure across NVDA + VTI's + VXUS's embedded tech sleeves still runs to roughly **23-24% of equity** — more than double what the position list on its face suggests. Today's session is a textbook illustration of why a good day is not the same thing as a safe book: every holding closed green, NVDA posted its first positive close-over-close day all week (+0.88%), and the pool improved to -4.965% from this morning's -5.788% — genuinely good news, logged as such — but **none of it came from anything this desk's hedging recommendations would have produced**, it came from a broad relief rally this book is simply along for the ride on. The standing, now multi-week-old ask for a built defensive/diversifying sleeve remains open and unbuilt, and NVDA's board-investigation overhang has a real, dated near-term catalyst four days out: Huang's closed-door House interview, Monday 2026-12-01. **Grade held at D.** A favorable catalyst-free session closing out a shortened holiday week is exactly the kind of result that tempts an upgrade on vibes — radical transparency means saying plainly that nothing structural moved today, so the grade doesn't either.

---

## Portfolio snapshot (ground truth, this run — live Friday half-day CLOSE, ~13:42 ET)

`get_portfolio`: total_value **$97.5172607765** = cash $56.10 + equity $41.4172607765. Trading pool (= total − $50 off-limits reserve) = **$47.5172607765**, a **-$2.4827392235 / -4.965%** accumulated loss against the $50 base — the best pool reading since 11/21, improving from this morning's -5.788% ($47.11) and Thanksgiving's frozen -5.99%. Deployable cash $6.10 (**12.83% of pool**, computed on this run's position values below; minor cent-level differences vs. `get_portfolio`'s own equity total reflect quote-timestamp rounding, immaterial to any conclusion here).

| Symbol | Qty | Avg Cost | Last Px (half-day close, 17:59:59Z) | Mkt Value | Cost Basis | Unrealized P&L | % of Equity | % of Pool |
|---|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $201.40 | $150.62 | $3.74 | $5.00 | **-$1.26 / -25.2%** | 9.02% | 7.87% |
| VTI | 0.036690 | $370.40 | $359.41 | $13.19 | $13.60 | -$0.41 / -3.0% | 31.83% | 27.74% |
| VXUS | 0.154525 | $84.13 | $79.54 | $12.29 | $13.00 | -$0.71 / -5.5% | 29.67% | 25.85% |
| OMCL | 0.106405 | $46.99 | $35.665 | $3.79 | $5.00 | **-$1.21 / -24.1%** | 9.16% | 7.98% |
| XLE | 0.086775 | $57.62 | $61.665 | $5.35 | $5.00 | +$0.35 / +7.0% | 12.91% | 11.25% |
| GEHC | 0.036393 | $68.69 | $84.63 | $3.08 | $2.50 | +$0.58 / +23.2% | 7.43% | 6.48% |

Mechanical gates checked live this run, all clean:
- **GEHC drift-trim trigger (BR's 7.5%-of-pool line): 6.48% of pool, ~1.02pp away, not fired** — essentially unchanged all session despite the green tape; still the single closest live gate on the book, exactly matching the trader's own 13:36 ET read.
- NVDA drift-trim trigger (BR's 10.5%-of-pool line): 7.87% of pool, ~2.63pp away, not fired.
- NVDA+OMCL combined concentration: **18.18% of equity** (25% hard trigger, ~6.82pp buffer; 20% soft line, ~1.82pp buffer) — clean on both, essentially flat vs. this morning.
- OMCL DCA gate (rule 18, needs +$2.50 accumulated pool profit): pool is **-$2.483**, ~$4.98 away — deeply unfired.
- NVDA $180 contingency-plan-v2 revisit line: last $150.62 is **-16.3%** below it — a continuation of the already-fired-and-resolved governance disqualifier (f), not a fresh trigger (rule 21 governs).
- OMCL's MS-recalibrated $33.00 bear floor: last $35.665 is **+8.1%** above it — holding above, not breached, the cushion widening with today's green close.
- GEHC's $62 revisit line: last $84.63 is **+36.5%** above it — no issue.
- Rule 6a rate-shock pause: last confirmed 10-year Treasury print still **5.051% (11/19)** — this run's dedicated search again found nothing fresher dated to 11/27 (the same wall every desk has hit all week) — vs. the 4.75% reopening threshold, **~30bp buffer, pause still in effect.**

---

## Risk Heat Map Summary

| Risk factor | Level | Trend vs. last read (09:42 ET today) |
|---|:---:|---|
| Single-name event/governance risk (NVDA) | 🔴 **Severe** | Unchanged — open board investigation; Huang's closed-door House interview now just **4 days out** (Mon 12/1) |
| Look-through AI/semis/tech concentration (~23-24% of equity) | 🔴 **Severe** | Unchanged — no hedge built, no trim executed, a green day does not dilute this |
| Sector concentration (ex-tech look-through) | 🟡 **Moderate** | Unchanged |
| Geographic / currency (VXUS unhedged FX) | 🟡 **Moderate** | Unchanged |
| Interest rate sensitivity (book-wide) | 🟡 **Moderate-High** | Unchanged — rule 6a pause still in force, ~30bp buffer, data now 8 days stale |
| Recession/drawdown tail risk | 🟠 **High** | Unchanged — modeled ~-28% to -32% pool-basis in a genuine recession |
| Liquidity risk (OMCL specifically) | 🟡 **Moderate** | Unchanged — thin-spread small-cap |
| Single-stock concentration (NVDA+OMCL combined) | 🟢 **Low-Moderate** | Clean vs. both triggers, ~1.8pp/~6.8pp buffers |
| Hedging coverage | 🔴 **Severe gap** | Unchanged — standing defensive-sleeve ask still unbuilt, now multiple weeks overdue |
| Cash buffer adequacy | 🟢 **Low** | 12.83% of pool, just under BR's ~14% target — minor, not urgent |

---

## 1. Correlation analysis between holdings

- **NVDA ↔ VTI: high positive correlation, confirmed again today on the upside.** Both closed green together (NVDA +0.88%, VTI's broad tape also up) — the same mechanism that drags VTI down on NVDA's bad days lifts it on NVDA's good ones. A diversified-on-paper ETF that still moves with your single largest idiosyncratic holding isn't diversification against that holding's risk.
- **NVDA ↔ VXUS: moderate positive correlation.** Weaker than VTI (less US-tech weight) but real — both were part of today's broad relief rally.
- **NVDA ↔ OMCL/GEHC/XLE: this book's one genuine diversification win, and today didn't need it** — for once, everything was green together, which is pleasant but uninformative about whether the decoupling still holds; the prior week's stress days (11/19, 11/24) remain the real evidence, not today's broad rally.
- **OMCL ↔ GEHC: low-to-moderate correlation.** Both healthcare-adjacent, different sub-sectors, still trading on largely idiosyncratic drivers.
- **XLE ↔ everything else: low correlation, occasionally negative.** Remains the book's cleanest hedge-like asset structurally, even though today it simply joined the broad rally rather than decoupling from it.
- **Practical read, unchanged: a 2-cluster book** — a large, correlated "growth/rate-sensitive" cluster (NVDA, VTI, VXUS, and to a lesser extent OMCL/GEHC's growth premium) at ~75-80% of equity, vs. a small genuinely-idiosyncratic cluster (XLE, OMCL/GEHC on name-specific news) at the rest. A day where everything moves the same direction is a reminder that the correlated cluster dominates outcomes far more often than it doesn't.

## 2. Sector concentration risk, with percentage breakdown (% of equity)

| Sector / look-through bucket | % of Equity | Notes |
|---|---|---|
| Technology / Semiconductors (NVDA direct) | 9.02% | Single idiosyncratic name, largest unrealized % loss alongside OMCL |
| Technology look-through (embedded in VTI + VXUS) | ~14-15% (est.) | Cap-weighted index tech/semis weighting, not visible on the position list |
| **Total AI/semis/tech look-through exposure** | **~23-24%** | **The book's real concentration number — nearly 1-in-4 dollars of equity is wired to this one factor** |
| Broad US equity (VTI, ex-tech look-through) | ~17% | Diversified within the US market |
| Broad ex-US equity (VXUS, ex-tech look-through) | ~15% | Diversified internationally, adds currency risk (see §3) |
| Healthcare (OMCL + GEHC combined) | 16.59% | Two different healthcare sub-sectors, moderate-correlation, both idiosyncratic single names |
| Energy (XLE) | 12.91% | Diversified 24-holding basket, exempt from single-name veto per standing rule |

**Flag, unchanged: the position-list view undercounts tech/AI concentration by roughly 2.5x.** Every mechanical trigger this book tracks (NVDA's own weight, NVDA+OMCL combined) checks direct line items only — the look-through total is real exposure none of those triggers see, and it doesn't shrink on a green day, it just feels less urgent.

## 3. Geographic exposure and currency risk factors

- **US-domiciled/listed: NVDA, OMCL, XLE, GEHC, VTI — ~90.98% of equity on a listing basis.** NVDA, OMCL, and GEHC all carry real non-US revenue exposure regardless (NVDA's guide still assumes zero China data-center compute revenue — a baked-in policy risk, not a diversifier).
- **VXUS: 29.67% of equity, 100% foreign-market exposure (developed + EM), fully unhedged currency risk.** The book's only deliberate currency diversifier — and it tends to move with, not against, the US-cluster risk-off days this book has already lived through, which caps its real diversification value.
- **No direct emerging-market, commodity-currency, or hedged-FX instrument held.** Unchanged.

## 4. Interest rate sensitivity for each position

| Symbol | Rate sensitivity | Why |
|---|---|---|
| NVDA | **High** | Long-duration growth DCF; MS's own model has repeatedly swung NVDA between undervalued/overvalued purely on WACC/risk-free-rate inputs with zero fundamentals change |
| OMCL | **High** | Small-cap growth-ish healthcare IT; same WACC-sensitivity profile as NVDA |
| GEHC | **Moderate-High** | Mid/large-cap medtech with a real growth premium; MS's coordinated WACC rebuild flipped it to mildly overvalued on a rate move alone |
| VTI | **Moderate** | Broad index, but cap-weighted toward the same rate-sensitive mega-cap growth names that drive NVDA's own sensitivity |
| VXUS | **Moderate** | Lower US-growth weighting reduces sensitivity somewhat, but global rate co-movement limits the offset |
| XLE | **Low** | Cash-generative energy; historically the least rate-sensitive name in the book |

**Aggregate read, unchanged: roughly 85%+ of equity sits in names with moderate-to-high rate sensitivity.** The rule 6a pause remains correctly in force; its underlying data point (5.051%, 11/19) is now **8 days stale**, through no fault of this team's search effort — every desk has hit the identical wall. This is a process gap worth flagging to Jash again: the team has no live bond-yield data source, only web search, and web search is not reliably surfacing same-week Treasury data.

## 5. Recession stress test — estimated drawdown

| Symbol | % of Pool | Assumed recession drawdown | Contribution to pool drawdown |
|---|---|---|---|
| NVDA | 7.87% | -50% to -60% | -4.3pp |
| VTI | 27.74% | -25% to -35% | -8.3pp |
| VXUS | 25.85% | -25% to -35% (+ currency drag) | -7.8pp |
| OMCL | 7.98% | -30% to -45% | -3.0pp |
| XLE | 11.25% | -35% to -45% (demand destruction) | -4.5pp |
| GEHC | 6.48% | -20% to -30% (more defensive) | -1.6pp |
| Cash | 12.83% | 0% | 0pp |

**Estimated pool-basis drawdown in a genuine recession scenario: roughly -28% to -32%, on top of the -4.965% already accumulated.** That would bring the pool to roughly the **~$32-34 range** from today's $47.52, a cumulative ~34-36% loss from the original $50 base — unchanged from every prior cycle's read, because the position weights that drive this estimate barely moved today. This is a model estimate (Claude's own analysis built on historical analogues, not a sourced third-party stress model) and should be read as directional, not precise.

## 6. Liquidity risk rating, per holding

| Symbol | Liquidity rating | Why |
|---|---|---|
| NVDA | **Low risk** | Mega-cap, among the most liquid single names on the market in normal sessions |
| VTI | **Low risk** | Massive, highly liquid broad-market ETF |
| VXUS | **Low risk** | Large, liquid international ETF |
| XLE | **Low risk** | Large, liquid 24-holding sector ETF |
| GEHC | **Low-Moderate risk** | Large-cap medtech, generally liquid, but a step down from the mega-caps/ETFs above |
| OMCL | **Moderate-High risk** | Small-cap (~$1-2B); this book has repeatedly logged 15-20%+ bid/ask spreads on OMCL in thin/pre-market sessions — the one name where a forced exit in a stress scenario could realistically suffer real slippage |

Live spreads at the half-day close: NVDA $149.64/$149.68 (~0.03%, tight), VTI/VXUS/XLE/GEHC all tight regular-session spreads, OMCL $34.88/$36.00 (~3.2% — wider than usual for a regular-session close, plausibly thin post-holiday half-day liquidity rather than a stress signal, but the book's one name where this matters). No liquidity-rating changes.

## 7. Single stock risk and position sizing recommendations

- **NVDA (9.02% equity / 7.87% pool):** below both its own 10.5% drift trigger and the 25%/20% combined-concentration lines, and today's +0.88% close-over-close is its first positive day-over-day move all week — welcome, but one green day on a position that has swung 40+ points peak-to-trough on governance headlines this month doesn't change the underlying risk profile. The confirmed closed-door House interview with Huang is now **4 days away (Mon 12/1)** — a real, dated, near-term catalyst with zero direct hedge against it. **Recommendation: hold current sizing, do not add** (rule 20/6a already block this); this is event risk, not weight risk, and today's relief rally doesn't retire the event.
- **OMCL (9.16% equity / 7.98% pool):** still the book's single worst performer (-24.1% unrealized) despite today's green close widening the cushion above MS's recalibrated $33.00 floor to +8.1%. Small-cap, real liquidity risk (§6). **Recommendation: no add** (DCA gate deeply unfired); size remains appropriately contained.
- **GEHC (7.43% equity / 6.48% pool):** the book's best-performing satellite (+23.2%), and the single closest live mechanical gate on the entire book at ~1.02pp from BR's 7.5%-of-pool trim trigger — unmoved by today's broad rally specifically, but close enough that any further GEHC-specific strength (as opposed to a broad-market day) could trip it. **Recommendation: no action needed yet, honor the trim mechanically the moment it fires** — a winning position earning extra slack from the risk desk is exactly the complacency this persona exists to call out.
- **XLE (12.91% equity / 11.25% pool):** diversified basket, genuinely uncorrelated performer most weeks, joined the broad rally today rather than decoupling from it. No sizing concern.

## 8. Tail risk scenarios, with probability estimates (Claude's own analysis, not a sourced probability model)

| Scenario | Rough probability (next 3-6mo) | Impact if it hits |
|---|---|---|
| NVDA governance shock recurs (investigation substantiates allegations, Huang departs for real) — **confirmed near-term catalyst now just 4 days out: Huang's closed-door House interview, Mon 12/1** | ~5-8% | Severe — this book has already seen NVDA move -13% intraday and swing 40+ points peak-to-trough on governance headlines alone; a confirmed adverse finding would be materially worse. A closed-door/transcribed format is lower headline-risk than an open hearing, which caps but does not eliminate the probability |
| AI-capex/semis sector-wide repricing ("AI bubble" correction) | ~20-25% | High — NVDA/VTI (tech-heavy) down 30-50%, dragging the look-through ~23-24% tech exposure hard; 11/24's sector selloff remains the live preview, not fully unwound by today's relief rally |
| Oil/Hormuz-Red Sea geopolitical escalation or sudden de-escalation | ~15-20% | Moderate, two-sided — XLE could move sharply either direction |
| Renewed inflation/rate-hike cycle (10yr sustained above 5.5%) | ~10-15% | High for the rate-sensitive cluster (§4) — would compress NVDA/OMCL/GEHC valuations further on top of already-stretched multiples |
| OMCL or GEHC idiosyncratic earnings/guidance miss | ~15-20% any given quarter (typical small/mid-cap base rate) | Moderate — contained by position size, but would deepen the book's two already-volatile names further |

## 9. Hedging strategies to reduce the top 3 risks (equities-only — no options available)

Top 3 risks, unchanged: (1) ~23-24% look-through AI/semis/tech concentration, (2) zero defensive/low-beta sleeve, (3) unhedged FX exposure via VXUS compounding risk-off days.

1. **Build the standing-requested defensive sleeve.** A small allocation to a low-volatility or defensive-sector equity ETF (consumer staples, utilities, or a low-volatility factor fund) remains the single most direct answer to risk #2 — asked for across multiple cycles, still unbuilt. BR's own GEHC-trim playbook already earmarks the first dollar of any future trim for exactly this.
2. **Lean further into the diversification that already worked.** XLE and the healthcare pair (OMCL/GEHC) proved out as genuine decouplers on 11/24 — today's broad-green session doesn't test that, but doesn't undo it either. Modestly growing that non-tech sleeve (within existing discipline/sign-off) directly dilutes the look-through tech concentration.
3. **Treat cash as the real hedge in an equities-only, no-options book.** At 12.83% of pool, cash is the only asset here with zero correlation to any of the above scenarios. Defending (or growing toward BR's ~14% target) the cash buffer is a cheap, immediate partial hedge against risks #1 and #2.
4. **No further unhedged FX exposure.** VXUS is already the book's full currency bet; a second unhedged international or EM-equity position would compound risk #3, not diversify it.

## 10. Rebalancing suggestions, with allocation percentages

Current (% of pool): NVDA 7.87% / VTI 27.74% / VXUS 25.85% / OMCL 7.98% / XLE 11.25% / GEHC 6.48% / Cash 12.83% (≈100.0%).

- **No rebalancing is mechanically triggered today** (all gates checked above are clean on the settled half-day close). This section is a risk-informed suggestion, not an instruction — any actual trade needs BR's allocation sign-off and fresh MS/BW cross-vetting per standing rule 6.
- **If a discretionary rebalance is ever entertained, the risk-informed direction is unchanged: trim the growth/rate-sensitive cluster (NVDA/VTI) modestly in favor of the defensive sleeve in §9 and/or the cash buffer**, specifically to cut the ~23-24% look-through tech number, not just the 7.87% NVDA line item the existing mechanical triggers watch.
- **GEHC's drift-trim trigger (~1.02pp from firing) remains the one gate most likely to activate on its own** — when/if it does, the standing instruction (trim to the 6%-of-pool band-midpoint) should be honored mechanically, with proceeds split toward the defensive sleeve and cash, not reinvested into the already-concentrated growth cluster.
- **Cash buffer (12.83% of pool) sits just under BR's ~14% target** — modest room to build it further exists without breaching any stated floor.

---

*Radical transparency note: nothing in this report should be read as "the book is fine because today was green." Every holding closing up on a shortened holiday session is a tailwind this desk is happy to log, but it is not evidence of a hedge that doesn't exist, a concentration that didn't shrink, or an event risk (Huang's House interview, now 4 days out) that didn't move any closer. The structural concentration (look-through tech ~23-24% of equity), the single worst liquidity-risk holding (OMCL), and the still-unbuilt defensive sleeve are exactly as true at this session's close as they were at 09:42 ET this morning — a good day is a data point, not a correction to the risk picture.*
