# BW Risk Assessment — Risk Management Report
**Date: 2026-10-05 (Monday), ~14:42 ET (verified via `TZ=America/New_York date`).** Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time. Sixth BW report overall, fourth today — follows this desk's own 10:42 ET report (D-) by roughly four hours.

---

## Overall Portfolio Risk Grade: **D-** — held, not moved, from this morning

## Single biggest risk right now
**NVDA's pool-weight overshoot has widened for an eleventh straight trading day, and tomorrow's MRVL Investor Day (10/6) adds a same-sector sentiment catalyst this book has no mechanism to absorb.** NVDA is now **11.66% of pool** against BR's 10% target (**+1.66pp over**, vs. this morning's +1.64pp — still drifting the wrong direction, not reversing), on an unmoved MS fair value and the same **-18.8% DCF gap**. Separately, GS's 12:55 ET report flags that MRVL's Investor Day lands tomorrow morning with fresh Street target raises (Oppenheimer to $325) ahead of it — a high-visibility AI/semis event this book holds no direct exposure to, but one whose outcome (good or bad) will move sector-wide AI sentiment, and NVDA is this book's most overweight, most overvalued, highest-beta channel for that sentiment to hit through. No mechanical trigger is close to firing on either front (concentration clean, no stop-loss crossed) — this is a forward-looking risk to flag before it lands, not a retrospective one.

**Why the grade holds at D- rather than moving either direction:** this run's fresh data cuts both ways versus this morning's four-part downgrade rationale, and radical transparency means reporting that honestly rather than mechanically re-escalating. On the worse side: NVDA's overshoot widened again (now 11 days, not a reversal) and the pool posted a fresh all-time-best profit reading (**+1.66%**, up from 10:42's +1.10%) that remains substantially an NVDA-and-broad-rally story, not evidence of risk reduction. On the better side: **this desk's own "XLE hedge-decoupling, third straight session" claim from 10:42 ET does not hold up on fresh intraday data** — see §1 for the correction. Net effect: roughly a wash. Grade stays at D-, the first time this desk has held a grade flat on a run-to-run basis rather than moving it, specifically because the evidence this run is mixed rather than one-directional.

---

## Portfolio snapshot (live, 2026-10-05 ~14:42 ET)

`get_portfolio`: total_value **$100.830729145** (cash $56.10 + equity $44.730729145). Pool ≈ **$50.830729145**, a **+$0.830729145 (+1.66%) accumulated profit — a new all-time-best reading**, up from 10:42's +1.10% and 13:36's +1.41%. Deployable cash $6.10 (~12.00% of pool, unchanged).

| Position | Qty | Last Price | Value | % Equity | % Pool | Unrealized P&L | Day Δ (vs 10/2 close) |
|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $238.74 | $5.93 | 13.26% | 11.66% | **+18.54%** (cost $201.40) | +2.05% |
| VTI | 0.036690 | $380.8885 | $13.97 | 31.24% | 27.49% | +2.83% (cost $370.40) | +0.77% (today's smallest-but-one gainer) |
| VXUS | 0.154525 | $85.875 | $13.27 | 29.67% | 26.10% | +2.08% (cost $84.13) | **+0.52% (today's smallest gainer)** |
| OMCL | 0.106405 | $34.44 | $3.66 | 8.19% | 7.21% | **-26.71%** (cost $46.99) | **+2.50% (today's biggest gainer)** |
| XLE | 0.086775 | $63.485 | $5.51 | 12.32% | 10.84% | +10.18% (cost $57.62) | +1.06% (mid-pack, see §1) |
| GEHC | 0.036393 | $65.62 | $2.39 | 5.34% | 4.70% | -4.47% (cost $68.69) | +2.07% |
| Cash (deployable) | — | — | $6.10 | — | 12.00% | — | — |

NVDA+OMCL combined concentration: **21.45% of equity** (25% trigger, ~3.55pp buffer — clean, essentially flat vs. this morning's 21.32%). NVDA alone: 11.66% of pool vs. BR's 10% target (**+1.66pp over, 11th consecutive trading day over target**). No mechanical trigger fired anywhere.

---

## 1. Correlation analysis between holdings

| Pair | Correlation (qualitative) | Driver |
|---|---|---|
| NVDA ↔ VTI | High (+) | VTI's own mega-cap tech weight (~30%+) double-counts NVDA exposure rather than diversifying it |
| NVDA ↔ VXUS | Moderate (+) | Ex-US indices carry far less AI/semis weight; genuine but partial diversification |
| NVDA ↔ OMCL | Moderate (+) | Both equity-beta growth names; today both green on a broad-green tape, OMCL now the day's single biggest gainer |
| NVDA ↔ XLE | **Correction this run — see below** | — |
| NVDA ↔ GEHC | Low-to-moderate | Different sector, but both still link through the same discount-rate channel MS's WACC rebuild priced in |
| VTI ↔ VXUS | Moderate (+) | Both broad equity baskets; moved together again today, though VXUS is now the day's laggard rather than XLE (see below) |
| XLE ↔ GEHC | Low | No structural link; shared exposure to MS's same WACC input is a modeling artifact, not a fundamental correlation |

**Correction to this morning's XLE finding.** This desk's 10:42 ET report called XLE's hedge-decoupling pattern (smallest gainer on an all-green day) a third straight session and escalated it to a top-3 hedging risk. Four hours later, with the full session's price action in: **XLE is no longer today's laggard.** Ranked by today's gain, smallest to largest: VXUS +0.52% < VTI +0.77% < **XLE +1.06%** < NVDA +2.05% < GEHC +2.07% < OMCL +2.50%. XLE climbed through the middle of the pack over the session while VXUS — not flagged as a hedge at all — ended up smallest. This doesn't retroactively invalidate the underlying thesis-decoupling concern (XLE's price still isn't cleanly tracking an oil-specific catalyst either way today, up or down), but the specific "three sessions running as the day's worst mover" framing was an artifact of checking mid-morning, not a property of the full trading day. Radical transparency cuts both ways: this desk should correct its own prior framing as readily as it escalates a new one. See §9 for how this changes (and doesn't change) the hedging conclusion.

## 2. Sector concentration risk (% breakdown)

Look-through basis (NVDA direct + VTI/VXUS's own sector weights blended in):

| Sector | Approx. % of equity (look-through) | Note |
|---|---|---|
| Technology / Semis / AI | **~28-30%** | NVDA direct (13.26%) + VTI's own ~30% tech weight + a smaller VXUS tech slice — unchanged in shape from this morning |
| Healthcare | ~17-19% | GEHC (5.34%) + OMCL (8.19%) + VTI/VXUS's own healthcare weight (~11-13% combined) |
| Energy | ~13-14% | XLE direct (12.32%) + VTI/VXUS's small native energy weight |
| Broad/diversified (unattributed by single sector) | ~38-40% | The remainder of VTI/VXUS spread across financials, industrials, consumer, etc. |

No material change today — tech/AI remains the single largest look-through sector bet in the book. Worth naming given §0: tomorrow's MRVL Investor Day is a fresh, dated catalyst specifically inside this book's largest sector bet, even though MRVL itself isn't held.

## 3. Geographic exposure and currency risk

- **US exposure**: NVDA (100% US), VTI (100% US), OMCL (US), XLE (US-domiciled energy majors), GEHC (US-domiciled, globally-selling) → roughly **~85-88% of equity is US-domiciled/listed**, unchanged.
- **Ex-US exposure**: VXUS alone, ~29.7% of equity — the book's only dedicated non-US sleeve, and today's single smallest gainer (+0.52%) even as the rest of the book rallied harder.
- **Currency risk**: all positions are USD-denominated at the ticker level; VXUS's underlying holdings and GEHC's global revenue base carry real but invisible FX translation risk. No direct FX hedge exists anywhere in this book.
- **Government shutdown**: fresh WebSearch this run (dedicated "government shutdown October 5 2026" query) returned the same problem every desk has hit all week — results dominated by 2025-dated shutdown coverage and 2026 prediction-market pages about whether the shutdown would *begin*, with no clean, current-dated confirmation of today's actual status. This neither confirms nor refutes this morning's "day 5, still shut down" read; treating that read as the best available (consistent with Friday's "day 3" plus two elapsed calendar days) but flagging, again, that this desk cannot independently verify it today. This is a US-centric shock that would hit ~85%+ of this book's equity simultaneously if it escalates, with VXUS's ~30% ex-US sleeve the only structural offset.

## 4. Interest rate sensitivity by position

| Position | Rate sensitivity | Basis |
|---|---|---|
| NVDA | **High** | Long-duration growth name; MS's 10/5 DCF gap stays **-18.8%** on an unmoved WACC (Rf 5.29% rebuild stays operative) — no fresh MS report since this morning, price drift alone continues to widen the realized gap intraday |
| OMCL | **High** | Small/mid-cap growth; DCF upside +46.8% (MS's last build), widest discount on the book, today's biggest gainer so the discount narrowed slightly intraday on price alone |
| GEHC | **High, but thesis-neutral** | MS's 10/5 read sits at a nominal +0.7% (near-parity) — still noise on a thin single-stage model, not a signal; today's further +2.07% move pushes the live gap back toward overvalued again, illustrating exactly how thin that model's noise floor is |
| XLE | **Moderate, model-sensitive** | MS's 10/5 gap is -5.6%, essentially flat — consistent with a model-driven read, not a fresh rate story |
| VTI | **Moderate** | Broad index, but its own ~30% tech weight imports real duration risk |
| VXUS | **Lower** | More value/financials-tilted, less duration-sensitive than the US core sleeve |

**No rate print confirmed again this run.** Fresh WebSearch this run ("10 year treasury yield October 5 2026") surfaced the same recycled figures every desk has already discarded — a stale September 2 reading (4.79%) and the same March/June 2026 Morningstar prints — with nothing dated to today. Per rule 4, the 10/1 WACC rebuild (Rf 5.29%) stays the operative assumption. This is now the **sixth-plus consecutive report across desks** unable to independently verify today's rate level — the team is running every valuation model in this book on a week-old rate assumption with no way to confirm it hasn't moved either direction.

## 5. Recession stress test (estimated drawdown)

Applying BR's own modeled bad-year pool-level scenario (-26% to -38%, set in BR's 10/1 report, re-confirmed 10/2), unchanged in shape from this morning:

| Position | Stress-case drawdown (illustrative) | Rationale |
|---|---|---|
| NVDA | -40% to -55% | High-beta growth/semis; worst historical drawdowns in a demand-shock recession exceed broad market by 1.5-2x; the record overvaluation gap widens the downside case further with each new reading |
| OMCL | -25% to -35% | Small-cap, already -27% from cost; further multiple compression possible, partially offset by healthcare's defensive demand and the widest DCF discount on the book |
| GEHC | -15% to -25% | Healthcare equipment has real defensive characteristics (recurring service revenue); valuation floor is thin (near-parity) rather than negative |
| XLE | -20% to -35%, wide range | Energy is genuinely cyclical in a demand-destruction recession, but a supply-shock-driven recession (e.g. a Hormuz closure) could see XLE *rise* even as the rest of the book falls — path-dependent; §1's correction means this desk now treats that payoff as genuinely uncertain in direction, not as a pattern of failure or success |
| VTI | -25% to -35% | Broad US market, in line with historical recession drawdowns |
| VXUS | -20% to -30% | Typically shallower than US in a US-centric recession, deeper in a globally synchronized one |

**Pool-level estimate: -26% to -38%** (unchanged) — at this book's current ~$50.83 pool size, roughly a **$13-19 drawdown**. Worth naming plainly again: this book just posted a second consecutive all-time-best profit reading (+1.66%, up from +1.10% four hours ago) while carrying a stress-case range wide enough to erase well over a year of accumulated gains at this pace in a single bad quarter. The faster the profit climbs on NVDA-led momentum, the more there is to lose if that exact momentum reverses.

## 6. Liquidity risk rating

| Position | Liquidity rating | Note |
|---|---|---|
| NVDA | 🟢 Very low risk | Mega-cap, extremely deep market |
| VTI | 🟢 Very low risk | Largest US total-market ETF, continuous deep liquidity |
| VXUS | 🟢 Very low risk | Large international ETF, deep liquidity |
| XLE | 🟢 Very low risk | Large sector ETF, deep liquidity |
| OMCL | 🟡 Low-moderate | Small/mid-cap single name; thinner book than the ETFs, but still NASDAQ-listed with routine daily volume — immaterial at this book's fractional-share size |
| GEHC | 🟡 Low-moderate | Mid-cap single name; same profile as OMCL |

No liquidity concern at this book's position sizes ($2-14 per line) — unchanged, flagged for completeness only.

## 7. Single stock risk & position sizing recommendations

- **NVDA (11.66% of pool, +1.66pp over BR's 10% target, -18.8% DCF gap, 11th consecutive day over target):** still this book's single largest live risk by every measure this desk tracks. This desk continues not to propose a unilateral trim (rule 19 — BR's call, and BR's own 10/2 report explicitly re-affirmed the no-new-cash-to-NVDA instruction with a tax-efficiency rationale on top of the policy one). What's new this run: tomorrow's MRVL Investor Day (GS, 12:55 ET) is a dated, imminent AI/semis sentiment catalyst landing directly inside NVDA's own sector while NVDA sits at its most overweight and most overvalued on record. This desk is not asking for a pre-emptive trim ahead of someone else's event — that would be reactive, not risk-managed — but is naming the timing coincidence plainly: the book's largest unmanaged risk and a same-sector sentiment catalyst are converging within roughly 18 hours.
- **OMCL (7.21% of pool, -2.79pp under target, -26.71% unrealized):** sizing is fine — under target by design pending the DCA gate (BR's 10/2 report had it ~$2.17-2.19 away; today's new all-time-high pool profit (+1.66%, up $0.50 since BR's last read) has materially closed that distance — likely under ~$1.70 away now by this desk's own rough math. Worth a fresh BR/GS read given how close this now sits.
- **GEHC and XLE (4.70% and 10.84% of pool, near target):** sizing is appropriate. GEHC continues trading above its $62-65 continuation band's top edge (now $65.62, a fourth straight hourly check above it per GS's tracking) with no upside mechanical trigger written anywhere in this book's design — GS flagged this asymmetry explicitly this run, and this desk agrees it is a real gap, not a false alarm: a position can run indefinitely past a band's top with nothing firing, while a move below the bottom mandates a full re-read. XLE's sizing itself is fine; see §1 for this desk's correction on its hedge-tracking behavior.
- **VTI/VXUS:** both within ~1.4pp of target; no action. VXUS is today's single weakest performer in the book (+0.52%) — noted for completeness, not a concern at this magnitude.

## 8. Tail risk scenarios with probability estimates

| Scenario | Rough probability (next 2-4 weeks) | Estimated pool impact |
|---|---|---|
| AI-valuation unwind (NVDA-specific guidance cut, hyperscaler capex pullback, or a broad multiple-compression event) — **now with a near-term trigger window**: MRVL's 10/6 Investor Day could be a sentiment catalyst for this scenario in either direction | ~15-20%, unchanged — the DCF gap feeding this estimate is at its widest-ever reading, so the *severity* side should be read as modestly worse even at an unchanged probability | -15% to -25% on NVDA alone, -5% to -9% pool-level |
| Shutdown extends further, broad risk-off deepens | ~35-45%, unchanged — today's search added no new confirmation either way | -5% to -10% |
| 10yr yield pushes through 5.5%, a second WACC rebuild hits NVDA/OMCL further | ~20-25%, unconfirmable again this run (no clean rate print found for a sixth-plus straight report) | -3% to -8%, concentrated in NVDA/OMCL |
| Hormuz escalation to a sustained, confirmed closure | ~10-15%, unchanged — no fresh search run this cycle; carried forward from this morning's read | XLE theoretically +15-25%, but given §1's correction, this desk now frames the hedge payoff as genuinely uncertain in direction rather than a confirmed decoupling failure — downgrade the confidence on this line, not the probability |
| Broad recession confirmation (NBER-style, not just a growth scare) | ~10-15% over 2-4 weeks | -26% to -38% pool-level (see §5) |
| Clean rate reversal (10yr back under 5%), GEHC/XLE DCF gaps improve further | ~20-25% | +2% to +4%, concentrated in GEHC/XLE; would also narrow NVDA's gap somewhat but not resolve it |

## 9. Hedging strategies for the top 3 risks (equities-only — no options)

1. **NVDA concentration + record valuation gap, now with a near-term sentiment catalyst (MRVL 10/6):** the only real equities-only lever remains directing all fresh deployable cash away from NVDA (already BR's standing instruction) and toward the OMCL DCA gate, which per §7 is closer to firing than at any point in this book's history. This desk is not proposing to act unilaterally (rule 19) but repeats the standing ask: four-plus consecutive new-widest-DCF-gap readings plus a dated catalyst landing tomorrow is a reasonable bar for an off-cycle BR review, not a reason to wait for the 5pp drift trigger or the ~11/1 monthly calendar.
2. **Rate-shock sensitivity (NVDA, OMCL, and to a lesser degree GEHC/XLE):** no fixed-income sleeve exists in this all-equity mandate, so sizing discipline remains the only lever — don't add to any rate-sensitive name on "it's cheaper" grounds alone while the WACC rebuild is this stale (now a week-plus unconfirmed).
3. **XLE as an oil/Hormuz hedge — revised framing this run.** This desk is walking back the escalated "three straight sessions of decoupling" framing from this morning (§1): on the full session's data, XLE did not finish as today's laggard. The underlying caution stands in softer form — this book still cannot independently confirm whether XLE's price is tracking an oil-specific catalyst on any given day, so sizing decisions elsewhere in the book still should not *assume* XLE will reliably offset an oil/Hormuz shock — but this desk is no longer treating that as a confirmed multi-session pattern. Re-test over the next several sessions with a consistent same-time-of-day read before re-escalating.

## 10. Rebalancing suggestions (allocation %, pool basis)

| Position | Current | BR target (set 9/17, re-affirmed 10/1-10/2) | Drift |
|---|---|---|---|
| VTI | 27.49% | 28% | -0.51pp |
| VXUS | 26.10% | 25% | +1.10pp |
| NVDA | 11.66% | 10% | +1.66pp |
| XLE | 10.84% | 12% | -1.16pp |
| GEHC | 4.70% | 4% | +0.70pp |
| OMCL | 7.21% | 10% | -2.79pp (DCA-gated by design) |
| Cash | 12.00% | 11% | +1.00pp |

No position breaches the 5pp single-position drift trigger — **no rebalance is mechanically required.** NVDA's +1.66pp overage remains its widest reading on file; this is not yet a trigger-level event, but the pattern this desk keeps naming (price-driven drift with no correcting mechanism short of the 5pp line or BR's discretion) continues unresolved.

---

## Heat Map Summary

| Risk Factor | Level | Trend since 10/5 10:42 ET |
|---|---|---|
| NVDA valuation gap + sizing drift (-18.8%, +1.66pp over target) | 🔴 High | ⬆ marginally worse — overshoot widened again, 11th straight day |
| MRVL Investor Day (10/6) as an AI-sector sentiment catalyst NVDA is exposed to | 🔴 High (new line) | New — dated, ~18 hours out, zero direct mechanism to manage |
| Government shutdown (unconfirmed status, no resolution visible) | 🔴 High | → unchanged, still unverifiable |
| Rate shock / WACC level (10yr unconfirmable for a 6th-plus straight report) | 🔴 High | → unchanged |
| Hormuz/Iran tail risk | 🔴 High | → unchanged, no fresh search this run |
| XLE hedge-decoupling | 🟡 Moderate | ⬇ **downgraded from 🔴** — this morning's "3rd straight session" claim did not hold up on the full session's data; see §1/§9 |
| GEHC valuation support (near-parity, sign flipping on noise) + band-breakout with no upside trigger | 🟡 Moderate | ⬆ GS's asymmetry flag (no upside mechanism) adds a documentation gap on top of the unchanged valuation-noise read |
| Look-through tech/AI concentration (~28-30% of equity) | 🟡 Moderate | → unchanged |
| OMCL drawdown (-26.7%) vs. widest DCF discount on book, DCA gate nearing | 🟡 Moderate | → gate materially closer to firing on today's profit high |
| Pool profit level (+1.66%, new all-time high) | 🟡 Moderate | ⬆ new high again, still substantially an NVDA/broad-rally-driven number |
| Headline concentration triggers (NVDA%, NVDA+OMCL% combined) | 🟢 Low | → clean, 3.55pp buffer to the 25% trigger |
| Liquidity | 🟢 Low | → unchanged |

**Note on data quality (rule 4 discipline):** fresh WebSearch this run on the 10yr yield and the shutdown both hit the same wall every desk has flagged for weeks — recycled stale figures and mis-dated coverage, nothing current confirmed. Used only for directional corroboration of the standing cross-desk read, never as a sizing input, consistent with every other desk's current practice. Separately, this desk is explicitly flagging its own §1 correction as a data-discipline point: a pattern claim built on a single intraday snapshot (this morning's "XLE smallest gainer, 3rd session") should be re-checked against the full session before being escalated into a hedging recommendation, not just repeated across reports because it was said once.

---

Sources:
- [10 Year Treasury Rate — YCharts](https://ycharts.com/indicators/10_year_treasury_rate)
- [10-Year Treasury Yield Rises to 4.420% — Morningstar/Dow Jones](https://www.morningstar.com/news/dow-jones/202606307321/10-year-treasury-yield-rises-to-4420-data-talk)
- [10-Year Treasury Yield Rises to 4.145% — Morningstar/Dow Jones](https://www.morningstar.com/news/dow-jones/202603059767/10-year-treasury-yield-rises-to-4145-data-talk)
- [How long will the government shutdown last? — Robinhood prediction markets](https://robinhood.com/us/en/prediction-markets/politics/events/how-long-will-the-government-shutdown-last-feb-14-2026)
- [US government shutdown on October 1 — Manifold Markets](https://manifold.markets/bens/us-government-shutdown-on-october-1)
- Internal: trading-experiment/state.md (live Robinhood snapshot through 10/5 ~13:36 ET), analysts/ms-dcf-valuation.md (10/5 ~10:1x ET price-roll), analysts/br-portfolio-builder.md (10/2 ~16:1x ET re-underwrite, 10% NVDA target standing), analysts/gs-stock-screener.md (10/5 ~12:55 ET), analysts/jpm-earnings-analyzer.md (10/5 ~09:26 ET), this desk's own 10/5 ~10:42 ET report (prior version, git history)
