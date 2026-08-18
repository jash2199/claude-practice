# BW Risk Assessment — Risk Management Report
**Date: 2026-08-18 (Tuesday), ~10:4x ET**

*Persona: Bridgewater-style risk analyst, radical transparency. Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes` on account 424593861) at report time. All weights below are recomputed fresh this run, not carried over from BR/MS.*

---

## Overall Portfolio Risk Grade: **C**

## Single biggest risk right now
**This book carries zero ballast against a correlated shock, and two independent correlated shocks are landing on the same day.** Every dollar of the $44.75 equity sleeve is long-beta risk assets — there is no cash-like hedge, no short exposure, no inverse position, nothing that goes *up* when the tape goes down except XLE's narrow, single-cause offset to the oil shock specifically. Today the tape is getting hit by two distinct, simultaneous vectors: (1) a genuine rates shock — 10-year testing 4.73-4.75% (within a hair of rule 6a's 4.75% two-consecutive-close trigger) and the 30-year at a fresh 19-year high above 5.3% — and (2) live Hormuz/Iran-US military escalation (Trump's "new US territory" map post, the Oman bombing threat, a reported fresh tanker strike overnight) after the 60-day ceasefire deadline lapsed. NVDA and VTI have no offset to either vector; VXUS has no offset to either; OMCL has no offset to either. Only XLE benefits, and only from vector (2). A portfolio this undiversified against *both* of today's live risk factors, at the same time, is the headline risk — not any single position.

---

## Live position snapshot (Robinhood-verified, ~10:4x ET)

| Symbol | Qty | Avg cost | Price now | Day chg | Position value | % of equity | % of pool |
|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $201.40 | $219.88 | -2.28% | $5.46 | 12.20% | 10.76% |
| VTI | 0.043290 | $370.76 | $380.08 | -0.54% | $16.45 | 36.77% | 32.42% |
| VXUS | 0.154525 | $84.13 | $86.82 | -1.20% | $13.42 | 29.98% | 26.44% |
| OMCL | 0.106405 | $46.99 | $37.05 | +2.83% | $3.94 | 8.81% | 7.77% |
| XLE | 0.086775 | $57.62 | $63.26 | +1.08% | $5.49 | 12.26% | 10.82% |
| **Cash (deployable)** | — | — | — | — | $6.00 | — | 11.82% |

Equity value $44.75, total account value $100.75, pool (÷ $50 reserve) ≈ $50.75. NVDA+OMCL combined single-stock exposure = **21.0% of equity** — under the adopted 25% combined trigger but the second-closest it has been (last close reading was wider). Neither single-name trigger (18-20%) nor the combined trigger (25%) is breached today; flagging proximity, not a fire.

---

## Risk heat map

| Risk category | Level | Notes |
|---|---|---|
| Single-stock concentration (NVDA+OMCL) | 🟡 Medium | 21.0% of equity combined, under both triggers but rising as OMCL's earnings-gap discount persists and NVDA remains the largest single name |
| Correlation / lack of true diversification | 🔴 High | VTI and VXUS are both long-only equity beta; NVDA is a levered subset of VTI's own top holding; nothing in the book is negatively correlated to a general risk-off tape |
| Sector concentration | 🟡 Medium | Effective tech/AI exposure (NVDA + VTI's embedded mega-cap tech weight) is the largest single factor bet in the book, materially above index-neutral |
| Geographic / currency exposure | 🟡 Medium | ~70% of equity is USD-domestic (NVDA, OMCL, XLE, plus VTI); VXUS (29.98% of equity) is the only unhedged FX sleeve — EUR/JPY/GBP/EM currency risk concentrated in one position |
| Interest-rate / duration sensitivity | 🔴 High | NVDA (long-duration growth, MS WACC 11%) and OMCL (small-cap growth) are the most rate-sensitive; VTI/VXUS moderate; only XLE has low/negative duration — and the 10yr is one close away from rule 6a's trigger |
| Geopolitical / Hormuz-oil shock | 🔴 High | Live, escalating, unresolved as of this report (ceasefire deadline lapsed, bombing threats, reported tanker strike); XLE is the only position that benefits, everything else is exposed on the demand/multiple-compression side |
| Liquidity risk | 🟡 Medium (OMCL) / 🟢 Low (others) | NVDA/VTI/VXUS/XLE are mega-liquid; OMCL has shown a visibly wide bid/ask in recent sessions — smallest, hardest-to-exit position in the book |
| Recession / broad drawdown | 🟡 Medium | See stress test below — no position is recession-proof, XLE has the widest historical drawdown range depending on demand- vs supply-shock character |
| Tail risk (tail scenarios) | 🔴 High | See tail scenarios below — today's macro backdrop is not a hypothetical, it is live and developing |
| Hedging capacity | 🔴 High (gap) | Equities-only toolbox, ~$50 pool — no options, no practical inverse-ETF sizing at this scale; cash is effectively the *only* real hedge available, and only 11.8% of pool is held there |

---

## Correlation analysis
- **VTI vs. VXUS**: high positive correlation in risk-off regimes (both fall together on global growth scares) despite different geography — today both are red. VXUS adds real diversification only in idiosyncratic, non-global-macro scenarios (a US-specific shock, a dollar move); it does **not** diversify against a global rate shock or a Hormuz-driven oil/inflation shock, both of which are live today.
- **NVDA vs. VTI**: NVDA is economically a levered, undiversified slice of VTI's own largest sector bet. Owning both is not two independent risks — it's one AI/mega-cap-tech factor bet sized across two positions, understating true concentration if VTI's tech weight isn't accounted for.
- **XLE vs. everything else**: the one position with a plausible negative-to-neutral correlation to the rest of the book *today* (Hormuz escalation), but that relationship flips in a demand-shock recession, where energy falls with everything else. XLE is not a durable hedge, only a today-specific one.
- **OMCL**: lowest correlation to the other four — healthcare IT, idiosyncratic earnings-driven — genuinely the most diversifying position in the book, undercut by its small size (8.8% of equity) and liquidity profile.

## Sector concentration (approximate, equity value basis)
- AI/semiconductors (direct): NVDA ≈ 12.2% of equity
- Broad-market equity beta, mega-cap-tech-weighted: VTI ≈ 36.8% of equity (embeds a further, unquantified tech overweight)
- International developed + EM diversified: VXUS ≈ 30.0% of equity
- Healthcare IT: OMCL ≈ 8.8% of equity
- Energy: XLE ≈ 12.3% of equity

Read plainly: over half the book (NVDA + VTI's embedded tech weight) is a bet on one macro factor — AI/mega-cap tech multiples — which is also the single factor most exposed to today's rate shock.

## Geographic exposure and currency risk
- USD-domestic, unhedged-FX-irrelevant: NVDA, OMCL, XLE, and VTI ≈ 70% of equity.
- VXUS ≈ 30% of equity is the book's entire non-USD currency exposure — developed-ex-US and EM currencies, fully unhedged. This is the largest single currency bet in the portfolio and has had no dedicated FX commentary from any desk to date.

## Interest-rate sensitivity by position
- **NVDA**: high. MS's own DCF (WACC 11%, g 3%) already shows ~31.8% downside; a further rate leg up compresses the multiple further before any fundamentals move.
- **OMCL**: high. Small-cap growth healthcare IT — discount-rate sensitive, compounded by the post-earnings guidance-driven drawdown already in the position.
- **VTI**: moderate-high. Market-cap weighted, mega-cap/tech-heavy, inherits much of NVDA's duration profile in aggregate.
- **VXUS**: moderate. More value/financials-tilted than VTI historically, somewhat lower duration, but not immune.
- **XLE**: low, arguably inverse. Energy cash flows are less duration-sensitive and the sector has historically been a partial inflation/rate hedge — the one position in the book currently working *with* the rate move rather than against it.

## Recession stress test (estimated peak drawdown, illustrative ranges based on historical sector/asset-class behavior in broad equity bear markets)
| Position | Estimated drawdown in a recessionary bear | Basis |
|---|---|---|
| NVDA | -45% to -60% | High-beta semis/AI drew down ~45-65% in 2022's growth-multiple compression; a recession adds demand-side downside on top |
| VTI | -25% to -35% | Broad US market historical recession bear range, skewed toward the higher end given today's elevated starting valuations/duration |
| VXUS | -25% to -35% | Similar broad-market range; EM sleeve adds tail variance in a global slowdown |
| OMCL | -35% to -50% | Small-cap growth healthcare IT — small-caps historically draw down more than large-caps in recessions, compounded by idiosyncratic guidance risk already visible |
| XLE | -30% to -55% | Wide range by design: a demand-shock recession (2020-style) hits energy hardest of all five; a supply-shock/inflationary recession (current Hormuz-adjacent regime) could see energy hold up or even rally while everything else falls |

**Blended portfolio estimate**: roughly -30% to -40% peak-to-trough on the $44.75 equity sleeve in a genuine recessionary bear, i.e. an estimated $13-18 equity drawdown (pool-level: -26% to -35%, since deployable cash is untouched). Trivial in absolute dollars at this account size, but the *percentage* exposure is the number that should drive sizing discipline going forward as the book scales.

## Liquidity risk by holding
- NVDA, VTI, VXUS, XLE: **Low** — mega-cap stock and among the largest ETFs on the market, effectively unlimited liquidity at this position size.
- OMCL: **Medium** — a mid/small-cap single name that has shown a visibly wide bid/ask spread in recent sessions (noted previously at roughly $36.45/$37.00, a >1.5% round-trip spread). At current fractional-share size this is not urgent, but it is the one position where exit costs are not negligible if it ever needs to be sold in size.

## Single-stock risk and position sizing
- NVDA (12.2% of equity) and OMCL (8.8% of equity) are the book's only true single-name risk; combined 21.0% of equity sits under both the 18-20% single-name and 25% combined triggers already adopted, so no forced review fires today.
- Standing recommendation unchanged from prior reports: hold both single-name triggers as hard mandatory-review lines, not soft guidance — they have already done real work once (NVDA concentration was flagged and formalized 8/10) and should keep doing so as prices move, not just on new buys.
- New, added this run: given today's rate-shock proximity to rule 6a's threshold, if the 10yr actually closes above 4.75% on two consecutive sessions, that should be read as a second, independent reason (on top of any concentration trigger) to pause any NVDA or OMCL add regardless of BR's policy-gap framing — a rate-driven derating hits the most duration-sensitive names in the book hardest, precisely NVDA and OMCL.

## Tail risk scenarios
| Scenario | Rough probability (next 2-4 weeks) | Portfolio impact |
|---|---|---|
| Hormuz situation escalates to actual closure or sustained kinetic exchange (beyond posturing/single strikes) | ~10-15% | Oil spikes further (XLE up sharply), but broad risk-off almost certainly dominates and drags NVDA/VTI/VXUS down harder than XLE's gain offsets — net portfolio negative despite XLE's rally |
| 10yr closes >4.75% on two consecutive sessions, tripping rule 6a | ~30-40% given current proximity (4.73-4.75% already tested) | Multiple compression concentrated in NVDA/OMCL/VTI's tech-heavy core; likely the most probable near-term negative catalyst on this list |
| Hormuz situation de-escalates (a real signed reopening, not the partial corridor deal from early August) | ~15-20% | Oil gives back gains, XLE underperforms, everything else likely relieved-rally; portfolio net positive but XLE position lags |
| Idiosyncratic OMCL negative catalyst (contract loss, guidance cut) before next print | ~5-10% | Small dollar impact given position size, but would confirm a structural thesis break per the standing OMCL contingency plan and should trigger a trim, not a hold |
| Broad AI-capex/NVDA-specific de-rating independent of rates (bubble-unwind narrative) | ~15-20% | Concentrated hit to NVDA and VTI's embedded tech weight simultaneously — the correlation risk flagged above realized |

## Hedging strategies for the top 3 risks (equities-only, no options)
1. **Correlation/no-ballast risk (top risk)**: the only real lever at this account size is cash. Recommend treating the current 11.8%-of-pool deployable cash as a floor, not a ceiling, to defend — resist deploying it into new adds while both the rate-shock and Hormuz vectors are live and unresolved, even where BR's policy targets show a gap (e.g., NVDA's underweight). A policy gap is not a green light on a day when the thing that would fill it (more equity beta) is exactly the wrong instrument for the risk in front of us.
2. **Interest-rate/duration risk**: no bond or cash-equivalent ETF is currently held. If/when the rate-shock trigger (10yr >4.75%, two consecutive closes) fires, the practical equities-only response is not to buy a hedge instrument but to *pause* — hold off on adding to NVDA/OMCL specifically, and let XLE's naturally low duration do the ballast work it's already doing.
3. **Geopolitical/Hormuz risk**: XLE is already a partial, if narrow, offset — the position should not be trimmed while this risk is live, even though MS's do-not-add stance (no fresh oil-adjusted DCF re-read since 8/6) argues against sizing up further. Hold, don't add, don't trim, until either the desk posts a fresh read or the situation resolves materially in either direction.

## Rebalancing suggestions
- VTI is running ~2.4pp over a 30% pool target, VXUS ~1.4pp over a 25% pool target (both per BR's own framework) — a modest trim toward target band would be defensible on valuation-discipline grounds, but I would not initiate it purely for rebalancing today: trimming *reduces* the equity sleeve into a day when nothing in the book needs de-risking more urgently than by not adding, and the marginal transaction cost at this position size isn't worth it for a 1-2pp drift.
- Where I differ from BR: I would not treat NVDA's -4pp underweight as an add signal right now. Filling a policy gap by adding equity beta on a day with two live, correlated risk-off catalysts inverts the actual risk priority — cash preservation should outrank policy-target precision until at least one of today's two live vectors clears.
- If/when new capital is deployed, my preference order for risk purposes: (1) let deployable cash rise toward a higher floor than the current 11.8% of pool, given the toolbox has no other hedge; (2) any equity add should go toward the position with the lowest correlation to the rest of the book (OMCL) rather than the position with the highest (NVDA), even though NVDA is the one showing the bigger "gap" on BR's framework.

---
*Prior report: consult `git log -p -- trading-experiment/analysts/bw-risk-assessment.md` for history.*
