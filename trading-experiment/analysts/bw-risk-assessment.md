# BW Risk Assessment — Risk Management Report
**Date: 2026-10-26 (Monday), ~10:4x ET** (converted from quote timestamps, ~14:42 UTC). First BW report since 2026-10-23 ~14:42 ET (no weekend activity on this book). Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time. Two dedicated fresh WebSearches this run (FOMC 10/27-28 odds, Hormuz/Brent) reproduced the identical chronic dateline wall every desk on this book has now logged for **49+ consecutive runs** — nothing reliably dated 2026-10-26 found for either query; FOMC odds cluster around ~78-83% hold / ~15-21% hike, directionally unchanged from Friday. Treat all macro inputs below as stale-but-directional, not live.

---

## Overall Portfolio Risk Grade: **D** (downgraded from C- on 10/23)

This is the downgrade flagged as coming "last call before a D" in both of Friday's reports, and it's happening now for three concrete reasons, not vibes: (1) the FOMC/GEHC/OMCL catalyst window that was 2-6 days out on Friday is now **1-3 days out** — the Fed's meeting starts *tomorrow*; (2) the OMCL DCA gate has narrowed sharply overnight-and-today (accumulated profit jumped from ~$0.368 to ~$0.643 on today's broad rally) to within **~$1.86** of firing — a mechanism that could now plausibly auto-buy more of this book's most volatile, worst-performing position in the 72 hours before its own earnings print; and (3) today supplied the first real-time data point undercutting the XLE "hedge" narrative — see §1/§9. Mechanical discipline is still fully intact (no trigger has breached, no leverage, no margin, no options) and that is the only thing keeping this above an F. But a book sailing into its highest-stakes week of the cycle with a soon-to-be-live auto-buy trigger pointed at its most event-exposed name is not a C- situation.

## Single biggest risk right now

**The OMCL DCA gate is on a collision course with OMCL's own earnings print — and it's closer to firing than at any point on record.** Accumulated profit is ~$0.643 (up from Friday's $0.368) against the $2.50 threshold — **~$1.857 away**, the narrowest gap this desk has ever reported, driven entirely by today's broad-market rally (NVDA +2.25%, GEHC +0.74%), not by anything OMCL-specific. OMCL reports Thursday 10/29 before the open — **3 days out**. If the rally that closed ~$0.275 of the gap today continues even modestly tomorrow or Tuesday, rule 18 could fire and route fresh capital into this book's largest unrealized loss (-19.8%) and most earnings-volatile name (average ~18.4% absolute day-0 move, 7-of-8 quarters with a >10% move) in the final 24-48 hours before that print — the single worst possible timing for an add, even though the capital source is earned profit, not new cash, and the mechanism is rule-governed rather than discretionary. Layered on top: the FOMC decision (Wed 10/28, same day as GEHC's print) now begins *tomorrow*, with zero hedging instrument available under this book's equities-only mandate. Three live mechanisms (FOMC pause, GEHC earnings-window trigger, OMCL DCA gate) all sit close to their lines simultaneously, for the first time this cycle, inside a single 72-hour window that starts tomorrow.

---

## 1. Live portfolio snapshot (Robinhood-verified, ~10:4x ET)

| Position | Qty | Last Price | Market Value | Equity Weight | Pool Weight* | Day Chg† | Unrealized |
|---|---|---|---|---|---|---|---|
| VTI | 0.036690 | $375.92 | $13.79 | 30.95% | 27.24% | +0.78% | +1.49% |
| VXUS | 0.154525 | $82.765 | $12.79 | 28.69% | 25.25% | +0.29% | -1.62% |
| XLE | 0.086775 | $69.11 | $6.00 | 13.46% | 11.85% | **-0.32%** | +19.95% |
| NVDA | 0.024826 | $215.70 | $5.36 | 12.02% | 10.57% | **+2.25%** | +7.10% |
| OMCL | 0.106405 | $37.675 | $4.01 | 9.00% | 7.92% | -0.20% | **-19.82%** |
| GEHC | 0.036393 | $71.98 | $2.62 | 5.88% | 5.17% | +0.74% | +4.79% |
| **Equity total** | | | **$44.56** | 100% | 87.95%‡ | | |
| Cash (pool portion) | | | $6.10 | — | 12.05% | | |

\*Pool = $50 base + accumulated profit. `get_portfolio`: total value **$100.643** (cash $56.10 + equity $44.543). Pool ≈ **$50.643, a +$0.643 (+1.286%) accumulated profit** — up sharply from Friday's +$0.368 (+0.736%), almost entirely on today's broad rally (NVDA +2.25% leading).
†vs. `adjusted_previous_close` (10/23 official close).
‡Equity total above is the live-quote-summed figure ($44.56); `get_portfolio`'s own equity_value ($44.543) differs by <0.1% on timing — immaterial, noted for reconciliation per standing practice.

**Today's live divergence inverts Friday's pattern — worth stating plainly.** All of last week's reports leaned on "green XLE / red everything else" as an informal, uncorroborated hedge signal. Today is the opposite: XLE is the **only red position** (-0.32%) against a broadly green book (NVDA +2.25%, VTI +0.78%, GEHC +0.74%, VXUS +0.29%). This is not proof the hedge thesis is wrong — one day of ordinary anti-correlation is not a structural break — but it is a real, dated data point that the "XLE moves opposite everything else" framing does not hold today, the day before the catalyst window opens. A hedge that only shows up on days when it happens to be convenient is not a hedge; see §9/§10.

## 2. Correlation analysis between holdings

- **VTI ↔ NVDA: high and understated.** VTI's cap weighting already embeds material direct AI/mega-cap exposure; today's +2.25% NVDA / +0.78% VTI move is textbook correlated upside. BR formally adopted this book's correction for this (the 10/19 VTI→VXUS core tilt) — see §3.
- **VTI ↔ VXUS: moderate-high, correlated today.** Both green (+0.78%/+0.29%) in a broad risk-on Monday — consistent with the standing read, offers less diversification on days like today than its target weights imply.
- **XLE ↔ {VTI, VXUS, NVDA}: inverted today, which this book has been treating as its informal hedge — but inversion alone proves nothing.** Today's -0.32% vs. three green lines is the cleanest version yet of the pattern BW has repeatedly logged as uncorroborated by any sourced catalyst. This correlation flips *positive* in a demand-driven downturn (§6) — the scenario where it stops "working" and just loses money alongside everything else. One green/red day either way is noise, not evidence.
- **OMCL ↔ GEHC: low fundamental correlation, high timing correlation, now acute.** Different end markets, genuine fundamental diversification — but both report within 24 hours of each other (10/28, 10/29), inside the same week as the FOMC decision, which now starts tomorrow.
- **NVDA ↔ OMCL/GEHC/XLE: low.** The satellite healthcare/energy sleeve remains the book's real diversification away from the AI/semis theme dominating both the explicit NVDA line and the VTI look-through exposure.

## 3. Sector concentration risk

| Sector / Theme | Equity Weight | Notes |
|---|---|---|
| US broad market (VTI) | 30.95% | Cap-weighted, mega-cap tech tilt; ticked up on today's rally |
| International developed+EM (VXUS) | 28.69% | True diversifier — different macro drivers, FX overlay |
| Energy (XLE) | 13.46% | Commodity/geopolitical beta, 24-holding basket; today broke its green streak |
| Semiconductors/AI compute (NVDA, direct) | 12.02% | Single name, widened today on the rally |
| Healthcare — tech/automation + medtech (OMCL+GEHC) | 14.88% | Two single names, different sub-sectors, both report this week |

**Resolution note, for the record: BR formally adopted this desk's AI/mega-tech look-through concentration ask on 2026-10-19** (next core dollar routes to VXUS, not pro-rata, until look-through AI/semis exposure falls back under ~20% of pool) — closed in BR's 10/23 ~16:12 ET report after 4+ consecutive cycles of this desk flagging it. This is a genuine resolution, not a repeat flag: logging it closed, not open. The underlying math still matters operationally — VTI's top holdings typically run ~25-30% AI-capex-linked mega-cap weight, so at 30.95% VTI equity weight, true AI/mega-tech look-through exposure is still in the rough **20%+ of equity** range even before today's NVDA-driven push — but the policy lever to address it is now live, not pending.

## 4. Geographic exposure and currency risk

- **VTI:** ~100% US-listed, but constituent revenue is global — indirect FX exposure through underlying earnings.
- **VXUS (28.69% of equity):** the book's one position with **direct, unhedged currency exposure** — EUR, JPY, GBP, EM currencies all flow through unhedged. A hawkish FOMC outcome tomorrow/Wednesday (dollar-supportive) is a headwind here independent of local-market performance.
- **XLE:** US-domiciled majors, revenue set by a globally-priced commodity with acute Hormuz/Middle East linkage — this book's most direct channel to a Strait of Hormuz escalation, though today's price action didn't reflect that linkage in the expected direction.
- **NVDA:** US-domiciled, but Taiwan-concentrated supply chain (TSMC) and China export-control exposure remain real, currently-quiet tail channels.
- **GEHC:** meaningful non-US revenue (medtech sold globally) — secondary FX translation risk, compounding VXUS's direct exposure in a dollar-strength scenario, and reports this week.
- **OMCL:** overwhelmingly US hospital-system customers — the book's lowest FX/geographic risk holding, but highest earnings-event risk this week.

## 5. Interest rate sensitivity by position

| Position | Rate Sensitivity | Why |
|---|---|---|
| NVDA | **High** | Long-duration growth cash flows; MS's DCF fair value ($192.0) moves materially with WACC — and the FOMC decision lands in 1-2 days |
| GEHC | **Medium-High** | ~$8.0B net debt creates direct interest-expense sensitivity; reports the same calendar day as the Fed decision |
| VTI | **Medium-High** | Mega-cap-growth-tilted index; duration-like sensitivity to discount-rate moves |
| VXUS | **Medium** | More value/financials-weighted historically; less duration-sensitive, but EM borrowing costs matter |
| OMCL | **Medium** | Growth-ish multiple; hospital-system customers' own capex budgets are rate-sensitive |
| XLE | **Low-Medium (direct)** | Energy majors are cash-flow/value names with low effective duration; the dominant rate linkage is indirect — a hawkish Fed is usually a *demand-destruction* signal for oil |

Freshest sourced read (still ~2.5 weeks stale, per today's dedicated search): 10-year Treasury near **~5.2%**; futures-implied odds for the 10/27-28 meeting cluster around **~78-83% hold / ~15-21% hike**, directionally unchanged from Friday's reads and from BR's independent cross-check. The meeting is now **starting tomorrow** — this is no longer a "next week" risk, it is a "tomorrow" risk.

## 6. Recession stress test (illustrative, not a formal Monte Carlo)

| Position | Equity Weight | Assumed Drawdown | Weighted Contribution |
|---|---|---|---|
| VTI | 30.95% | -30% | -9.29pp |
| VXUS | 28.69% | -32% | -9.18pp |
| XLE | 13.46% | -40% (oil demand craters) | -5.38pp |
| NVDA | 12.02% | -55% (high-beta semis, 2022-style) | -6.61pp |
| GEHC | 5.88% | -33% (leverage amplifies) | -1.94pp |
| OMCL | 9.00% | -28% | -2.52pp |
| **Equity-weighted total** | | | **≈ -34.9%** |

At the pool level (87.95% equity / 12.05% cash), that implies a **pool drawdown of roughly -30.7%**, or about **-$15.55 on the ~$50.64 pool**, in a full demand-driven recession — essentially unchanged from Friday's read. XLE's assumed -40% here is the *opposite* scenario from the hedge narrative being leaned on: today's red-XLE/green-market print is actually one small step *toward* this scenario's correlation structure (XLE moving with, not against, broad sentiment), not away from it.

## 7. Liquidity risk by holding

| Position | Liquidity Rating | Note |
|---|---|---|
| VTI, VXUS, XLE | Very High | Deep ETF liquidity, billions in AUM, tight spreads |
| NVDA | Very High | One of the most liquid single names globally |
| GEHC | High | Large-cap ($25B+), good but not mega-cap-tier depth |
| OMCL | **Medium** | Small/mid-cap (~$1-1.5B market cap), widest spreads of the book, reports in 3 days |

Radical-transparency caveat: at this book's position sizes ($2.62-$13.79 per holding), liquidity risk is **theoretical, not practical** — none of these trade sizes could move any of these markets. Flagged because the mandate asks for it, not because it currently binds.

## 8. Single stock risk & position sizing

- **NVDA (12.02% equity / 10.57% pool):** comfortably below the 18-20% single-name trigger, but it widened the most of any position today (+2.25%) heading straight into the FOMC window. No sizing action triggered.
- **NVDA+OMCL combined (25% combined-concentration trigger): 21.02% today** — up from Friday's ~20.86%, **buffer now ~3.98pp**, narrower than Friday's ~4.14pp. Still clean, but moving the wrong direction the day before the window opens, entirely on NVDA's rally.
- **OMCL (9.00% / 7.92% pool):** reports 10/29, **3 days out**. The DCA gate is now **~$1.857 away** from firing — see Single biggest risk above. This is the line item that most needs active attention this week, not a steady-state hold.
- **GEHC (5.88% / 5.17% pool):** reports 10/28, **2 days out** — same day as the FOMC decision, the book's single most concentrated event-risk day. BR's 6%-pool earnings-window trigger sits ~0.83pp away, essentially unchanged from Friday but now with far less runway to reassess before it resolves.
- **XLE (13.46% / 11.85% pool):** the single largest satellite position. Today's red print against the rest of the book's green is the first dated data point this cycle actually testing (not confirming) the informal hedge framing — see §1/§2/§9. MS still reads it overvalued (-9.37% DCF gap as of this morning, widening). No valuation case to add here even before the hedge question.
- **Satellite sleeve total (NVDA+OMCL+XLE+GEHC): 40.36% of equity** — essentially flat vs. Friday's 40.29%.

## 9. Tail risk scenarios with probability estimates

1. **Hawkish FOMC surprise (hawkish hold, or an outright hike) — ~15-21% probability** (today's sourced-but-stale futures pricing, unchanged in direction from Friday). Hits NVDA/VTI/GEHC hardest (§5); plausible single-day pool impact in the -3% to -6% range, landing **tomorrow through Wednesday** — no longer a multi-day-out risk.
2. **OMCL DCA gate fires into the earnings window — new this run, elevated and mechanical, not speculative.** With the gap down to ~$1.86 and 3 days of market moves before the print, a continued rally plausibly closes it before 10/29. This isn't a prediction the gate *will* fire — it's a statement that the probability of it firing inside the worst possible window has materially increased overnight, through no OMCL-specific news.
3. **At least one of GEHC/OMCL posts a structural-break miss — ~20-25% combined probability** (unchanged, per JPM's standing capsule verdicts). Both have pre-written contingency plans; two live triggers one day apart, the first coincident with the FOMC decision.
4. **Hormuz/Red Sea escalation broadening past a contained oil-price shock — moderate, recurring tail.** Today's red XLE print is mildly inconsistent with an active supply-shock narrative being the dominant driver right now — logged as a data point against complacency on this thesis, not for it.
5. **AI-capex sentiment crack / semis multiple compression — elevated, roughly 25-30% for a >10% semis-specific move this quarter.** Today's NVDA rally widens MS's overvaluation gap (-10.80%, from -9.06%) rather than closing it — pure price action, zero fundamentals support, which is exactly the setup this scenario describes.
6. **Dollar-strength/EM stress, compounding scenario 1.** A hawkish Fed outcome and dollar strength move together; VXUS and GEHC's foreign-revenue translation both take a secondary hit on top of any direct equity move.

## 10. Hedging strategies — equities-only toolbox, top 3 risks

No options available (standing mandate). Realistic equities-only tools:

1. **The DCA-gate/earnings-window collision (§1, §9 #2):** the only real lever here is **watching the gate daily through Wednesday, not treating rule 18 as fire-and-forget this week.** This desk cannot and does not recommend overriding a mechanical rule, but flags plainly: if the gate comes within firing range on Tuesday or Wednesday, the team (BR specifically, as the rule's owner) should explicitly re-confirm whether firing into the 24 hours before OMCL's print is still the intended behavior of a rule written before this exact collision was foreseeable, rather than letting it fire silently by default.
2. **Catalyst-clustering risk (§1, §9 #1, #3):** the only true hedge available remains a **cash hedge** — hold the ~12% pool-deployable cash flat through 10/27-29 rather than deploying it ahead of the window. Unchanged recommendation from Friday, now more urgent with the window starting tomorrow.
3. **XLE's hedge status, now with a live counter-data-point (§2, §6, §9 #4):** today's red print against a green book is a reason to be *more* skeptical of leaning on XLE as protection into the window, not less. Mitigation unchanged: size and evaluate XLE on its own standing valuation merit (MS still reads it overvalued) rather than a "this is our hedge" narrative.

## 11. Rebalancing suggestions (risk-reduction lens only — not a trade recommendation; this desk does not place trades)

| Position | Current (Equity%) | Risk-lens suggestion |
|---|---|---|
| NVDA | 12.02% | No change pre-window; once FOMC/earnings clear cleanly, revisit trimming toward ~10% equity weight to ease the NVDA+OMCL combined buffer, which is narrowing |
| XLE | 13.46% | Hold flat. No case to add (MS overvaluation read); don't trim on one red day either — no structural break, just one data point |
| OMCL | 9.00% | **Active watch item this week, not steady-state:** let the DCA gate's intended behavior be explicitly reconfirmed before it potentially fires into the earnings window, per §10 #1 |
| GEHC | 5.88% | No change pre-earnings; smallest position by design on the book's highest-leverage name |
| VTI / VXUS | 30.95% / 28.69% | Core sleeve healthy combined (~59.6%); continue routing any future new core capital to VXUS per BR's adopted 10/19 policy |

---

## Risk Heat Map Summary

| Position | Weight (Equity%) | Market/Beta Risk | Concentration Risk | Rate Sensitivity | Liquidity Risk | Near-Term Event Risk | Geo/FX Risk |
|---|---|---|---|---|---|---|---|
| **NVDA** | 12.02% | 🔴 High | 🔴 High (direct + look-through) | 🔴 High | 🟢 Very Low | 🔴 High (FOMC starts tomorrow) | 🟡 Medium (Taiwan/China) |
| **VTI** | 30.95% | 🟡 Medium-High | 🟡 Medium (tech tilt) | 🟡 Medium-High | 🟢 Very Low | 🔴 High (FOMC starts tomorrow) | 🟢 Low |
| **VXUS** | 28.69% | 🟡 Medium | 🟢 Low | 🟡 Medium | 🟢 Very Low | 🟡 Medium (FOMC/dollar) | 🔴 High (direct FX) |
| **XLE** | 13.46% | 🟡 Medium (hedge thesis now live-tested, inconclusive) | 🟡 Medium | 🟢 Low-Medium | 🟢 Very Low | 🟡 Medium | 🔴 High (Hormuz) |
| **OMCL** | 9.00% | 🔴 High (DCA gate ~$1.86 from firing) | 🟡 Medium | 🟡 Medium | 🟡 Medium | 🔴 **Severe (earnings 10/29, 3d out + gate collision)** | 🟢 Low |
| **GEHC** | 5.88% | 🟡 Medium | 🟡 Medium (+leverage) | 🟡 Medium-High | 🟡 Medium | 🔴 **Severe (earnings 10/28, 2d out — same day as FOMC)** | 🟡 Medium |
| **Portfolio-level** | 100% | 🟡 Medium | 🟡 Medium | 🟡 Medium-High | 🟢 Low (impractical at this size) | 🔴 **Severe — FOMC starts tomorrow, 3 live mechanisms converging inside 72 hours, no hedge** | 🟡 Medium |

---

*BW Risk Assessment — radical transparency, no softened warnings. Next run reassesses against the live FOMC start (tomorrow), GEHC's print (Wed, same day), and the OMCL DCA gate's actual distance to firing — this is the one number on the book that most needs checking before the next scheduled run, given how far it moved today.*
