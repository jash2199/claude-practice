# BW Risk Assessment

**Report date: 2026-11-27 (Friday — post-Thanksgiving half day; regular session 9:30am-1:00pm ET), ~09:42 ET** (verified via `TZ=America/New_York date`; persona file re-read fresh this run, unchanged since last cycle). Live Robinhood `get_portfolio`/`get_equity_positions`/`get_equity_quotes` on account 424593861, pulled this run — the first genuinely live tape this desk has marked against since Wednesday 11/25's close (Thursday was a full holiday closure). Prior BW read: 2026-11-26 ~13:4x ET (Thanksgiving, market closed, frozen numbers). Three dedicated WebSearches this run (NVDA news; 10-year Treasury yield; OMCL guidance/contract news, all dated "November 27 2026") hit the same chronic same-day dateline wall every desk on this team has flagged all week — nothing reliably dated to today was found for any of the three; the freshest OMCL-specific material remains the already-known 10/29 beat-and-raise print.

## Overall Portfolio Risk Grade: **D** (held, not upgraded)

## Single biggest risk right now

**This book still runs with zero hedge against its own largest, most volatile, most event-prone exposure — NVDA and the AI/semis complex it's wired into — and the first live session since Wednesday changes nothing about that.** Look-through the two broad ETFs and the real AI/semis exposure isn't the ~8.9% NVDA line item alone: VTI (31.82% of equity) is itself a cap-weighted US index with heavy Mag-7/semis weighting, and VXUS (29.72%) carries a smaller but real slice too. Combined look-through tech/AI exposure across NVDA + VTI's + VXUS's embedded tech sleeves still runs to roughly **23-24% of equity** — more than double what the position list on its face suggests, and the number this desk considers most under-appreciated by the rest of the book's mechanical risk checks (which track NVDA's own line-item weight against triggers, not the look-through total). GS's fresh 11/27 report independently corroborates this desk's concern from a different angle: the AMD/MRVL analyst-price-target dispersion ($200-$1,250 across reputable firms within weeks of each other) is itself a warning sign that the AI/semis complex this book is 23-24% exposed to (look-through) is trading on momentum more than anchored fundamentals right now — exactly the kind of regime where a correlated, catalyst-free drawdown (like 11/24's sector selloff) can happen fast and the book has nothing uncorrelated-and-newly-built to lean on. **Grade held at D**: Friday's reopen gave back most of its pre-market gain intraday with NVDA specifically reversing from +2.49% pre-market to negative territory, and no mechanical trigger fired — a quiet session, not a fixed one. The standing, now multi-week-old ask for a built defensive/diversifying sleeve remains open and unbuilt.

---

## Portfolio snapshot (ground truth, this run — live Friday session, ~09:42 ET)

`get_portfolio`: total_value **$97.105965015** = cash $56.10 + equity $41.005965015. Trading pool (= total − $50 off-limits reserve) = **$47.105965015**, a **-$2.894034985 / -5.788%** accumulated loss against the $50 base — a modest improvement vs. Thanksgiving's -5.99%/-$2.997 read, tracking the broad rally that has lifted the book intraday (though NVDA itself has already reversed off its own pre-market high per state.md's parallel read this morning). Deployable cash $6.10 (**12.95% of pool**).

| Symbol | Qty | Avg Cost | Last Px (live, ~09:41 ET) | Mkt Value | Cost Basis | Unrealized P&L | % of Equity | % of Pool |
|---|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $201.40 | $146.94 | $3.65 | $5.00 | **-$1.35 / -27.0%** | 8.90% | 7.75% |
| VTI | 0.036690 | $370.40 | $355.57 | $13.05 | $13.59 | -$0.54 / -4.0% | 31.82% | 27.70% |
| VXUS | 0.154525 | $84.13 | $78.89 | $12.19 | $13.00 | -$0.81 / -6.2% | 29.72% | 25.88% |
| OMCL | 0.106405 | $46.99 | $34.98 | $3.72 | $5.00 | **-$1.28 / -25.6%** | 9.08% | 7.90% |
| XLE | 0.086775 | $57.62 | $61.81 | $5.36 | $5.00 | +$0.36 / +7.3% | 13.08% | 11.38% |
| GEHC | 0.036393 | $68.69 | $83.43 | $3.04 | $2.50 | +$0.54 / +21.4% | 7.41% | 6.45% |

Mechanical gates checked live this run, all clean:
- **GEHC drift-trim trigger (BR's 7.5%-of-pool line): 6.45% of pool, ~1.05pp away, not fired** — unchanged from Thanksgiving, still the single closest live gate on the book. BR's own report flags Friday's reopen as "the next point it can plausibly fire" — it did not fire on this morning's tick.
- NVDA drift-trim trigger (BR's 10.5%-of-pool line): 7.75% of pool, ~2.75pp away, not fired.
- NVDA+OMCL combined concentration: **17.98% of equity** (25% hard trigger, ~7.02pp buffer; 20% soft line, ~2.02pp buffer) — clean on both.
- OMCL DCA gate (rule 18, needs +$2.50 accumulated pool profit): pool is **-$2.894**, ~$5.39 away — deeply unfired.
- NVDA $180 contingency-plan-v2 revisit line: last $146.94 is **-18.4%** below it — a continuation of the already-fired-and-resolved governance disqualifier (f), not a fresh trigger (rule 21 governs).
- OMCL's MS-recalibrated $33.00 bear floor: last $34.98 is **+6.0%** above it — holding above, not breached.
- GEHC's $62 revisit line: last $83.43 is **+34.6%** above it — no issue.
- Rule 6a rate-shock pause: last confirmed 10-year Treasury print still **5.051% (11/19)** — this run's dedicated search found nothing fresher dated to 11/27 (the same wall BR and MS both hit this week) — vs. the 4.75% reopening threshold, **~30bp buffer, pause still in effect.**

---

## Risk Heat Map Summary

| Risk factor | Level | Trend vs. last live read (11/25) |
|---|:---:|---|
| Single-name event/governance risk (NVDA) | 🔴 **Severe** | Unchanged — open board investigation, Huang's closed-door House interview now dated Mon 12/1 |
| Look-through AI/semis/tech concentration (~23-24% of equity) | 🔴 **Severe** | Unchanged — no hedge built, no trim executed |
| Sector concentration (ex-tech look-through) | 🟡 **Moderate** | Unchanged |
| Geographic / currency (VXUS unhedged FX) | 🟡 **Moderate** | Unchanged |
| Interest rate sensitivity (book-wide) | 🟡 **Moderate-High** | Unchanged — rule 6a pause still in force, ~30bp buffer |
| Recession/drawdown tail risk | 🟠 **High** | Unchanged — modeled ~-28% to -32% pool-basis in a genuine recession |
| Liquidity risk (OMCL specifically) | 🟡 **Moderate** | Unchanged — thin-spread small-cap |
| Single-stock concentration (NVDA+OMCL combined) | 🟢 **Low-Moderate** | Clean vs. both triggers, ~2pp/~7pp buffers |
| Hedging coverage | 🔴 **Severe gap** | Unchanged — standing defensive-sleeve ask still unbuilt, now multiple weeks overdue |
| Cash buffer adequacy | 🟢 **Low** | 12.95% of pool, just under BR's 14% target — minor, not urgent |

---

## 1. Correlation analysis between holdings

- **NVDA ↔ VTI: high positive correlation.** VTI is cap-weighted and Mag-7/semis-heavy; NVDA-driven swings visibly bleed into VTI on every high-volatility session this book has logged (11/12 resignation, 11/17 print, 11/23 reinstatement, 11/24 sector selloff all moved VTI in the same direction as NVDA, just damped). This morning's session is a small live example in the other direction: NVDA's reopen weakness (-1.58% vs. 11/25's close at this tick) sits alongside VTI's modest gain (+0.67%) — the correlation held less tightly intraday than on the bigger stress days, which is expected (idiosyncratic governance-driven moves decouple more than macro-driven ones).
- **NVDA ↔ VXUS: moderate positive correlation.** Weaker than VTI (less US-tech weight) but not zero — global AI-sentiment and risk-on/risk-off flows move both together in a broad selloff, as seen 11/19 and 11/24.
- **NVDA ↔ OMCL/GEHC/XLE: this is the book's one genuine diversification win, and it showed up live again this morning.** NVDA is red (-1.58%) on this tick while OMCL (+1.10%), XLE (+1.49%), and GEHC (+0.12%) are all green — a small, live continuation of 11/24's bigger decoupling demonstration.
- **OMCL ↔ GEHC: low-to-moderate correlation.** Both are healthcare-adjacent (healthcare IT vs. medtech/diagnostics) but different sub-sectors, different market caps, and have traded independently of each other on idiosyncratic news more often than together.
- **XLE ↔ everything else: low correlation, occasionally negative.** Energy's own demand/supply and geopolitical drivers are structurally distinct from the AI/semis/rate-sensitivity complex that moves the other five names. This remains the book's cleanest hedge-like asset, even though it was sized as a conviction pick, not a hedge.
- **Practical read: the real correlation structure is a 2-cluster book** — a large, correlated "growth/rate-sensitive" cluster (NVDA, VTI, VXUS, and to a lesser extent OMCL/GEHC's growth premium) vs. a small "idiosyncratic/defensive-adjacent" cluster (XLE, and OMCL/GEHC on name-specific news only). The first cluster is roughly 9x the size of what a genuinely diversified book would carry in one correlated factor.

## 2. Sector concentration risk, with percentage breakdown (% of equity)

| Sector / look-through bucket | % of Equity | Notes |
|---|---|---|
| Technology / Semiconductors (NVDA direct) | 8.90% | Single idiosyncratic name, largest unrealized % loss alongside OMCL |
| Technology look-through (embedded in VTI + VXUS) | ~14-15% (est.) | Cap-weighted index tech/semis weighting, not visible on the position list |
| **Total AI/semis/tech look-through exposure** | **~23-24%** | **The book's real concentration number — nearly 1-in-4 dollars of equity is wired to this one factor** |
| Broad US equity (VTI, ex-tech look-through) | ~17% | Diversified within the US market |
| Broad ex-US equity (VXUS, ex-tech look-through) | ~15% | Diversified internationally, adds currency risk (see §3) |
| Healthcare (OMCL + GEHC combined) | 16.49% | Two different healthcare sub-sectors, moderate-correlation, both idiosyncratic single names |
| Energy (XLE) | 13.08% | Diversified 24-holding basket, exempt from single-name veto per standing rule |

**Flag, unchanged: the position-list view undercounts tech/AI concentration by roughly 2.5x.** Every mechanical trigger this book tracks (NVDA's own weight, NVDA+OMCL combined) checks the direct line items, not the look-through total — which is real exposure the triggers don't see. **New this run: GS's own 11/27 report flags the AMD/MRVL analyst-target dispersion ($200-$1,250) as a data-quality/momentum red flag on the broader AI/semis tape** — this desk adopts that flag directly: a sector trading on a $200-$1,250 target spread for the same two names within weeks is a sector where sentiment, not settled fundamentals, is setting the marginal price, which raises (not lowers) the risk-weighting this desk assigns to the book's ~23-24% look-through exposure to that same complex.

## 3. Geographic exposure and currency risk factors

- **US-domiciled/listed: NVDA, OMCL, XLE, GEHC, VTI (100% US market) — ~90.9% of equity on a listing basis.** But NVDA, OMCL, and GEHC all have meaningful non-US revenue exposure (NVDA's guide already assumes zero China data-center compute revenue — a China-policy risk baked into the base case, not a geographic diversifier; GEHC and OMCL both have real international healthcare-system revenue).
- **VXUS: 29.72% of equity, 100% foreign-market exposure (developed + EM), fully unhedged currency risk.** This is the book's only deliberate currency diversifier — a weaker USD helps it, a stronger USD (e.g., a flight-to-dollar in a global risk-off episode) hurts it on top of any local-market decline, which is exactly the scenario that tends to coincide with the AI/semis-selloff days this book has already lived through.
- **No direct emerging-market, commodity-currency, or hedged-FX instrument held.** The only currency exposure is the single VXUS line, unhedged, and it moves in the same direction as the US-cluster risk-off days more often than it offsets them.

## 4. Interest rate sensitivity for each position

| Symbol | Rate sensitivity | Why |
|---|---|---|
| NVDA | **High** | Long-duration growth DCF; MS's own model has repeatedly swung NVDA between undervalued/overvalued purely on WACC/risk-free-rate inputs with zero fundamentals change |
| OMCL | **High** | Small-cap growth-ish healthcare IT; same WACC-sensitivity profile as NVDA, demonstrated by its own DCF's repeated re-ratings |
| GEHC | **Moderate-High** | Mid/large-cap medtech with a real growth premium; MS's coordinated WACC rebuild flipped it to mildly overvalued on a rate move alone |
| VTI | **Moderate** | Broad index, but cap-weighted toward the same rate-sensitive mega-cap growth names that drive NVDA's own sensitivity |
| VXUS | **Moderate** | Lower US-growth weighting than VTI reduces sensitivity somewhat, but global rate co-movement limits the offset |
| XLE | **Low** | Cash-generative energy; historically the least rate-sensitive name in the book, sometimes an inflation/rate-regime beneficiary rather than a victim |

**Aggregate read:** roughly 85%+ of equity sits in names with moderate-to-high rate sensitivity. The rule 6a rate-shock pause remains in force and should stay there until the 10-year genuinely reopens the ~4.75% line, not just eases a few bps. This desk's dedicated search this run again found nothing dated past 11/19 — the pause's underlying data point is now over a week stale, through no fault of this team's search effort.

## 5. Recession stress test — estimated drawdown

Applying a pool-weighted estimate using typical/historical recession-equivalent drawdowns by holding type (NVDA/semis high-beta cyclical, OMCL small-cap healthcare-IT beta, GEHC moderate medtech defensiveness, VTI/VXUS broad-market recession norms, XLE cyclical-energy demand-destruction risk):

| Symbol | % of Pool | Assumed recession drawdown | Contribution to pool drawdown |
|---|---|---|---|
| NVDA | 7.75% | -50% to -60% | -4.3pp |
| VTI | 27.70% | -25% to -35% | -8.3pp |
| VXUS | 25.88% | -25% to -35% (+ currency drag) | -7.8pp |
| OMCL | 7.90% | -30% to -45% | -3.0pp |
| XLE | 11.38% | -35% to -45% (demand destruction) | -4.5pp |
| GEHC | 6.45% | -20% to -30% (more defensive) | -1.6pp |
| Cash | 12.95% | 0% | 0pp |

**Estimated pool-basis drawdown in a genuine recession scenario: roughly -28% to -32%, on top of the -5.79% already accumulated.** That would bring the pool to somewhere in the ~$32-34 range from today's $47.11, a cumulative ~34-36% loss from the original $50 base — essentially unchanged from every prior cycle's read, since nothing structural has moved. This is a model estimate (Claude's own analysis built on historical analogues, not a sourced third-party stress model) and should be read as directional, not precise.

## 6. Liquidity risk rating, per holding

| Symbol | Liquidity rating | Why |
|---|---|---|
| NVDA | **Low risk** | Mega-cap, among the most liquid single names on the market in normal sessions |
| VTI | **Low risk** | Massive, highly liquid broad-market ETF |
| VXUS | **Low risk** | Large, liquid international ETF |
| XLE | **Low risk** | Large, liquid 24-holding sector ETF |
| GEHC | **Low-Moderate risk** | Large-cap medtech, generally liquid, but a step down from the mega-caps/ETFs above |
| OMCL | **Moderate-High risk** | Small-cap (~$1-2B); this book has repeatedly logged 15-20%+ bid/ask spreads on OMCL in thin/pre-market sessions — the one name where a forced exit in a stress scenario could realistically suffer real slippage |

Live spreads this run (regular session, usable): NVDA $146.83/$146.86 (~0.02%), VTI tight, VXUS tight, OMCL $34.18/$35.00 (~2.4% — within normal regular-session range, not a stress artifact), XLE tight, GEHC tight. No liquidity-rating changes from a live, non-holiday tape.

## 7. Single stock risk and position sizing recommendations

- **NVDA (8.90% equity / 7.75% pool):** below both its own 10.5% drift trigger and the 25%/20% combined-concentration lines, but this is the name that has produced a CEO resignation, reinstatement, and a +34% single-session move in the last month alone — the realized-volatility profile of a name sized far larger than its current weight suggests. A confirmed, closed-door House interview with Huang now sits on the calendar for Monday, December 1 — a real near-term date, zero direct hedge. **Recommendation: hold current sizing, do not add** (rule 20/6a already block this); the risk here is event risk, not weight risk, and weight alone won't fix it.
- **OMCL (9.08% equity / 7.90% pool):** the book's single worst performer (-25.6% unrealized), a small-cap with real liquidity risk (§6) and a bear-case floor that's already been breached and recalibrated once. **Recommendation: no add** (DCA gate deeply unfired per the snapshot above); size is appropriately contained given the name's own volatility and liquidity profile.
- **GEHC (7.41% equity / 6.45% pool):** the book's best-performing satellite (+21.4%), the single closest live mechanical gate on the entire book at ~1.05pp from BR's 7.5%-of-pool trim trigger. **Recommendation: no action needed yet, but expect this to fire soon** given its momentum and BR's own flag that today's reopen was "the next point it can plausibly fire" — it didn't fire on this tick, but the trader should honor the trim mechanically the moment it does, not treat a winning position as exempt from discipline.
- **XLE (13.08% equity / 11.38% pool):** diversified basket, genuinely uncorrelated performer, the book's best risk-adjusted holding this month. No sizing concern.

## 8. Tail risk scenarios, with probability estimates (Claude's own analysis, not a sourced probability model)

| Scenario | Rough probability (next 3-6mo) | Impact if it hits |
|---|---|---|
| NVDA governance shock recurs (investigation substantiates allegations, Huang departs for real) — **now with a confirmed near-term catalyst, Huang's closed-door House interview Mon 12/1** | ~5-8% | Severe — this book has already seen NVDA move -13% intraday and swing 40+ points peak-to-trough on governance headlines alone; a confirmed finding would be materially worse. The 12/1 date itself is a format-risk event (closed-door/transcribed, lower headline risk than an open hearing), not a probability-moving one on its own |
| AI-capex/semis sector-wide repricing ("AI bubble" correction) — **probability nudged toward the higher end of this band given GS's $200-$1,250 target-dispersion flag this run** | ~20-25% | High — NVDA/VTI (tech-heavy) down 30-50%, dragging the look-through ~23-24% tech exposure hard; 11/24's sector selloff is a small preview of this |
| Oil/Hormuz-Red Sea geopolitical escalation or sudden de-escalation | ~15-20% | Moderate, two-sided — XLE could move sharply either direction |
| Renewed inflation/rate-hike cycle (10yr sustained above 5.5%) | ~10-15% | High for the rate-sensitive cluster (§4) — would compress NVDA/OMCL/GEHC valuations further on top of already-stretched multiples |
| OMCL or GEHC idiosyncratic earnings/guidance miss | ~15-20% any given quarter (typical small/mid-cap base rate) | Moderate — contained by position size, but would deepen the book's two already-volatile names further |

## 9. Hedging strategies to reduce the top 3 risks (equities-only — no options available)

Top 3 risks: (1) ~23-24% look-through AI/semis/tech concentration, now reinforced by GS's momentum-over-fundamentals flag, (2) zero defensive/low-beta sleeve, (3) unhedged FX exposure via VXUS compounding risk-off days.

1. **Build the standing-requested defensive sleeve.** A small allocation to a low-volatility or defensive-sector equity ETF (e.g., consumer staples, utilities, or a low-volatility factor fund) would be the single most direct answer to risk #2 — this has been asked for across multiple cycles and remains unbuilt. BR's own GEHC-trim playbook already earmarks the first dollar of any future trim for exactly this — the mechanism exists, it just hasn't fired yet.
2. **Lean further into the diversification that already worked.** XLE and the healthcare pair (OMCL/GEHC) proved out as genuine decouplers on 11/24 and again, in miniature, this morning — modestly growing that non-tech sleeve (within existing discipline/sign-off, not a unilateral call) directly dilutes the look-through tech concentration without adding a new uncorrelated factor bet.
3. **Treat cash as the real hedge in an equities-only, no-options book.** At 12.95% of pool, cash is the only asset here with zero correlation to any of the above scenarios. Defending (or modestly growing toward BR's ~14% target) the cash buffer rather than letting it erode into new tech-adjacent adds is a cheap, immediate partial hedge against risk #1 and #2.
4. **No further unhedged FX exposure.** VXUS is already the book's full currency bet; adding a second unhedged international or EM-equity position would compound risk #3 rather than diversify it.

## 10. Rebalancing suggestions, with allocation percentages

Current (% of pool): NVDA 7.75% / VTI 27.70% / VXUS 25.88% / OMCL 7.90% / XLE 11.38% / GEHC 6.45% / Cash 12.95% (≈100.0%).

- **No rebalancing is mechanically triggered today** (all gates checked above are clean on a live tape). This section is a risk-informed suggestion, not an instruction — any actual trade needs BR's allocation sign-off and fresh MS/BW cross-vetting per standing rule 6.
- **If a discretionary rebalance is ever entertained, the risk-informed direction is unchanged: trim the growth/rate-sensitive cluster (NVDA/VTI) modestly in favor of the defensive sleeve in §9 and/or the cash buffer**, specifically to cut the ~23-24% look-through tech number, not just the 7.75% NVDA line item that the existing mechanical triggers watch.
- **GEHC's drift-trim trigger (~1.05pp from firing) remains the one gate most likely to activate on its own** — when/if it does, the standing instruction (trim to the 6%-of-pool band-midpoint) should be honored mechanically, with proceeds split toward the defensive sleeve and cash per BR's own prior framing, not reinvested into the already-concentrated growth cluster.
- **Cash buffer (12.95% of pool) sits just under BR's ~14% target** — modest room to build it further exists without breaching any stated floor.

---

*Radical transparency note: nothing in this report should be read as "the book is fine because a live session finally opened and nothing fired." The structural concentration (look-through tech ~23-24% of equity, now flagged from a second angle by GS's own target-dispersion data this run), the single worst liquidity-risk holding (OMCL), and the still-unbuilt defensive sleeve are all exactly as true at 09:42 ET as they were on Thanksgiving's frozen tape — a quiet reopen is a pause in triggers firing, not a pause in the underlying risk sitting there unhedged.*
